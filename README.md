# WiSoft C++ Seminar

WiSoft 연구실에서 C++ 세미나를 진행하면서 공부했던 코드들을 정리한 저장소입니다.

## 📚 참고 도서

이 코드들은 **"이것이 C++이다"** (최호성 저, 한빛미디어) 책을 기반으로 작성되었습니다.

<p align="center">
  <img src="./book_cover.jpg" alt="이것이 C++이다 책 표지" width="300"/>
</p>

---

## 📁 프로젝트 구조

```
Cpp-seminar/
├── 📖 README.md                    # 프로젝트 설명
├── 🖼️ book_cover.jpg               # 참고 도서 표지 이미지
│
└── 📂 chap01/                      # Chapter 01: C++ 기본 문법
    │
    ├── 🔹 기본 출력
    │   ├── hello.cpp               # 가장 기본적인 C++ 프로그램
    │   └── HelloCpp.cpp            # std::cout을 사용한 Hello World
    │
    ├── 🔹 입출력 (I/O)
    │   ├── CoutSample.cpp          # cout 출력 스트림 사용법
    │   ├── CoutString.cpp          # 문자열 출력 예제
    │   └── CinString.cpp           # cin 입력 스트림 사용법
    │
    ├── 🔹 변수와 자료형
    │   ├── AutoSample.cpp          # auto 키워드 (자동 타입 추론)
    │   └── CountSample             # 카운트 예제 (컴파일된 파일)
    │
    ├── 🔹 참조자 (Reference)
    │   ├── ReferenceType.cpp       # 참조자 기본 개념 및 사용법
    │   ├── ReferenceSwap.cpp       # 참조자를 이용한 값 교환
    │   ├── CallByReference.cpp     # Call by Reference 개념
    │   └── RvalueSample.cpp        # R-value 참조 (C++11)
    │
    ├── 🔹 동적 메모리 관리
    │   ├── NewDataSample.cpp       # new/delete 연산자 기본 사용법
    │   └── NewDeleteArray.cpp      # 배열의 동적 할당 및 해제
    │
    └── 🔹 반복문
        └── RangeBasedfor.cpp       # 범위 기반 for문 (C++11)
```

---

## 📋 Chapter 01 상세 설명

### 🔹 기본 출력
| 파일명 | 설명 |
|--------|------|
| `hello.cpp` | C++의 가장 기본적인 프로그램 구조 |
| `HelloCpp.cpp` | `std::cout`과 `std::endl`을 사용한 출력 |

### 🔹 입출력 (I/O)
| 파일명 | 설명 |
|--------|------|
| `CoutSample.cpp` | `cout` 출력 스트림의 다양한 사용법 |
| `CoutString.cpp` | 문자열을 `cout`으로 출력하는 예제 |
| `CinString.cpp` | `cin`을 이용한 사용자 입력 처리 |

### 🔹 변수와 자료형
| 파일명 | 설명 |
|--------|------|
| `AutoSample.cpp` | C++11의 `auto` 키워드를 이용한 자동 타입 추론 |

### 🔹 참조자 (Reference)
| 파일명 | 설명 |
|--------|------|
| `ReferenceType.cpp` | 참조자의 기본 개념과 포인터와의 비교 |
| `ReferenceSwap.cpp` | 참조자를 활용한 두 변수의 값 교환 |
| `CallByReference.cpp` | 함수에서 Call by Reference 방식 사용 |
| `RvalueSample.cpp` | C++11의 R-value 참조(`&&`) 개념 |

### 🔹 동적 메모리 관리
| 파일명 | 설명 |
|--------|------|
| `NewDataSample.cpp` | `new`와 `delete` 연산자로 메모리 할당/해제 |
| `NewDeleteArray.cpp` | `new[]`와 `delete[]`로 배열 동적 할당 |

### 🔹 반복문
| 파일명 | 설명 |
|--------|------|
| `RangeBasedfor.cpp` | C++11의 범위 기반 for문 사용법 |

---

## � 개발 환경

| 항목 | 사양 |
|------|------|
| **하드웨어** | Raspberry Pi 4 |
| **운영체제** | Ubuntu Linux |
| **인터페이스** | CLI (Command Line Interface) |
| **컴파일러** | g++ (C++11 이상) |

> 📌 이 프로젝트의 모든 코드는 라즈베리파이4에서 Ubuntu Linux CLI 환경으로 작성 및 테스트되었습니다.

---

## �🛠️ 컴파일 방법

각 `.cpp` 파일은 다음과 같이 컴파일할 수 있습니다:

```bash
# g++ 사용 (C++11 이상 권장)
g++ -std=c++11 -o output_name source_file.cpp

# 예시
g++ -std=c++11 -o HelloCpp chap01/HelloCpp.cpp
./HelloCpp
```

---

## 📌 참고 사항

- 이 코드들은 학습 목적으로 작성되었습니다.
- Visual Studio 프로젝트 관련 코드(`#include "stdafx.h"`, `_tmain` 등)는 주석 처리되어 있습니다.
- 범용 컴파일러(g++, clang++)에서 동작하도록 수정되었습니다.

---

<p align="center">
  <b>WiSoft Research Lab</b><br>
  C++ Seminar Study Materials
</p>
