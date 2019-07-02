juliet-testsuites-sample
===============================================================

이 저장소는 juliet-testsuite v1.3 중 `CWE-121, CWE-190, CWE-476`을 대상으로 각 학교 별로 디렉토리 당 테스트 샘플 30개씩을 추출하여 공유하는 곳입니다(good/bad 혼합된 코드 중 C 소스 대상). 추출한 샘플은 학교 별로 분류된 디렉토리에 복사하여 주시기 바랍니다.

* 홍익대(hongik): `CWE121_Stack_Based_Buffer_Overflow/s01,s02,s03`
* 한국산업기술대(kpu): `CWE121_Stack_Based_Buffer_Overflow/s04,s05,s06`
* 동국대(dongguk): `CWE121_Stack_Based_Buffer_Overflow/s07,s08,s09`
* 고려대(korea): `CWE190_Integer_Overflow/s01,s02,s03`
* 항공대(kau): `CWE190_Integer_Overflow/s04,s05,s06`
* 동덕여대(dongduk): `CWE190_Integer_Overflow/s07`, `CWE476_NULL_Pointer_Dereference`

1. [Quickstart](#quickstart)
2. [설정 방법](#setting)
3. [참고사항](#ref)

# <a name="quickstart"></a>Quickstart

## On Linux
	# export ROOT_DIR=/PATH/TO/CLONE/juliet-testsuites-sample
	# git config --global user.email "you@example.com"
	# git config --global user.name "Your Name"
	# git clone https://github.com/thkim312/juliet-testsuites-sample.git
	# cd juliet-testsuites-sample
	# $(SELECT_SAMPLES_FROM_CWE_DIRS)
	# cp $(ROOT_DIR)/testsuites/$(CWE_ID)/s$(NUM)/$(SELECTED_SAMPLES) $(ROOT_DIR)/sample/$(UNIV_NAME)/$(CWE_ID)/s$(NUM)
	# git add .
	# git commit -m "Your tag message"
	# git pull
	# git push origin master
  
# <a name="setting"></a>설정 방법

# <a name="ref"></a>참고사항
