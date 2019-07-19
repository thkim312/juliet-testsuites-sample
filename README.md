juliet-testsuites-sample
===============================================================

이 저장소는 juliet-testsuite v1.3 중 각 학교 별로 지정된 디렉토리에서 테스트 샘플 30개씩을 추출하여 공유하는 곳입니다(good/bad 혼합된 코드 중 C 소스 대상). 추출한 샘플은 학교 별로 분류된 디렉토리에 복사하여 주시기 바랍니다.

## 2차
* 고려대(korea): `CWE78_OS_Command_Injection/s01,s02,s03`
* 항공대(kau): `CWE78_OS_Command_Injection/s04,s05,s06`
* 동덕여대(dongduk): `CWE78_OS_Command_Injection/s07,s08,s09`
* 홍익대(hongik): `CWE134_Uncontrolled_Format_String/s01,s02,s03`
* 동국대(dongguk): `CWE134_Uncontrolled_Format_String/s04,s05,s06`
* 한국산업기술대(kpu): `CWE415_Double_Free`, `CWE416_Use_After_Free`

## 1차 (~2019.07.19)
* 홍익대(hongik): `CWE121_Stack_Based_Buffer_Overflow/s01,s02,s03`
* 한국산업기술대(kpu): `CWE121_Stack_Based_Buffer_Overflow/s04,s05,s06`
* 동국대(dongguk): `CWE121_Stack_Based_Buffer_Overflow/s07,s08,s09`
* 고려대(korea): `CWE190_Integer_Overflow/s01,s02,s03`
* 항공대(kau): `CWE190_Integer_Overflow/s04,s05,s06`
* 동덕여대(dongduk): `CWE190_Integer_Overflow/s07`, `CWE476_NULL_Pointer_Dereference`

1. [Quickstart](#quickstart)
2. [사용 방법](#howtouse)
3. [참고사항](#ref)

# <a name="quickstart"></a>Quickstart

## On Linux or Windows with Git Bash
	# export ROOT_DIR=/PATH/TO/CLONE/juliet-testsuites-sample
	# git config --global user.email "you@example.com"
	# git config --global user.name "Your Name"
	# git clone https://github.com/thkim312/juliet-testsuites-sample.git
	# cd juliet-testsuites-sample
	# $(SELECT_SAMPLES_FROM_CWE_DIRS)
	# cp $(ROOT_DIR)/testsuites/$(CWE_ID)/s$(NUM)/$(SELECTED_SAMPLES) $(ROOT_DIR)/sample/$(UNIV_NAME)/$(CWE_ID)/s$(NUM)
	# git add .
	# git status (optional)
	# git commit -m "Your tag message"
	# git pull
	# git push origin master
  
# <a name="howtouse"></a>사용 방법

## Step 1: 사용자 정보 등록
git을 설치 후 가장 먼저 해야하는 일은 사용자 이름과 이메일 주소를 설정하는 것입니다. git은 commit할 때마다 이 정보를 사용합니다. 한 번 commit한 후에는 정보를 변경할 수 없습니다.

	# git config --global user.email "you@example.com"
	# git config --global user.name "Your Name"

`--global` 옵션으로 설정하면 시스템에서 사용자가 프로젝트에 접근하여 사용할 때 이 정보를 사용합니다. 프로젝트마다 다른 이름과 이메일 주소를 사용하고 싶다면 `--global` 옵션을 제외하고 명령을 실행합니다.

## Step 2: 원격 저장소와의 연결
`git clone` 명령을 통해 원격 저장소로부터 데이터를 가져옵니다. 원격 저장소에서 데이터를 정상적으로 가지고 왔다면 `juliet-testsuites-sample` 디렉토리가 생성된걸 확인하실 수 있습니다.

	# git clone https://github.com/thkim312/juliet-testsuites-sample.git
	# cd juliet-testsuites-sample

## Step 3: 샘플링
`juliet-testsuites-sample` 디렉토리에는 `testsuites`와 `sample`의 두 가지 하위 디렉토리가 있습니다. `testsuites`는 juliet-testsuites v1.3에서 검사 대상인 `CWE-121`, `CWE-190`, `CWE-476`만을 복사해놓은 디렉토리입니다. 각 CWE 별 하위 디렉토리에서 30개씩의 테스트 샘플을 추출하시면 됩니다.

	# $(SELECT_SAMPLES_FROM_CWE_DIRS)
	
 `sample`은 샘플링한 데이터를 저장하는 디렉토리입니다. 학교 이름으로 구분된 하위 디렉토리에 테스트 샘플을 복사하시면 됩니다.

	# cp $(ROOT_DIR)/testsuites/$(CWE_ID)/s$(NUM)/$(SELECTED_SAMPLES) $(ROOT_DIR)/sample/$(UNIV_NAME)/$(CWE_ID)/s$(NUM)

## Step 4: 원격 저장소에 push 하기
원격 저장소에 샘플 데이터를 저장할 준비가 완료되셨다면 먼저 `git add`를 통해 추가하고자 하는 데이터를 추적합니다. `.`은 현재 디렉토리를 기준으로 하위 디렉토리를 모두 순회하며 변경된 데이터를 추적한다는 의미입니다.

	# git add .
	
`git status`를 통해 변경된 데이터의 상태를 확인하실 수 있습니다.
	
	# git status
	
수정 사항을 commit하기 위하여 `git commit`을 실행합니다. 메시지를 인라인으로 첨부하기 위하여 `-m` 옵션을 사용할 수 있습니다.
	
	# git commit -m "Your tag message"

원격 저장소에 push하기 전에 원격 저장소와의 동기화를 위해 `git pull`을 실행합니다.

	# git pull

마지막으로 저장소에 데이터를 push하기 위하여 `git push`를 실행합니다. 아래 명령은 master 브랜치를 origin 서버에 push하라는 뜻입니다.
	
	# git push origin master

# <a name="ref"></a>참고사항
* [git 공식 설명서](https://git-scm.com/book/ko/v2)
* [git 간편안내서](https://rogerdudler.github.io/git-guide/index.ko.html)
* [다양한 환경에서 git 사용하기](https://git-scm.com/book/ko/v2/Appendix-A%3A-%EB%8B%A4%EC%96%91%ED%95%9C-%ED%99%98%EA%B2%BD%EC%97%90%EC%84%9C-Git-%EC%82%AC%EC%9A%A9%ED%95%98%EA%B8%B0-GUI)
