
// #include : 헤더파일을 여기에 포함시키는 기능이다.
// # 이 붙은 것들은 전처리기이다.
#include <iostream>
#include <time.h>

using namespace std;
// 강의 1 ~ 4화

// 실행 과정 : 컴파일 -> 빌드 -> 실행
// 컴파일 : 번역작업이다.
// Ctrl + Shift + B 를 이용해서 컴파일 빛 빌드를 할 수 있다.
// Ctrl + F5 실행
// C++의 시작점은 main함수이다. main함수는 반드시 있어야 한다.
int main()
{

	// C++  표준 기능의 대부분은 std 라는 namespace 안에 존재하고 있다. 이름이 겹지는 것을 방지하기 위해서이다.
	// cout : 콘솔창에 출력해주는 기능이다. 뒤에 있는 ""(큰따옴표) 안에 있는 문자들을 화면에 출력해준다.
	// 문자 여러개를 사용할때는 반드시 "" 안에 넣어주고 이런것을 문자열 이라고 한다.
	// endl : 개행기능이다.
/*
	std::cout << "Test Output" << std::endl;
	std::cout << "가나다라" << std::endl;

	cout << "std namespace 사용" << endl;
*/
	/*
	변수 : 변하는 수  값이 바뀔 수 있다.
	용량의 최소단위 : bit
	1byte = 8bit
	1kbyte = 1024byte
	1mbyte = 1024kbyte
	1gbyte = 1024mbyte
	1tbyte = 1024gbyte

	문자를 표현하는 방법 : ASCII 코드 표를 가지고 있다.
	false : 0
	true : 0이 아닌 모든 수
	종류	|	용량	|	데이터	|	표현범위		|	unsigned	|
	char	|	1byte	|	문자	|	-128 ~ 127		|	0 ~ 255		|
	bool	|	1byte	|	참/거짓	|	true / false	|	true/false	|	
	short	|	2byte	|	정수	|	-32768 ~ 32767	|	0 ~ 65535	|
	int		|	4byte	|	정수	|	약 -22억 ~ 21억	|	0 ~ 약 43억	|
	float	|	4byte	|	실수	|	
	double	|	8byte	|	실수	|	
	*/
	// = : 대입연산자이다. 오른쪽에 있는 값을 왼쪽으로 대입한다.
/*
	int Number = 10;
	Number = 20;

	cout << Number << endl;

	bool	bTest = true;
	bTest = false;

	// 영문이나 숫자는 1byte를 차지한다. 하지만 한글이나 한문 등의 문자들은 2byte를
	// 차지하기 때문에 char 변수 하나에 저장하기가 힘들다
	cout << bTest << endl;

	char	cTest = 't';

	cout << cTest << endl;

	float	fNumber = 3.14f;

	cout << fNumber << endl;

	double	dNumber = 123.4567;

	cout << dNumber << endl;
*/
	/*
	사칙연산자 : +, -, *, /, %(나머지 연산자)
	관계연산자 : 값대 값을 연산하여 참/거짓으로 결과를 반환한다.
	>, >=, <. <=. ==, !=

	논리연산자 : 참/거짓 대 참/거짓 연산하여 참/거짓으로 결과를 반환한다.
	AND(&&), OR(||), NOT(!)
	A	B	AND OR
	0	0	0	0
	1	0	0	1
	0	1	0	1
	1	1	1	1

	A	NOT
	0	1
	1	0

	진수 : 2진수, 8진수, 10진수, 16진수
	2진수 : 0 ~ 1
	8진수 : 0 ~ 7
	10진수 : 0 ~ 9
	16진수 : 0 ~ 15: 0 ~ 9 10 ~ 15 : a ~ f
	진수들은 서로 다른 진수로 변환이 가능하다.
	87을 2진수, 16진수로 변환해보자.

	먼저 2진수로 변환한다.
	87 / 2 = 43 -- 1
	43 / 2 = 21 -- 1
	21 / 2 = 10 -- 1
	10 / 2 = 5 --- 0
	5 / 2 = 2 ---- 1
	2 / 2 = 1 ---- 0
	가장 마지막에 나온 몫부터 역순으로 나머지값들을 읽는다.
	1010111 이 된다.

	16진수로 변환해보자. 10진수를 바로 16진수로 변환하는 것 보다 2진수로 변환한 후에
	16진수로 변환하는 것이 쉽다.

	1010111 을 오른쪽으로부터 4자리씩 끊어서 계산한다. 16진수 1자리는 2진수 4자리이다.
	0101 0111
	8421 8421

	2진수가 1인 부분의 값을 더한다
	16진수 57 이 된다.

	53 / 2 = 26 -- 1
	26 / 2 = 13 -- 0
	13 / 2 = 6 --- 1
	6 / 2 = 3 ---- 0
	3 / 2 = 1 ---- 1

	비트단위 논리연산자 : 2진수 단위의 연산을 한다. 값 대 값을 연산하여 값으로 나온다.
	종류 : AND(&), OR(|), NOT(~), XOR(^)
	A	B	XOR
	0	0	0	
	1	0	1
	0	1	1
	1	1	0

	87 & 53 = 
	87 : 1010111
	53 : 110101

	먼저 위처럼 2진수로 바꾼 후에 2진수 각 자리별로 논리연산을 실행한다.
	 1010111
	&0110101
	 0010101
	 10101 이 나온다.
	 10진수로 변환하면 21이 나온게 된다.
	*/

/*	cout << "10 < 20 = " << (10 < 20) << endl;
	cout << "10 <= 20 = " << (10 <= 20) << endl;
	cout << "10 > 20 = " << (10 > 20) << endl;
	cout << "10 >= 20 = " << (10 >= 20) << endl;
	cout << "10 == 20 = " << (10 == 20) << endl;
	cout << "10 != 20 = " << (10 != 20) << endl;

	cout << "숫자를 입력하세요 : ";
	cin >> Number;

	cout << "10 ~ 20 = " << (10 <= Number && Number <= 20) << endl;

	cout << "87 & 53 = " << (87 & 53) << endl;	// 버프 저장 할 때
*/

// 강의 1 ~ 4화

// 강의 5 ~ 7화

	// 상수 : 변하지 않는 수, 값을 한번 지정해놓으면 바꿀 수 없다.
	// 상수는 선언과 동시에 값을 지정해두어야 한다.
	// 0x 16진수
	// 헝가리안 표기법
	const int iAttack = 0x00000001;		// 1
	const int iArmor = 0x00000002;		// 10
	const int iHP = 0x00000004;			// 100
	const int iMP = 0x00000008;			// 1000
	const int iCritical = 0x00000010;	// 10000

	// 버프를 추가 할 때는 | 로 한다.
	// 001 | 100 = 00101 | 10000 = 10101 
	int iBuf = iAttack | iHP | iCritical;

	// 연산자 축약형 : 연산자를 줄여서 사용할 수 있다.
	// 아래를 풀어서 쓰면 iBuf = iBuf ^ iHP;
	// 10101 ^ 00100 = 10001
	iBuf ^= iHP;

	// 10001 ^ 00100 = 10101
	iBuf ^= iHP;

	// ^(XOR)를 활용하면 껏다 켰다 하는 스위치 처럼 사용가능

	// & 연산자로 버프가 켜져있는지 확인
	// 배열로 왜 안함? 속도가 빠름,
	// 10101 & 00001 = 1
	cout << "Attack : " << (iBuf & iAttack) << endl;
	// 10101 & 00010 = 0
	cout << "Armor : " << (iBuf & iArmor) << endl;
	cout << "HP : " << (iBuf & iHP) << endl;
	cout << "MP : " << (iBuf & iMP) << endl;
	cout << "Critical : " << (iBuf & iCritical) << endl;

	/*
	쉬프트 연산자 : <<, >> 값 대 값을 연산하여 값으로 나오게 된다.
	이 연산자 또한 이진수 단위의 연산을 하게 된다.
	20 << 2 = 80	// 20에다가 2의 2제곱을 곱한것과 같다.
	20 << 3 = 160	// 20에다가 2의 3제곱을 곱한것과 같다.
	20 << 4 = 320	// 20에다가 2의 4제곱을 곱한것과 같다.
	// 빠른 곱하기
	2의 n제곱단위로 곱할 때 사용

	20을 2진수로 변환 한다.
	1010000
	10100000
	101000000

	// 정수 대 정수 연산은 무조건 정수, 둘 중 하나라도 실수가 있으면 실수가 나옴
	// 빠른 나누기
	// 2로 나누는 것 보다 0.5로 곱하는 게 빠름
	20 >> 2 = 5
	20 >> 3 = 2
	101
	10
	*/

	int iHigh = 187;
	int iLow = 13560;

	int iNumber = iHigh;
	// 비트 필드
	// 4바이트를 2개로 쪼갬 | 상 | 하 |
	// 상위 16비트, 하위 16비트
	// iNumber에는 187이 들어가 있다. 이 값을 <- 이 방향으로 16비트 이동시키면
	// 상위 16비트에 값이 들어가게 된다.
	iNumber <<= 16;

	// 하위 16비트를 채운다.
	iNumber |= iLow;

	// High 값을 출력한다.
	cout << "High : " << (iNumber >> 16) <<endl;
	// Low 값을 출력
	// 0x0000ffff & 상위 16비트는 무조건 0, 하위는 그값이 나옴
	cout << "Low : " << (iNumber & 0x0000ffff) << endl;

	// 증감연산자 : ++, -- 가 있다. 1증가, 1감소이다.
	iNumber = 10;

	// 전치
	++iNumber;
	
	// 후치
	iNumber++;

	cout << ++iNumber << endl;
	cout << iNumber++ << endl;
	cout << iNumber << endl;

	/*
	분기문에는 크게	2가지 종류가 있다. if문, switch문이 존재한다.
	if문 : 조건을 체크해주는 기능이다.
	형태 : if(조건식){코드블럭}
	if문은 조건식이 true가 될 경우 코드블럭 안의 코드가 동작된다.
	false일 경우에는 동작되지 않는다.
	*/

	if (false) 
	{
		cout << "if문 조건이 ture 입니다." << endl;
	}

	// 버프가 있는지 확인한다.
	if ((iBuf & iAttack) != 0)
	{
		cout << "Attack 버프가 있습니다." << endl;
	}

	// if문 아래에 들어갈 코드가 1줄일 경우 {코드블럭}을 생략할 수 있다.
	if ((iBuf & iArmor) != 0)
		cout << "Armor 버프가 있습니다." << endl;

	if ((iBuf & iHP) != 0)
		cout << "HP 버프가 있습니다." << endl;

	if ((iBuf & iMP) != 0)
		cout << "MP 버프가 있습니다." << endl;

	if ((iBuf & iCritical) != 0)
		cout << "Critical 버프가 있습니다." << endl;

	/*
	else : if문과 반드시 같이 사용이 되어야 한다.
	if문 조건이 false일 경우 else가 있다면 else 구문 안의 코드가 동작된다.

	else if : if문과 반드시	같이 사용이 되어야 한다.
	if문 아래 와야 하고 else 보다는 위에 있어야 한다.
	else if는 자신의 위에 있는 조건식이 false일 경우 다음 else if의 조건식을 체크한다.
	else if는 몇개든 사용이 가능하다.
	*/

	if (false)
		cout << "if문 조건이 true입니다." << endl;
	else
		cout << "if문 조건이 false입니다." << endl;

	cout << "숫자를 입력하세요 : ";
	cin >> iNumber;

	if (10 <= iNumber && iNumber <= 20)
		cout << "10 ~ 20 사이의 숫자입니다." << endl;

	else if (21 <= iNumber && iNumber <= 30)
		cout << "21 ~ 30 사이의 숫자입니다." << endl;

	else if (31 <= iNumber && iNumber <= 40)
		cout << "31 ~ 40 사이의 숫자입니다." << endl;

	else
		cout << "그 외의 숫자입니다." << endl;

	// Ctrl End 화면 가장 아래
	// Ctrl Home 화면 가장 위
	
	// 난수 발생
	// typecasting, 형변환
	srand((unsigned int)time(0));

	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	// rand() = 0 ~  만단위까지 밖에 안나옴, 그래서 난수 알고리즘을 새로 만들어서 사용한다.
	// 100 ~ 200
	cout << (rand() % 101 + 100) << endl;
	cout << (rand() % 10000 / 100.f) << endl;
	
	int iUpgrade = 0;
	cout << "Upgrade 기본 수치를 입력하세요 : ";
	cin >> iUpgrade;

	// 강화 확률을 구한다.
	float	fPercent = rand() % 10000 / 100.f;

	// 강화 확률 : 업그레이드가 0 ~ 3 : 100% 성공, 4 ~ 6 : 40%, 7 ~ 9 : 10%, 10 ~ 13 : 1%, 14 ~ 15 : 0.01%
	cout << "Upgrade : " << iUpgrade << endl;
	cout << "Percent : " << fPercent << endl;

	if (iUpgrade <= 3)
		cout << "강화 성공" << endl;

	else if (4 <= iUpgrade && iUpgrade <= 6) 
	{
		if (fPercent < 40.f)
			cout << "강화 성공" << endl;
		else
			cout << "강화 실패" << endl;
	}

	else if (7 <= iUpgrade && iUpgrade <= 9)
	{
		if (fPercent < 10.f)
			cout << "강화 성공" << endl;
		else
			cout << "강화 실패" << endl;
	}

	else if (10 <= iUpgrade && iUpgrade <= 13)
	{
		if (fPercent < 1.f)
			cout << "강화 성공" << endl;
		else
			cout << "강화 실패" << endl;
	}

	else if (14 <= iUpgrade && iUpgrade <= 15)
	{
		if (fPercent < 0.01f)
			cout << "강화 성공" << endl;
		else
			cout << "강화 실패" << endl;
	}
// 강의 5 ~ 7화

	return 0;
}