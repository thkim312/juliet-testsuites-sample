/* NOTE - eventually this file will be automatically updated using a Perl script that understand
 * the naming of test case files, functions, and namespaces.
 */

#include <time.h>   /* for time() */
#include <stdlib.h> /* for srand() */

#include "std_testcase.h"
#include "testcases.h"

int main(int argc, char * argv[]) {

	/* seed randomness */

	srand( (unsigned)time(NULL) );

	globalArgc = argc;
	globalArgv = argv;

#ifndef OMITGOOD

	/* Calling C good functions */
	/* BEGIN-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */
	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_02_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_02_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_03_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_03_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_66_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_66_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_07_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_07_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_68_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_68_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_41_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_41_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_09_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_09_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_05_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_05_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_67_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_67_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_54_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_54_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_04_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_04_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_22_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_22_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_08_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_08_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_53_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_53_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_18_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_18_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_12_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_12_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_51_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_51_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_21_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_21_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_17_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_17_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_31_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_31_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_11_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_11_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_14_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_14_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_34_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_34_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_65_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_65_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_16_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_16_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_61_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_61_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_13_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_13_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_10_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_10_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_01_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_01_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_42_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_42_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_44_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_44_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_64_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_64_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_45_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_45_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_32_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_32_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_15_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_15_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_52_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_52_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_06_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_06_good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_63_good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_63_good();

	/* END-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */





#ifdef __cplusplus
	/* Calling C++ good functions */
	/* BEGIN-AUTOGENERATED-CPP-GOOD-FUNCTION-CALLS */
	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_81::good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_81::good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_84::good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_84::good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_72::good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_72::good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_74::good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_74::good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_84::good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_84::good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_82::good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_82::good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_73::good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_73::good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_83::good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_83::good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_43::good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_43::good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_62::good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_62::good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_33::good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_33::good();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_83::good();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_83::good();

	/* END-AUTOGENERATED-CPP-GOOD-FUNCTION-CALLS */

#endif /* __cplusplus */

#endif /* OMITGOOD */

#ifndef OMITBAD

	/* Calling C bad functions */
	/* BEGIN-AUTOGENERATED-C-BAD-FUNCTION-CALLS */
	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_02_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_02_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_03_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_03_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_66_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_66_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_07_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_07_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_68_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_68_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_41_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_41_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_09_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_09_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_05_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_05_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_67_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_67_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_54_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_54_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_04_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_04_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_22_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_22_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_08_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_08_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_53_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_53_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_18_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_18_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_12_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_12_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_51_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_51_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_21_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_21_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_17_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_17_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_31_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_31_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_11_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_11_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_14_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_14_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_34_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_34_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_65_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_65_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_16_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_16_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_61_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_61_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_13_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_13_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_10_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_10_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_01_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_01_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_42_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_42_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_44_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_44_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_64_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_64_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_45_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_45_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_32_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_32_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_15_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_15_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_52_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_52_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_06_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_06_bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_63_bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_63_bad();

	/* END-AUTOGENERATED-C-BAD-FUNCTION-CALLS */




	
#ifdef __cplusplus
	/* Calling C++ bad functions */
	/* BEGIN-AUTOGENERATED-CPP-BAD-FUNCTION-CALLS */
	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_81::bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_81::bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_84::bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_84::bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_72::bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_72::bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_74::bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_74::bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_84::bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_84::bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_82::bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_82::bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_73::bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_73::bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_83::bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_83::bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_43::bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_43::bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_62::bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_62::bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_33::bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_33::bad();

	printLine("Calling CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_83::bad();");
	CWE121_Stack_Based_Buffer_Overflow__CWE806_char_declare_snprintf_83::bad();

	/* END-AUTOGENERATED-CPP-BAD-FUNCTION-CALLS */
	
#endif /* __cplusplus */

#endif /* OMITBAD */

	return 0;

} 
