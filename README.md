# WiSoft C++ Seminar

WiSoft 연구실에서 C++ 세미나를 진행하면서 공부했던 코드들을 정리한 저장소입니다.

## 참고 도서

이 코드들은 **"이것이 C++이다"** (최호성 저, 한빛미디어) 책을 기반으로 작성되었습니다.

<p align="center">
  <img src="./book_cover.jpg" alt="이것이 C++이다 책 표지" width="300"/>
</p>

---

## 프로젝트 구조

```
Cpp-seminar/
├── README.md                          # 프로젝트 설명
├── book_cover.jpg                     # 참고 도서 표지 이미지
│
├── chap01/                            # Chapter 01: C++ 기본 문법
│   │
│   ├── 기본 출력
│   │   ├── hello.cpp                  # 가장 기본적인 C++ 프로그램
│   │   └── HelloCpp.cpp               # std::cout을 사용한 Hello World
│   │
│   ├── 입출력 (I/O)
│   │   ├── CoutSample.cpp             # cout 출력 스트림 사용법
│   │   ├── CoutString.cpp             # 문자열 출력 예제
│   │   └── CinString.cpp              # cin 입력 스트림 사용법
│   │
│   ├── 변수와 자료형
│   │   ├── AutoSample.cpp             # auto 키워드 (자동 타입 추론)
│   │   └── CountSample                # 카운트 예제 (컴파일된 파일)
│   │
│   ├── 참조자 (Reference)
│   │   ├── ReferenceType.cpp          # 참조자 기본 개념 및 사용법
│   │   ├── ReferenceSwap.cpp          # 참조자를 이용한 값 교환
│   │   ├── CallByReference.cpp        # Call by Reference 개념
│   │   └── RvalueSample.cpp           # R-value 참조 (C++11)
│   │
│   ├── 동적 메모리 관리
│   │   ├── NewDataSample.cpp          # new/delete 연산자 기본 사용법
│   │   └── NewDeleteArray.cpp         # 배열의 동적 할당 및 해제
│   │
│   └── 반복문
│       └── RangeBasedfor.cpp          # 범위 기반 for문 (C++11)
│
├── chap02/                            # Chapter 02: 함수와 네임스페이스
│   │
│   ├── 기본 매개변수 
│   │   ├── DefaultParam.cpp           # 기본 매개변수 사용법
│   │   └── DefaultParam2.cpp          # 기본 매개변수 응용 예제
│   │
│   ├── 함수 오버로딩 
│   │   ├── FuncPoly.cpp               # 함수 다형성 (오버로딩) 예제
│   │   └── FuncAmbiguity.cpp          # 함수 오버로딩 모호성 문제
│   │
│   ├── 함수 템플릿 
│   │   ├── FuncTemplate1.cpp          # 함수 템플릿 기본 사용법
│   │   └── FuncTemplate2.cpp          # 함수 템플릿 응용 예제
│   │
│   ├── 인라인 함수 
│   │   └── InlineSample.cpp           # inline 키워드 사용법
│   │
│   ├── 식별자 검색 순서 
│   │   ├── IdSearchSeq1.cpp           # 지역 변수 우선
│   │   ├── IdSearchSeq2.cpp           # 전역 변수 검색
│   │   ├── IdSearchSeq3.cpp           # 네임스페이스 검색
│   │   ├── IdSearchSeq4.cpp           # using 선언 검색
│   │   └── IdSearchSeq5.cpp           # 검색 순서 종합 예제
│   │
│   └── 네임스페이스 
│       ├── NamespaceSample.cpp        # 네임스페이스 기본 사용법
│       ├── NamespaceUsing.cpp         # using 선언/지시문
│       ├── NamespaceNested.cpp        # 중첩 네임스페이스
│       └── NamespaceOver.cpp          # 네임스페이스 확장
│
└── chap03/                            # Chapter 03: 클래스
    │
    ├── OOP 소개 (절차지향 vs 객체지향)
    │   ├── Hello00P1.c                # C 스타일 절차지향 예제 1
    │   ├── Hello00P2.c                # C 스타일 절차지향 예제 2
    │   ├── Hello00P3.c                # C 스타일 절차지향 예제 3
    │   └── Hello00P.cpp               # C++ 객체지향 변환 예제
    │
    ├── 접근 제어 
    │   ├── AccessCtrl.cpp             # public/private 접근 제어자
    │   └── ClassNew.cpp               # 동적 객체 생성 (new/delete)
    │
    ├── 생성자와 소멸자 
    │   ├── Constructor1.cpp           # 생성자 기본 개념
    │   ├── Constructor2.cpp           # 생성자 응용
    │   ├── ConstructorOver1.cpp       # 생성자 오버로딩 1
    │   ├── ConstructorOver2.cpp       # 생성자 오버로딩 2
    │   ├── ExpDefaultConstructor.cpp  # 명시적 기본 생성자
    │   ├── MemberInit1.cpp            # 멤버 초기화 리스트 1
    │   ├── MemberInit2.cpp            # 멤버 초기화 리스트 2
    │   ├── MemberInit3.cpp            # 멤버 초기화 리스트 3
    │   ├── MemberInit4.cpp            # 멤버 초기화 리스트 4
    │   ├── MemberInit5.cpp            # 멤버 초기화 리스트 5
    │   └── RefSample.cpp              # 참조자 멤버 초기화
    │
    ├── this 포인터 
    │   └── ThisPointer.cpp            # this 포인터 사용법
    │
    ├── const 멤버 
    │   ├── ConstMethod1.cpp           # const 메서드 기본
    │   ├── ConstMethod2.cpp           # const 메서드 응용
    │   └── ConstCastSample.cpp        # const_cast 사용법
    │
    ├── 정적 멤버 
    │   └── StaticMember.cpp           # static 멤버 변수/함수
    │
    ├── 메서드 오버로딩 
    │   ├── MemberOver1.cpp            # 멤버 함수 오버로딩 1
    │   ├── MemberOver2.cpp            # 멤버 함수 오버로딩 2
    │   └── MemberNotOver.cpp          # 오버로딩 불가 케이스
    │
    └── 실습 
        └── StringCtrlSample/          # MyString 클래스 구현
            ├── MyString.h             # 헤더 파일
            ├── MyString.cpp           # 구현 파일
            └── StringCtrlSample.cpp   # 테스트 메인
│
└── chap04/                            # Chapter 04: 복사 생성자와 형변환
    │
    ├── 형변환 
    │   ├── AutoTypecast.cpp           # 자동 형변환 예제
    │   └── ImTypeCast.cpp             # 암시적 형변환 예제
    │
    ├── 복사 생성자 
    │   ├── CopyConstructor1.cpp       # 복사 생성자 기본 개념
    │   ├── CopyConstructor2.cpp       # 복사 생성자 응용
    │   ├── ShallowCopy.cpp            # 얕은 복사 예제
    │   ├── ShallowCopy2.cpp           # 얕은 복사 심화 예제
    │   └── BadShallowCopy.cpp         # 얕은 복사의 문제점
    │
    ├── R-value 참조 
    │   ├── RvalueRef1.cpp             # R-value 참조 기본
    │   ├── RvalueRef2.cpp             # R-value 참조 응용 1
    │   └── RvalueRef3.cpp             # R-value 참조 응용 2
    │
    ├── 이동 시맨틱스 
    │   ├── MoveSemantics.cpp          # 이동 시맨틱스 예제
    │   └── TempObject.cpp             # 임시 객체와 이동
    │
    ├── 함수와 클래스 
    │   └── FunctionAndClass.cpp       # 함수와 클래스 상호작용
    │
    └── 실습 
        └── StringCtrlSample/          # MyString 클래스 확장
            ├── MyString.h             # 헤더 파일
            ├── MyString.cpp           # 구현 파일 (복사/이동 생성자 포함)
            └── StringCtrlSample.cpp   # 테스트 메인
```

---

## 개발 환경

| 항목 | 사양 |
|------|------|
| **하드웨어** | Raspberry Pi 4 |
| **운영체제** | Ubuntu Linux |
| **인터페이스** | CLI (Command Line Interface) |
| **컴파일러** | g++ (C++11 이상) |

> 이 프로젝트의 모든 코드는 라즈베리파이4에서 Ubuntu Linux CLI 환경으로 작성 및 테스트되었습니다.

---

## 컴파일 방법

각 `.cpp` 파일은 다음과 같이 컴파일할 수 있습니다:

```bash
# g++ 사용 (C++11 이상 권장)
g++ -std=c++11 -o output_name source_file.cpp

# 예시
g++ -std=c++11 -o HelloCpp chap01/HelloCpp.cpp
./HelloCpp
```

---

## 참고 사항

- 이 코드들은 학습 목적으로 작성되었습니다.
- Visual Studio 프로젝트 관련 코드(`#include "stdafx.h"`, `_tmain` 등)는 주석 처리되어 있습니다.
- 범용 컴파일러(g++, clang++)에서 동작하도록 수정되었습니다.

---

<p align="center">
  <b>WiSoft Lab</b><br>
  C++ Seminar Study Materials
</p>
