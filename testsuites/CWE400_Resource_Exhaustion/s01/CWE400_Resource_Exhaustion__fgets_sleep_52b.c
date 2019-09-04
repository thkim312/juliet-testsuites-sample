/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE400_Resource_Exhaustion__fgets_sleep_52b.c
Label Definition File: CWE400_Resource_Exhaustion.label.xml
Template File: sources-sinks-52b.tmpl.c
*/
/*
 * @description
 * CWE: 400 Resource Exhaustion
 * BadSource: fgets Read data from the console using fgets()
 * GoodSource: Assign count to be a relatively small number
 * Sinks: sleep
 *    GoodSink: Validate count before using it as a parameter in sleep function
 *    BadSink : Use count as the parameter for sleep withhout checking it's size first
 * Flow Variant: 52 Data flow: data passed as an argument from one function to another to another in three different source files
 *
 * */

#include "std_testcase.h"

#define CHAR_ARRAY_SIZE (3 * sizeof(count) + 2)

#ifdef _WIN32
#include <windows.h>
#define SLEEP Sleep
#else
#include <unistd.h>
#define SLEEP usleep
#endif

#ifndef OMITBAD

/* bad function declaration */
void CWE400_Resource_Exhaustion__fgets_sleep_52c_badSink(int count);

void CWE400_Resource_Exhaustion__fgets_sleep_52b_badSink(int count)
{
    CWE400_Resource_Exhaustion__fgets_sleep_52c_badSink(count);
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* goodG2B uses the GoodSource with the BadSink */
void CWE400_Resource_Exhaustion__fgets_sleep_52c_goodG2BSink(int count);

void CWE400_Resource_Exhaustion__fgets_sleep_52b_goodG2BSink(int count)
{
    CWE400_Resource_Exhaustion__fgets_sleep_52c_goodG2BSink(count);
}

/* goodB2G uses the BadSource with the GoodSink */
void CWE400_Resource_Exhaustion__fgets_sleep_52c_goodB2GSink(int count);

void CWE400_Resource_Exhaustion__fgets_sleep_52b_goodB2GSink(int count)
{
    CWE400_Resource_Exhaustion__fgets_sleep_52c_goodB2GSink(count);
}

#endif /* OMITGOOD */
