/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE190_Integer_Overflow__unsigned_int_rand_add_61a.c
Label Definition File: CWE190_Integer_Overflow.label.xml
Template File: sources-sinks-61a.tmpl.c
*/
/*
 * @description
 * CWE: 190 Integer Overflow
 * BadSource: rand Set data to result of rand()
 * GoodSource: Set data to a small, non-zero number (two)
 * Sinks: add
 *    GoodSink: Ensure there will not be an overflow before adding 1 to data
 *    BadSink : Add 1 to data, which can cause an overflow
 * Flow Variant: 61 Data flow: data returned from one function to another in different source files
 *
 * */

#include "std_testcase.h"

#ifndef OMITBAD

/* bad function declaration */
unsigned int CWE190_Integer_Overflow__unsigned_int_rand_add_61b_badSource(unsigned int data);

void CWE190_Integer_Overflow__unsigned_int_rand_add_61_bad()
{
    unsigned int data;
    data = 0;
    data = CWE190_Integer_Overflow__unsigned_int_rand_add_61b_badSource(data);
    {
        /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
        unsigned int result = data + 1;
        printUnsignedLine(result);
    }
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* goodG2B uses the GoodSource with the BadSink */
unsigned int CWE190_Integer_Overflow__unsigned_int_rand_add_61b_goodG2BSource(unsigned int data);

static void goodG2B()
{
    unsigned int data;
    data = 0;
    data = CWE190_Integer_Overflow__unsigned_int_rand_add_61b_goodG2BSource(data);
    {
        /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
        unsigned int result = data + 1;
        printUnsignedLine(result);
    }
}

/* goodB2G uses the BadSource with the GoodSink */
unsigned int CWE190_Integer_Overflow__unsigned_int_rand_add_61b_goodB2GSource(unsigned int data);

static void goodB2G()
{
    unsigned int data;
    data = 0;
    data = CWE190_Integer_Overflow__unsigned_int_rand_add_61b_goodB2GSource(data);
    /* FIX: Add a check to prevent an overflow from occurring */
    if (data < UINT_MAX)
    {
        unsigned int result = data + 1;
        printUnsignedLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}

void CWE190_Integer_Overflow__unsigned_int_rand_add_61_good()
{
    goodG2B();
    goodB2G();
}

#endif /* OMITGOOD */

/* Below is the main(). It is only used when building this testcase on
   its own for testing or for building a binary to use in testing binary
   analysis tools. It is not used when compiling all the testcases as one
   application, which is how source code analysis tools are tested. */

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    /* seed randomness */
    srand( (unsigned)time(NULL) );
#ifndef OMITGOOD
    printLine("Calling good()...");
    CWE190_Integer_Overflow__unsigned_int_rand_add_61_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
#ifndef OMITBAD
    printLine("Calling bad()...");
    CWE190_Integer_Overflow__unsigned_int_rand_add_61_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
