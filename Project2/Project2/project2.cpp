#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include <math.h>
//#include <iostream>
//#include <string>

//using namespace std;

//#define RATE 0.07         // 이율
//#define INVESTMENT 10000000    //초기 투자금
//#define YEARS     10      // 투자 기간

//#define START_DAY    3      // 첫번째 날이 수요일 
//#define DAYS_OF_MONTH    31 // 달의 일수

//#define STUDENTS 5
//#define SIZE 7

/*함수선언
int get_average(int[], int);

void square_array(int a[], int size);
void print_array(int a[], int size);
void square_element(int e);
*/


//#define SIZE 3

/*struct student {
	int number;
	char name[20];
	double height;

};*/

/*
struct date {
	int month;
	int day;
	int year;
};

struct student {
	int number;
	char name[20];
	double height;
	struct date* dob;
};
*/

/*
struct student {
	int number;
	char name[10];
	double height;
	struct student* next;
	};
*/

/*
struct vector {
	float x;
	float y;
};
struct vector get_vector_sum(struct vector*, struct vector*);
*/

int main()
{
	//이것은 주석이다.
	/*이것도 주석이다.*/
	//이렇게 메인 함수에 여러 함수와 변수를 넣으면된다

	//변수(변하는 수)

	//int flyheight = 0;
	/*정수형 벼수 num을 선언(정의)한 후에 0을 넣겠다*/

	//flyheight = 30; //정수형 변수 num에 30을 넣겠다

	//int power = 0;
	//power = 1;

	//float fnum = 0.0;

	//fnum = 3.5;


	/*printf("Hello World!\n");



	int num1 = 3;
	int num2 = 5;

	num1 = num2;
	num2 = 0;

	int a;
	int b;
	int c;
	a = 10;
	b = 20;
	c = 30;

	printf("a 는 %d이고 b 는 %d이고 c 는 %d입니다.\n", a, b, c);

	float d = 1.3f;
	double e = 1.345232;

	printf("d 는 %f 입니다.\n", d);
	printf("e 는 %f 입니다.\n", e); */

	/*int x;
	int y;
	int sum;

	printf("첫번째 숫자를 입력하시오:");
	scanf("%d",&x);

	printf("두번째 숫자를 입력하시오:");
	scanf("%d",&y);

	sum = x + y;
	printf("두수의 합: %d", sum);*/

	/*저축액을 계산하는 프로그램
	int salary;       //월급
	int deposit;      //저축액

	printf("월급을 입력하시오:");
	scanf("%d", &salary);

	deposit = 10 * 12 * salary;

	printf("10년 동안의 저축액: %d\n", deposit);*/

	/*환율을 계산하는 프로그램
	float rate;         //원/달러 환율
	float usd;          //달러화
	int krw;            //원화

	printf("달러에 대한 원화 환율을 입력하시오:");    //입력 안내 메시지
	scanf("%f", &rate);                               //사용자로부터 환율입력

	printf("원화 금액을 입력하시오:");
	scanf("%d", &krw);

	usd = krw / rate;

	printf("원화 %d원은 %f달러 입니다.\n", krw, usd);*/


	/*원의 면적을 계산하는 프로그램

	float radius;       //원의 반지름
	float area;         //면적

	printf("원의 반지름을 입력하시오:");
	scanf("%f", &radius);

	area = 3.14 * radius * radius;

	printf("원의면적:%f\n", area);*/

	/*다양한 자료형으로 변수에 저장해보기
	char c; //문자형 변수 c 선언
	int i;  //정수형 변수 i 선언
	double interest_rate;  //실수형 변수 interest_rate 선언

	c = 'a';   //문자형 변수 c에 문자 'a'를 대입
	i = '60';  //정수형 변수 i에 60을 대입
	interest_rate = 4.9;  //실수형 변수 interest_rate에 4.9를 대입*/

	/*정수형 자료형의 크기를 계산하는 프로그램

	short year = 0;
	int sale = 0;
	long total_sale = 0;

	printf("short의 자료형 크기 : %d바이트\n", sizeof(short));
	printf("int의 자료형 크기: %d바이트\n", sizeof(int));
	printf("long의 자료형 크기: %d바이트\n", sizeof(int)); */

	/*나의 신상 출력해보기*/

	//char name = "이상백";
	//int age = 32;
	//float stature = 171.2;

	//printf("나의 이름은 %s입니다.\n", name);
	//printf("내 나이는 %d입니다.\n", age);
	//printf("나의 신장은 %f cm이다.", stature); 

	/*피타고라스의 정리를 이용한 가장 긴 변의 길이를 구하는 프로그램
	int num1 = 0;
	int num2 = 0;
	float num3 = 0;
	double num4 = 0;
	double num5 = 0;
	float modify = 0;


	printf("a의 길이를 입력하시오:\n");
	scanf("%d", &num1);

	printf("b의 길이를 입력하시오:\n");
	scanf("%d", &num2);

	num4 = pow(num1, 2); //NUM1의 2승
	printf("num1의2승은 %f이다.\n", num4);

	num5 = pow(num2, 2); //NUM2의 2승
	printf("num2의2승은 %f이다.\n", num5);

	modify = num4 + num5;                //a의2승 + b의2승 계산식
	printf("modify값은 %f\n", modify);

	num3 = sqrt(modify);
	printf("루트 modify = %f\n", num3);
	//int num3 = √(num1 ^ 2 + num2 ^ 2);

	//printf("num1 ^ 2 + num2 ^ 2 = num3 ^ 2")
	printf("c의 길이는 %d cm이다.", num3);
	printf("%d^2 + %d^2은 %d^2와 같다.", num1, num2, num3);


	//int num3 = √(num1 ^ 2 + num2 ^ 2);*/



	/*과자별 판매량 및 수익 프로그램

	int 홈런볼 = 2300;
	int 꼬깔콘 = 1700;
	int 콘칩 = 1700;
	int 빈츠 = 2800;

	int 홈런볼판매봉지수 = 0;
	int 꼬깔콘판매봉지수 = 0;
	int 콘칩판매봉지수 = 0;
	int 빈츠판매박스수 = 0;

	int 일일과자총판매액 = 0;

	printf("홈런볼 일일 판매 봉지수를 입력하시오 :\n");
	scanf("%d", &홈런볼판매봉지수);

	printf("꼬깔콘 일일 판매 봉지수를 입력하시오 :\n");
	scanf("%d", &꼬깔콘판매봉지수);

	printf("콘칩 일일 판매 봉지수를 입력하시오 :\n");
	scanf("%d", &콘칩판매봉지수);

	printf("빈츠 일일 판매 박스수를 입력하시오 :\n");
	scanf("%d", &빈츠판매박스수);

	printf("과자별 일일 총 판매량은 %d EA, %d EA, %d EA, %d EA이다.\n", 홈런볼판매봉지수, 꼬깔콘판매봉지수, 콘칩판매봉지수, 빈츠판매박스수);



	int 홈런볼일일판매량 = 홈런볼 * 홈런볼판매봉지수;
	printf("홈런볼의 일일 수익액은 %d 원이다.\n", 홈런볼일일판매량);

	int 꼬깔콘일일판매량 = 꼬깔콘 * 꼬깔콘판매봉지수;
	printf("꼬깔콘의 일일 수익액은 %d 원이다.\n", 꼬깔콘일일판매량);

	int 콘칩일일판매량 = 콘칩 * 콘칩판매봉지수;
	printf("콘칩의 일일 수익액은 %d 원이다.\n", 콘칩일일판매량);

	int 빈츠일일판매량 = 빈츠 * 빈츠판매박스수;
	printf("빈츠의 일일 수익액은 %d 원이다.\n", 빈츠일일판매량);


	int daysum = 홈런볼일일판매량 + 꼬깔콘일일판매량 + 콘칩일일판매량 + 빈츠일일판매량;
	printf("과자들의 일일 총수익액은 %d 원이다.", daysum);
	*/

	/*사칙연산 프로그램

	int A = 7;
	int B = 3;
	int SUM = A + B;
	int SUB = A - B;
	int MUL = A * B;
	int DIV = A / B;
	int MOD = A % B;

	printf("%d\n", SUM);
	printf("%d\n", SUB);
	printf("%d\n", MUL);
	printf("%d\n", DIV);
	printf("%d", MOD);
	*/

	/*2의 보수 프로그램
	int x = 3;
	int y = -3;

	printf("x = %08X\n", x); // 8자리의 16진수로 출력한다.
	printf("y = %08X\n", y); // 8자리의 16진수로 출력한다.
	printf("x+y = %08X\n", x + y); // 8자리의 16진수로 출력한다.*/

	/*문자 변수와 문자 상수

	char code1 = 'A';   //문자 상수로 초기화
	char code2 = 65;    //아스키 코드로 초기화

	printf("문자 상수 초기화 = %c\n", code1);
	printf("아스키 코드 초기화 = %c\n", code2);
	*/

	/*이스케이프 시퀀스
	printf("이스케이프 시퀀스는 \\와 의미를 나타내는 글자를 붙여서 기술\n");
	printf("'\\a'는 경고를 나타내는 제어문자이다.\n");
	printf("'\\007'로도 표현이 가능하다.\n");
	printf("경고를 출력해보자'\\007'을 출력한다 \007 \n");
	*/

	/*연산자 실습
	int num = 3;

	num++;

	printf("%d", num);
	*/

	/*윤년 프로그램

	int year, result;
	printf("연도를 입력하시오: ");
	scanf("%d", &year);
	result = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
	printf("result=%d \n", result);
	*/

	/*
	int a, b;
	printf("첫번째 연산자=");
	scanf("%d", &a);
	printf("두번째 연산자=");
	scanf("%d", &b);

	printf("%d + %d 은 %d\n", a, b, a + b);
	printf("%d - %d 은 %d\n", a, b, a - b);
	printf("%d * %d 은 %d\n", a, b, a * b);
	printf("%d / %d 은 %d\n", a, b, a / b);
	printf("%d %% %d 은 %d\n", a, b, a % b);
	*/

	/*조건문 예시
	bool istrue = true; // false

	int x = 1, y = 2, z = 0;

	int num1 = 3;
	int num2 = 5;

	istrue = (num1 < num2) && (num1 == num2);

	istrue = (num1 > num2) || (num1 == num2);

	if (istrue)
	{
		num1 = 8;

	}

	*/

	/*If문을 사용하여 음수와 양수를 구별하는 프로그램

		int number = 0;

		printf("정수를 입력하시오 : \n");
		scanf("%d", &number);

		if(number > 0)
			printf("입력하신 정수는 양수입니다.");

		if(number == 0)
			printf("입력하신 정수는 0입니다.");

		if (number < 0)
			printf("입력하신 정수는 음수입니다.");

		*/

		/*If문을 사용하여 홀수와 짝수를 구별하는 프로그램


		int number;

		printf("정수를 입력하시오.: \n");
		scanf("%d", &number);

		if(number%2 == 1)
			printf("해당 값은 홀수 입니다.\n");

		if(number%2 == 0)
			printf("해당 값은 짝수 입니다.");
		*/

		/*If문을 사용하여 절대값을 구하는 프로그램

			int number;

			printf("정수를 입력하시오.:\n");
			scanf("%d", &number);

			if (number < 0)
				{
					number = -number;

					printf("절댓값은 %d 입니다.", number);
				}
			*/

			/*IF else문을 이용한 성적 입력 프로그램

				int score;

				printf("성적을 입력하세요: \n");
				scanf("%d", &score);


				if(score >= 60)
				{
					printf("합격입니다!\n");
					printf("고생하셨습니다!\n");
				}
				else
				{
					printf("불합격입니다.\n");
					printf("공부하세요!");
				}
				*/
 /*윤년 판단 프로그램

				int year;

				printf("연도를 입력하시오: ");
				scanf("%d", &year);

				if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
				printf("%d년은 윤년입니다.\n", year);
				else
				printf("%d년은 윤년이 아닙니다.\n", year);
				*/

				/*정수 3개 중의 최솟값 찾기

				int num1;
				int num2;
				int num3;
				int min;

				printf("정수 3개를 입력하시오: \n");
				scanf("%d %d %d", &num1, &num2, &num3);

				if(num1 < num2)
				{
					if (num1 < num3)
						min = num1;
					else
						min = num3;
				}
				else
				{
					if (num2 < num3)
						min = num2;
					else
						min = num3;
				}
				printf("제일 작은 수는 %d입니다.", min);
				*/

				/*학점 분류 프로그램

				int score;

				printf("점수를 입력하시오.:\n");
				scanf("%d", &score);

				if (score >= 90)
					printf("합격: 학점 A.\n");
				else if (score >= 80)
					printf("합격: 학점 B.\n");
				else if (score >= 70)
					printf("합격: 학점 c.\n");
				else if (score >= 60)
					printf("합격: 학점 D.");

				else
					printf("불합격자입니다.");
				*/

				/*간단한 산술 계산기 프로그램

				char op;
				int x, y;

				printf("수식을 입력하시오:\n");
				scanf("%d %c %d", &x,&op, &y);

				if (op == '+')
				printf("%d %c %d = %d", x, op, y, x + y);
				else if (op == '-')
				printf("%d %c %d = %d", x, op, y, x - y);
				else if (op == '*')
				printf("%d %c %d = %d", x, op, y, x * y);
				else if (op == '/')
				printf("%d %c %d = %d", x, op, y, x / y);
				else if (op == '%')
				printf("%d %c %d = %d", x, op, y, x % y);

				else
				printf("지정되지않은 연산자입니다.");
				*/

				/*switch문

				int number;

				printf("정수를 입력하시오.");
				scanf("%d", &number);

				switch(number)
				{
					case 0:
						printf("없음\n");
						break;
					case 1:
						printf("하나\n");
						break;
					case 2:
					case 3:
						printf("두서너개\n");
						break;

				default:
					printf("많음");
					break;
				}*/

				/*달의일수를 알 수 있는 프로그램

				int month, days;

				printf("일수를 알고싶은 달을 입력하시오.");
				scanf("%d", &month);

				switch(month)
				{
					case 2:
						days = 28;
						break;
					case 4:
					case 6:
					case 9:
					case 11:
						days = 30;
						break;

					default:
						days = 31;
						break;


				}
				printf("%d의일수는 %d입니다.", month, days);
				*/

				/*사칙연산 계산기 만들기2

				int num1;
				int num2;
				char operation;

				printf("첫번째 숫자를 입력하세요 :\n");
				scanf("%d", &num1);

				printf("원하시는 연산자를 입력하시오 :\n");
				scanf(" %c", &operation);

				printf("두번째 숫자를 입력하세요 :\n");
				scanf("%d", &num2);

				if (operation == '+')
					printf("%d %c %d = %d \n", num1, operation, num2, num1+num2);

				else if (operation == '-')
					printf("%d %c %d = %d \n", num1, operation, num2, num1-num2);

				else if (operation == '*')
					printf("%d %c %d = %d \n", num1, operation, num2, num1*num2);

				else if (operation == '/')
					printf("%d %c %d = %d \n", num1, operation, num2, num1/num2);

				else if (operation == '%')
					printf("%d %c %d = %d \n", num1, operation, num2, num1%num2);
				else
					printf("지정되지 않은 연산자입니다.");

				*/

				/*문자들을 분류하는 프로그램
				char ch;

				printf("문자를 입력하시오: ");
				scanf("%c", &ch);

				if (ch >= 'A' && ch <= 'Z')
					printf("%c는 대문자입니다.\n", ch);
				else if (ch >= 'a' && ch <= 'z')
					printf("%c는 소문자입니다.\n", ch);
				else if (ch >= '0' && ch <= '9')
					printf("%c는 숫자입니다.\n", ch);
				else
					printf("%c는 기타문자입니다.\n", ch);

				*/

				/*사칙연산 계산기:switch버전

				int x;
				int y;
				char op;

				printf("수식을 입력하시오:\n");
				scanf("%d %c %d", &x, &op, &y);

				switch (op)
				{
					case '+':
						printf("%d %c %d = %d\n", x, op, y, x + y);
					break;

					case '-':
						printf("%d %c %d = %d\n", x, op, y, x - y);
					break;

					case '*':
						printf("%d %c %d = %d\n", x, op, y, x * y);
					break;

					case '/':
						printf("%d %c %d = %d\n", x, op, y, x / y);
					break;

					case '%':
						printf("%d %c %d = %d\n", x, op, y, x % y);
					break;

					default:
						printf("지원되지 않는 연산자입니다.\n");
						break;


				}
				*/

				/*마일을 미터로 바꾸는 프로그램
				{
					int meter;

					meter = 0 * 1609;
					printf("0마일은 %d미터입니다.\n", meter);

					meter = 1 * 1609;
					printf("1마일은 %d미터입니다.\n", meter);

					meter = 2 * 1609;
					printf("2마일은 %d미터입니다.\n", meter);
				}
				*/

				/*while을 이용한 마일을 미터로 바꾸는 프로그램
				{
					int meter;
					int i = 0;

					while (i < 3)
					{
						meter = i * 1609;
						printf("이 %d마일은 %d미터입니다.\n", i, meter);
						i++;
					}

				}
				*/

				/*while 문을 이용한 구구단 출력 프로그램
				int n;
				int i = 1;

				printf("출력하고싶은 단을 입력하시오\n");
				scanf("%d", &n);

				while(i <= 9)
				{
					printf("%d * %d = %d \n", n, i, n*i);
					i++;

				}
				*/

				/*for문을 이용한 구구단 출력 프로그램(세로)

				for(int i = 1;i<10; i++)
				{
					for(int j = 1;j<=10; j++)
					{
						printf("%d * %d = %d \n", i, j, (i * j));
					}
					printf("\n");
				}
				*/


				/*while 문을 이용한 제곱값 출력 프로그램
					int n;

					printf("============================\n");
					printf("  n      n의 제곱 \n");
					printf("============================\n");

					n = 1;
					while (n <= 10)
					{
						printf("%3d  %5d\n", n, n * n);
						n++;
					}
				*/




				/* 임의의 정수의 범위까지 합을 구하는 프로그램

				int i, n, sum;

				printf("정수를 입력하시오:");
				scanf("%d", &n);

				i = 1;
				sum = 0;

				while (i <= n)
				{
					sum += i;
					i++;
				}

				printf("1부터 %d까지의 합은 %d입니다 \n", n, sum);
				*/

				/*나눗셈을 하기 전에 분모가 0인지를 if-els 문을 이용하기

				int n1, n2, n3;

				printf("정수를 입력하시오.:\n");
				scanf("%d", &n1);

				printf("정수를 입력하시오.:\n");
				scanf("%d", &n2);

				if (n2 == 0)
					{
						printf("0으로는 나눌 수 없습니다.\n");

					}
				else
					n3 = n1 / n2;
						printf("결과는 %d입니다.", n3);

				*/



				/* while 문을 이용한 합계 프로그램

				int n;
				int i = 0;
				int sum = 0;

				while(i < 5)
				{
					printf("값을 입력하시오 : \n");
					scanf("%d", &n);

					sum = sum + n;
					i++;
				}
				printf("합계는 %d입니다.\n", sum);

				*/

/* 성적을 입력받아서 합계를 구하고 학생 수를 센다.

				int s ;
				float sum ;
				float average ;
				int i ;

				s = 0;
				sum = 0;
				average = 0;
				i = 0;

				printf("성적 입력을 종료하려면 음수를 입력하시오\n");


				while (s >= 0)
				{
					printf("성적을 입력하시오: \n");
					scanf("%d", &s);
					sum += s;
					i++;

				}
					sum = sum - s;
					i--;

					average = sum / i;
					printf("성적의 평균은 %f입니다.", average);

				*/

/* while문을 이용한 최대 공약수 구하기 프로그램
				int x;
				int y;
				int r;

				x = 0;
				y = 0;
				r = 0;

				printf("두 개의 정수를 입력하시오.\n");
				scanf("%d %d", &x, &y);

				while (y != 0)
				{
					r = x % y;
					x = y;
					y = r;

				}

				printf("최대공약수는 %d와 같습니다.\n", x);
				*/

/*do while 문을 이용한 메뉴

				int x;
				x = 0;

				do
				{
					printf("1-----새로 만들기\n");
					printf("2-----파일 열기\n");
					printf("3-----파일 닫기\n");

					printf("버튼넘버를 입력하시오:");
					scanf("%d", &x);

				}


				while (x < 1 || 3 < x)
					printf("유효하지않은 버튼입니다.다시 입력해주세요");
					scanf("%d", &x);

					printf("선택된 메뉴 = %d \n", x);
				*/

/*반복을 이용한 정수합 프로그램
				int sum = 0;
				int i;

				for (i = 1; i <= 10 ; i++)
				{
					sum = sum + i;
				}
				printf("1부터 10까지의 정수합은 %d입니다.", sum);
				*/

/*반복을 이용한 세제곱값 구하기
				int i;
				int n;

				printf("정수를 입력하시오.");
				scanf("%d", &n);

				printf("================================= \n");
				printf("    i    i의세제곱\n");
				printf("================================= \n");

				for (i = 1; i <= n; i++)

				printf("  %3d  %5d \n", i, i * i * i);

				*/

/* 반복을 이용한 팩토리얼 구하기

				int i;
				int n;
				int mut;

				mut = 1;

				printf("팩토리얼을 적용할 정수를 입력하십시오:\n");
				scanf("%d", &n);

				for (i = 1; i <= n; i++)
				{
					mut = mut * i;
				}

				printf("%d!은 %d다.",n, mut);

				*/

/*별짓기 프로그램
				int ss; //별 갯수
				int n; //임의 지정 별 갯수
				int ll; //줄 갯수

				printf("출력할 별 갯수를 입력하시오.:\n");
				scanf("%d", &n);

				for(ll = 1; ll <= 5; ll++)
				{
					for (ss = 1; ss <= n; ss++)
					{
						printf("*");
					}

					printf("\n");

				}
				*/

/*임의의 학생의 5번 친 시험 성적의 평균을 구하기

int s, t;
float score, total, average;
total = 0;

for (s = 0; s < 20; s++)
{
	for (t = 0; t < 5; t++)
	{
		
		printf("%d번 학생에 대한 % d번째 성적 : ", s + 1, t + 1);
		scanf("%f", &score);
		total += score;
	}
	average = total / 5.0;
	printf("%d번 학생의 성적 평균: %f\n", s + 1, average);
}
*/

/*break을 이용하여 실수의 제곱근을 출력하는 무한루프 탈출하기

double v;

while (1)
{
	printf("실수값을 입력하시오");
	scanf("%lf", &v);

	if (v < 0)
		break;
	printf("%lf의 제곱근은 %lf입니다.\n", v, sqrt(v));
}
*/

/*break을 이용하여 학생의 성적을 합산하고 평균을 산출하는 무한루프 탈출하기

float grade, sum = 0, average; 
int count = 0;  //과목수 or 평균의 기준 요소

while (1)
{
	printf("학생 성적을 입력하시오:");
	scanf("%f", &grade);
	if (grade < 0)
		break;
	count++;
	sum += grade;

}
average = sum / count;
printf("학생들의 성적의 평균은 %f입니다.\n", average);
*/


/* 소문자를 대문자로 변경하는 프로그램에 continue 써보기

char letter;

while(1)
{
	printf("소문자를 입력하시오:");
	scanf("%c", &letter);

	if(letter == 'Q')
		break;
	if(letter<'a'||letter>'z')
		continue;

	letter -= 32; //아스키코드 대문자 소문자차가 32
	printf("변환된 대문자는 %c입니다.\n",  letter);
}
*/

/* 복리이자계산 

int i;
double total = INVESTMENT; //원리금 합계

printf("=============\n");
printf("연도 원리금\n");
printf("=============\n");

for (i = 1; i <= YEARS; i++)
{
	total = total * (1 + RATE);     // 새로운 원리금 계산
	printf("%2d %10.1f\n", i, total);
}
*/

/* 달력 만들기 

int day, date;                                                 //변수 선언(요일과 일자)
printf("=====================\n");                             //달력 프레임 셋팅과 줄넘김
printf("일 월 화 수 목 금 토 \n");
printf("=====================\n");

for(day = 0; day < START_DAY; day++)                           //for문을 이용해서 수요일 전까지 공백 만들기 

	printf(" ");

for(date = 1; date <= DAYS_OF_MONTH; date++)                   //for문을 이용해서 1일 부터 31일 반복해주기
{
	if (day == 7)                                              //일요일마다 줄넘김해주기 위해 for문 안에 7일 주기로 일욜에 줄넘김 출력
	{
		day = 0;
		printf("\n");
	}
	day++;                                                     //요일이 넘어갈때마다 공백줘서 날짜 출력 
	printf("%2d", date);
}
printf("\n=====================\n");                           //달력 프레임 마무리 
*/

/*함수 에제

//예제1
정수의 제곱값을 게산하는 함수

반환값:int
함수 이름:square
매개 변수:int n

int square(int n)
{
	return(n * n);
	
}

//예제2
두개의 정수중에서 큰 수를 계산하는 함수
반환값:int
함수 이름: get_max
매개 변수:int x,int y

int get_max(int x, int y)
{
	if (x > y)return(x);
	else return(y);
}

//예제3
정수의 절대값을 계산하는 함수
반환값 : int
함수 이름 : absolute
매개 변수 : int x

int absolute(int x)
{
	if (x > 0)
		return x;
	else
		return -x;
}

//예제4
별표 기호를 이용하여 정사각형을 그리는 함수

반환값 : void
함수 이름 : draw_rect
매개 변수 : int side

void draw_rect(int side)
{
	int x, y;
	for (y = 0; y < side; y++)
	{
		for (x = 0; x < side; x++)
			printf("*");
			printf("\n");
	}
	return;
}

//예제5
정수의 거듭 제곱값(x^y)을 계산하는 함수
반환값:int
함수 이름 : power
매개 변수 : int x,int y

int power(int x, int y)
{
	int i;
	longlong result = 1;

	for (i = 0; i < y; i++)
		result  *=  x;
	return result;
}

//예제6
팩토리얼값(n!)을 계산하는 함수
반환값 : int
함수 이름 : factorial
매개 변수 : int n

int factorial(int n)
{
	int i;
	longlong result = 1;

	for (i = 1; i <= n: i++)
		result *= i;

	return result;
}

//함수 원형 예제

int compute_sum(int n);

int 메인(void)
{
	int n, sum;

	printf("정수를 입력하시오:");
	scanf("%d", &n);

	sum = compute_sum(n);        //함수 사용
	printf("1부터 %d까지의 합은 %d입니다. \n", n, sum);

}
int compute_sum(int n)
{
	int i;
	int result = 0;

	for (i = 1; i <= n; i++)
		result += i;
	return result;
}

//직각 삼각형 예제

#define RAD_TO_DEG(45.0/atan(1))

int 메인(void)
{
	double w, h, r, theta;

	printf("밑변과 높이를 입력하시오:");
	scanf("%lf %lf", &w, &h);

	r = sqrt(w * w + h * h);
	theta = RAD_TO_DEG * atan2(h, w);

	printf("빗변=%f 각도=%f \n", r, theta);
}
*/



/*지역변수 예제


예제 1
int i;

for (i = 0, i < 5; i++)
{
	int temp = 1;                    //블록이 시작할 때마다 생성되어 초기화된다.
	printf("temp = %d\n", temp);
	temp++;
}

예제2
{
	int i;

	i = 10;
	printf("함수 호출전 i=%d\n", i);
	inc(i);        //값에 의한 호출
	printf("함수 호출전 i=%d\n", i);
	return 0;
}
int inc(int counter)
{
	counter++;
	return counter;
}

예제3
int x = 123;

void sub1()
{
	printf("In sub1() x=%d\n", x);
}
void sub2()
{
	printf("In sub2() x=%d\n", x);
}
int main(void)
{
	sub1();
	sub2();

}
*/

/*거듭제곱 구하기

//반복문 ver.
double slow_power(double x, int n)
{
	int i;
	double r = 1.0;

	for (i = 0; i < n; i++)
		r = r * x;
	return(r);
}

//순환호출문 ver.
double power(double x, int n)
{
	if (n == 0)return 1;
	else if ((n % 2) == 0)
		return power(x * x, n / 2);
	else return x * power(x * x, (n - 1) / 2);
}
*/

/*피보나치 수열 예제
//재귀함수 ver.1
int fib(int n)
{
	if (n == 0) return 0;                          //0이 되면 0을 반환해라 = 0이 되면 종료 
	if (n == 1) return 1;                          //1이 되면 1을 반환해라 = 1이 되면 종료 
	return(fib(n - 1) + fib(n - 2));               //n이 2이상이라면 순환호출 차례대로 넣어서 0과 1이 될때까지 돌리면 피보나치 수열값대로 반환됨

}

//재귀함수 ver.2

int fibo(int n)
{
	if (n == 0) return 0;    
	else if (n == 1) return 1;
	else return fibo(n - 1) + fibo(n - 2);
}

int 메인(void)
{
	int n;
	int i;

	printf("피보나치 수 입력: \n");
	scanf("&d", &n);

	for (i = 0; i < n; i++) {
		printf("%d", fibo(i));
	}

	printf("\n\n");
	system("pause");

	return 0;

}
//이런식으로 호출해서 쓰임

//for ver

int i;                           //반복횟수 변수 선언
int n;                           //입력값 변수 선언
int head = 0;                    //두 단계 전 값
int mid = 0;                     //한 단계 전 값
int rear = 1;                    //두 개의 변수에 저장된 값을 더한 것 

printf("피보나치 수 입력 : ");   //입력 안내문
scanf("%d", &n);                 //입력 코드 

for(i=0; i < n; i++)             //반복문( 0부터 하니깐 횟수 고려)
   { 
	printf("%d", head);          //피보나치 수 출력문(첫번째 숫자이자 전단계 전전단계가 될 수 잇는 head가 곧 수열이됨)
	mid = head + rear;           //mid가 전단계와 전전단계의 합
	head = rear;                 //한단계전이 두번째전로 되는 코드
	rear = mid;                  //더한게 한단계전이 되는 코드
    }

	printf("\n\n");              //수열 간 공백 두칸
	system("pause");             
	return 0;
*/

/*하노이의탑
하노이의탑 예제(A에서 C로 원판 N개를 규칙에 맞춰 옮겨라)
int n;                //원판 갯수 선언
char from;            //원판 위치 시작점 
char tmp;             //원판 위치 중간점
char to;              //원판 종료점

void hanoi_tower(int n, char from, char tmp, char to)
{
	if (n == 1)printf("원판 1을 %c 에서 %c으로 옮긴다.\n", from, to);     //원판이 1개이거나 혹은 1개만 남았다면 A에서 C로 옮겨라(순환 정지문)
	else {
		hanoi_tower(n - 1, from, to, tmp);                        //순환 호출 작동. 이때 맨 밑 원판을 제외한 n-1 즉 나머지 원판들을 목적지C가 아닌 다른지점인 TMP로 옮김 
		printf("원판 %d을 %c에서 %c으로 옮긴다.\n", n, from, to);   //맨 아래 원반을 목적지로 이동시킴
		hanoi_tower(n - 1, tmp, from, to)                         //두번째 순환 호출 작동,다른곳으로 옮겼던 원반들을 목적지에 옮기는것
	}
}
main()
{
	hanoi_tower(n, 'A', 'B', 'C');
}
*/

/*배열 선언 예제
int grade[10];
int i;

for (i = 0; i < 10; i++)
	grade[i] = 0;

printf("========================\n");
printf("인덱스     값\n");
printf("========================\n");

for (i = 0; i < 10; i++)
	printf(" %3d % 8d\n", i, grade[i]);
*/

/*배열 초기화 예제
int grade[10] = { 20,85,11,64,5,71,52,39,95.43 };
int i;

printf("=======================\n");
printf("인덱스     값\n");
printf("=======================\n");

for (i = 0; i < 10; i++)

	printf(" %3d  %7d\n", i, grade[i]);
*/


/*배열 원소 참조 예제

int grade[SIZE];
int i;

for (i = 0; i < SIZE; i++)
	grade[i] = rand() % 100;

printf("=======================\n");
printf("인덱스    값\n");
printf("=======================\n");

for (i = 0; i < SIZE; i++)
	printf("%5d  %5d\n", i, grade[i]);
*/

/*배열 원소 사용 예제-성적 평균값 프로그램
int grade[STUDENTS];        //define으로 정의한 기호상수 STUDENTS(학생수=5)를 배열크기로 받아온 정수형을 담는 배열 grade를 선언 
int sum = 0;                //합계값을 담을 변수 sum을 선언
int i, average;             //for에 쓰일 반복 회수 i 와 평균값 변수 선언

for (i = 0; i < STUDENTS; i++)                                  //5명의 성적을 받기위한 입출력문을 반복
{
	printf("학생들의 성적을 입력하시오:");
	scanf("%d", &grade[i]);                                     //성적을 받아서 선언한 배열의 주소값으로 접근시켜 값을 넣어준다

}
for (i = 0; i < STUDENTS; i++)                                  //5명의 합계를 도출하기 위한 반복문 
	sum += grade[i];

average = sum / STUDENTS;                                       //평균에 합계 나누기 학생수한걸 대입한다
prinrf("성적 평균=%d\n", average);                              //평균값 받아 평균값 출력

*/

/*배열의 복사
int i;
int a[SIZE] = { 1,2,3,4,5 };
int b[SIZE];

for (i = 0; i < SIZE; i++)
	b[i] = a[i];
*/

/*배열의 비교
int i;
int a[SIZE] = { 1,2,3,4,5 };
int b[SIZE] = { 1,2,3,4,5 };

for (i = 0; i < SIZE; i++)
{
	if (a[i] != b[i])
	{
		printf("a[]와 b[]는 같지 않습니다.\n");
		return 0;
	}
}
printf("a[]와 b[]는 같습니다.\n");
*/


/*배열 원소의 개수 계산
int grade[] = { 1,2,3,4,5,6 };
int i, size;

size = sizeof(grade) / sizeof(grade[0]);

for (i = 0; i < size; i++)
	printf("%d", grade[i]);
*/

/*배열 원소 역순 출력
int data[SIZE];
int i;

for (i = 0; i < SIZE; i++)
{
	printf("정수를 입력하시오:");
	scanf("%d", &data[i]);
}

for (i = SIZE - 1; i >= 0; i--)
{
	printf("%d\n", data[i]);
}
*/

/*배열 인덱스만큼 별 출력하기
int grade[STUDENTS] = { 30,20,10,40,50 };
int i, s;

for (i = 0; i < STUDENTS; i++)
{
	printf("번호 %d:", i);
	for (s = 0; s < grade[i]; s++)
		printf("*");
	printf("\n");
}
*/

/*최소값 탐색
int grade[SIZE];
int i, min;

for (i = 0; i < SIZE; i++)
{
	printf("성적을 입력하시오:");
	scanf("%d", &grade[i]);
}

min = grade[0];

for (i = 1; i < SIZE; i++)
{
	if (grade[i] < min)
		min = grade[i];
}
printf("최소값은 %d입니다.\n", min);

*/

/*빈도 계산

int freq[SIZE];
int i, score;

for (i = 0; i < SIZE; i++)
	freq[i] = 0;

while (1)
{
	printf("숫자를 입력하시오(종료-1): ");
	scanf("%d", &score);
	if (score < 0)break;
	freq[score]++;

}

printf("값 빈도\n");

for (i = 0; i < SIZE; i++)
	printf("%3d  %3d\n", i, freq[i]);

*/

/*주사위면 빈도 계산
int freq[SIZE] = { 0 };
int i;

for (i = 0; i < 10000; i++)
	++freq[rand() % 6];

printf("=========================\n");
printf("면      빈도\n");
printf("=========================\n");

for (i = 0; i < SIZE; i++)
	printf("%3d   %3d \n", i, freq[i]);
*/

/*배열과 함수
int grade[STUDENTS] = { 1,2,3,4,5 };                       //성적을 담을 배열 선언 및 초기화, 배열크기는 위에서 5라고 정의
int avg;                                                   //평균값을 담을 변수 avg 선언 

avg = get_average(grade, STUDENTS);                        //밑에서 정의한 평균 구하는 함수를 호출하는데 매게변수로 배열(=배열에 들어가는 성적)과 학생수(=5)를 받아옴
printf("평균은 %d입니다.\n", avg);                         //평균을 함수로 부터 받아 출력
*/


/*대소문자 변환 프로그램 구현
string str;
std::cout << "문자열을 입력하세요: ";
std::getline(cin, str);

string converted_str = "";
for (char c : str) {
	if (c >= 'a' && c <= 'z') {
		converted_str += (c - 32); // 소문자를 대문자로 변환
	}
	else if (c >= 'A' && c <= 'Z') {
		converted_str += (c + 32); // 대문자를 소문자로 변환
	}
	else {
		converted_str += c; // 알파벳이 아닌 경우 변환 없이 그대로 추가
	}
}

cout << "변환된 문자열: " << converted_str << endl;

*/

/*특수문자 출력하기
string specialChars = "!@#$%^&*(\\'\"<>?:;";
cout << specialChars;
*/

/*계산식 출력하기
int a = 4;
int b = 5;
int A = a + b;

cout << a << "+" << b << "=" << A << endl;
*/

/*조건문을 이용하여 짝수 홀수별 구분하기
int n;
string a;
cin >> n;

if (n % 2 == 0) {
	a = "is even";
}
else {
	a = "is odd";
}

cout << a << endl;
*/

/*배열을 인자로 쓸 때

int list[SIZE] = { 1, 2, 3, 4, 5, 6, 7 };

print_array(list, SIZE);
square_array(list, SIZE); // 배열은 원본이 전달된다.
print_array(list, SIZE);

printf("%3d\n", list[6]);
square_element(list[6]); // 배열 요소는 복사본이 전달된다.
printf("%3d\n", list[6]);
*/

/*포인터 예제
char c = 'A';
int i = 10000;
double d = 6.78;

char*pc = &c;
int* pi = &i;
double* pd = &d;

(*pc)++;
*pi + 1;
*pd += 1;

printf("c=%c\n",c);
printf("i=%d\n",i);
printf("d=%f\n",d);
*/

/*포인터 예제2

int i = 10000;
int* p, * q;

p = &i;                  // 포인터p가 i를 가리킨다 = 포인터 p와 변수 i를 연결 
q = &i;                  // 포인터q가 i를 가리킨다 = 포인터 q와 변수 i를 연결

*p = *p + 1;
*q = *q + 1;

printf("i=%d\n", i);
*/

/*간접 참조 연산자와 증감 연산자
int i = 10;
int* pi = &i;

printf("i = %d, pi = %p\n", i, pi);
(*pi)++;
printf("i = %d, pi = %p\n", i, pi);
*pi++;
printf("i = %d, pi = %p\n", i, pi);
*/

/*포인터와 배열
int a[] = { 10,20,30,40,50 };

printf("a = %p\n",a);
printf("a + 1 = %p\n",a+1);
printf("*a = %d\n",*a);
printf("*(a+1) = %d\n",*(a + 1));
*/

/*문자 상수
char code1 = 'A';
char code2 = 65;

printf("code1=%c, code1=%d\n", code1,code1);
printf("code2=%c, code2=%d\n", code2,code2);
*/

/*문자 배열에 문자를 저장
char str[] = "komputer";
int i;

for (i = 0; i < 8; i++)
	printf("%c", str[i]);

str[0] = 'c';
printf("\n");

for (i = 0; i < 8; i++)
	printf("%c", str[i]);
*/

/*문자열 길이 계산 
char str[30] = "C language is easy";
int i = 0;

while (str[i] != 0)
	i++;

printf("문자열\"%s\"의 길이는 %d입니다.\n", str, i);
*/

/*문자열 연결
char dst[12] = "Hello";
char src[6] = "World";
strcat(dst, src);
*/

/*strcmp함수
char s1[80]; // 첫번째 단어를 저장할 문자배열
char s2[]; 80 // 두번째 단어를 저장할 문자배열
int result;

printf("첫번째 단어를 입력하시오:");
scanf("%s", s1);
printf("두번째 단어를 입력하시오:");
scanf("%s", s2);

result = strcmp(s1, s2);

if (result < 0)
	printf("%s가 %s보다 앞에 있읍니다.\n", s1, s2);
else if (result == 0)
	printf("%s가 %s와 같습니다.\n", s1, s2);
else
	printf("%s가 %s보다 뒤에 있습니다.\n", s1, s2);
*/

/*구조체 선언의 예
//x와y로 이루어지는 화면 값의 좌표
struct point {
	int x;        //x좌표
	int y;        //y좌표
};

//복소수
struct complex {
	double real;     //실수부
	double imag;     //허수부
};


//날짜
struct date{
	int month;
	int day;
	int year;

};

//사각형
struct rect {
	int x;
	int y;
	int width;
	int height;
};

//직원
struct employee{
	char name[20;
	int age;
	int gender;
	int salary; ]
};
*/


/*구조체를 멤버로 가지는 구조체
struct date{         //구조체 선언
	int month;
	int day;
	int year;
};

struct student{       //구조체 선언
	int number;
	char name[10];
	struct date dob;   //구조체 안에 구조체 포함
	double height;

};

struct student s1;     //구조체 변수 선언

s1.dob.year = 1983;
s1.dob.month = 03;
s1.dob.day = 29;

printf("%d %d %d", s1.dob.year, s1.dob.month, s1.dob.day);

*/

/*구조체 선언 예제
struct student s;

s.number = 20070001;
strcpy(s.name, "홍길동");
s.height = 180.2;

printf("학번:%d\n", s.number);
printf("이름:%s\n", s.name);
printf("신장:%f\n", s.height);
*/


/*두 점 사이의 거리 구하기
struct point p1, p2;
int xdiff, ydiff;
double dist;

printf("점의 좌표를 입력하시오(x, y):");
scanf("%d %d", &p1.x, &p1.y);

printf("점의 좌표를 입력하시오(x, y):");
scanf("%d %d", &p2.x, &p2.y);

xdiff = p2.x - p1.x;
ydiff = p2.y - p1.y;

dist = sqrt(xdiff * xdiff + ydiff * ydiff);

printf("두 점 사이의 거리는 %f입니다.\n", dist);
*/

/*사각형 면적과 둘레 구하기
struct point {
	int x;
	int y;
};

struct rec{
	struct point p1
	struct point p2

};

int main()
{
	struct rec r;
	int width, height, area, peri;

	printf("왼쪽 상단의 좌표를 입력하시오.\n");
	scanf("%d %d", &r.p1.x, &r.p1.y);

	printf("오른쪽 상단의 좌표를 입력하시오.\n");
	scanf("%d %d", &r.p2.x, &r.p2.y);

	width = r.p2.x - r.p1.x;
	height = r.p2.y - r.p1.y;

	area = width * height;
	peri = width * 2 + height * 2;

	printf("사각형의 면적은 %d며 둘레는 %d입니다.", area, peri);


}
*/
 /*열거형 예제

enum days { MON, TUE, WED, THU, FRI, SAT, SUN };
char* days_name[] = {
"monday", "tuesday", "wednesday", "thursday", "friday",
"saturday", "sunday"};

int main(void)
{
	enum days d;
	for (d = MON; d <= SUN; d++)
	{
		printf("%d번째 요일의 이름은 %s입니다.", d, days_name[d]);
	}
*/

/*구조체 배열 예제
struct student list[SIZE];
int i;

for(i = 0; i < SIZE; i++)
{
	printf("학번을 입력하시오:");
	scanf("%d", &list[i].number);
	printf("이름을 입력하시오:");
	scanf("%s", list[i].name);
	printf("신장을 입력하시오(실수):");
	scanf('%f', list[i].height);

}

for (i = 0; i < SIZE; i++)
{
	printf("%d %S %f", list[i].number, list[i].name, list[i].height);
}
*/

/*포인터를 통한 구조체 참조
struct student s = { 20070001, "홍길동", 180.23 };
struct student* p;

p = &s;

printf("학번=%d 이름=%s 키=%f \n", s.number, s.name, s.height);
printf("학번=%d 이름=%s 키=%f \n", (*p).number, (*p).name, (*p).height);
printf("학번=%d 이름=%s 키=%f \n", p->number, p->name, p->height);
*/



/*포인터를 멤버로 가지는 구조체
struct date d = { 3,20,1980 };
struct student s = { 20070001,"kim",180.2 };

s.dob = &d;

printf("학번:%d\n", s.number);
printf("이름:%s\n", s.name);
printf("신장:%d\n", s.height);

printf("생년월일 ; %d년 %d월 %d일 \n", s.dob->year, s.dob->month, s.dob->day);
*/


/*자체 참조 구조체
struct student s1 = { 30, "Kim", 167.2, NULL };
struct student s2 = { 31, "Park", 179.1, NULL };
struct student *first = NULL;
struct student *current = NULL; 

first = &s1;
s1.next = &s2;
s2.next = NULL;

current = first;
while (current != NULL)

{
	printf("학생의 번호=%d 이름=%s, 키=%f\n", current->number,
		current->name, current->height);
	current = current->next;
}
*/

/*
struct vector a = { 2.0, 3.0 };
struct vector b = { 5.0, 6.0 };
struct vector sum;

sum = get_vector_sum(&a, &b);
printf("벡터의 합은 (%f, %f)입니다.\n", sum.x, sum.y);
*/


return 0;


}





/*
int get_average(int score[], int n)                        //위에서 선언한 평균을 구하는 함수의 정의문 ( 정수형 결과값을 반환하는 평균이라는 식별자의 함수로 매게변수로 스코어라는 배열과 정수형 n을 받는다.
{
	int i;                                                 //정수형 i 변수를 선언(이용목적 :   ) 
	int sum = 0;                                           //합계 변수 선언 및 초기화 

	for (i = 0; i < n; i++)                                //성적의 합계를 반복문을 통해 구하기 
		sum += score[i];
	return sum / n;                                        // 합계 / 과목수로 평균값 구하기 
}
*/


/*문자열 변환시키는 프로그램
string my_string;
string overwrite_string;
//my_string = "";
int length;

string solution(string my_string, string overwrite_string, int s) {
	int length = overwrite_string.length();
	my_string.replace(s, length, overwrite_string);
	return my_string;
}
*/

/*문자열 섞는 함수

string solution(string str1, string str2) {
	string answer = "";
	int length = str1.length();
	for (i = 0; i < length; i++)
	{
		answer += str1[i];
		answer += str2[i];

	}
	return answer;
}
*/


/*문자 이어붙히기
int i;

string solution(vector<string> arr) {
	string answer = "";
	for (i = 0; i < arr.size(); i++)
		answer += arr[i];

	return answer;
}

stirng solution(vector<string>arr) {

	return accumulate(arr.begin(), arr.end(), string(""));

}
*/

/*문자열 곱하기
int i;

string solution(string my_string, int k) {
	string answer = "";

	for (i = 0; i < k; i++)
		answer += my_string;
	return answer;
}
*/


/*더 크게 합치기
int solution(int a, int b) {
	int answer = 0;

	if (a < b) {
		answer = b 더하기원 a;
	}
	else if (a == b) {
		answer = a 더하기원 b;
	}
	else {
		answer = a 더하기원 b;
	}
	return answer;
}


int solution(int a, int b) {

	string str1 = to_string(a);
	string str2 = to_string(b);

	int AB = stoi(str1 + str2);
	int BA = stoi(str2 + str1);

	return max(AB, BA);

	*/

/*두 수의 연산값 비교하기
int solution(int a, int b) {
	int answer = 0;

	string str1 = to_string(a);
	string str2 = to_string(b);

	int AB = stoi(str1 + str2);
	int A = stoi(str1);
	int B = stoi(str2);

	int value = 2 * A * B;

	if (AB == value)
		return answer = AB;
	else
		return max(AB, value);
}
*/

/*n의배수
int solution(int num, int n) {
	int answer = 0;

	if (num % n == 0)
		return 1;

	else
		return 0;
*/

/*함수정의문
void square_array(int a[], int size)
{
	int i;
	for(i = 0; i < size; i++)
	a[i] = a[i] * a[i];

}

void square_element(int e)
{
	e = e * e;
}

void print_array(int a[], int size)
{
	int i;

	for(i = 0; i < size; i++)
	printf("%3d ", a[i]);
	printf("\n");
}
*/

/*선택정렬과 버블정렬
#include <stdio.h>
#define SIZE 10

void selection_sort(int list[], int n);
void print_list(int list[], int n);

int main(void)
{
	int grade[SIZE] = { 3, 2, 9, 7, 1, 4, 8, 0, 6, 5 };

	//원래의 배열 출력
	printf("원래의 배열\n");
	print_list(grade, SIZE);

	selection_sort(grade, SIZE);

	// 정렬된 배열 출력
	printf("정렬된 배열\n");
	print list(grade, SIZE);

	return 0;
}

void print_list(int list[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", list[i]);
	printf("\n");
}

void selection_sort(int list[], int n)
{
	int i, j, temp, min;

	for (i = 0; i < n - 1; i++)
	{
		min = i;

		for (j = i + 1; j < n; j++) // 최소값 탐색
		{
			if (list[j] < list[min])
				min = j;
		}

		// i번째 원소와 min 위치의 원소를 교환
		temp = list[i];
		list[i] = list[min];
		list[min] = temp;
	}

}

void bubble_sort(int list[], int n)
{
   int i, scan, temp;

   // 스캔 회수를 제어하기 위한 루프
   for(scan=0; scan < n-1; scan++)
   {
   
   // 인접값 비교 회수를 제어하기 위한 루프
      for(i = 0; i < n-1; i++)
      {
      // 인접값 비교 및 교환
         if( list[i] > list[i+1] )
         {
          temp = list[i];
          list[i] = list[i+1];
          list[i+1] = temp;
         }
      }
   }
}
/*순차탐색
#include <stdio.h>
#define SIZE 6
int seq_search(int list[], int n, int key);
int main(void)
{
	int key;
	int grade[SIZE] = { 10, 20, 30, 40, 50, 60 };
	printf("탐색할 값을 입력하시오:");
	scanf("%d", &key);
	printf("탐색 결과 = %d\n", seq_search(grade, SIZE, key));
	return 0;
}
int seq_search(int list[], int n, int key)
{
	int i;
	for (i = 0; i < SIZE; i++)
		if (list[i] == key)
			return i; // 탐색이 성공하면 인덱스 반환
	
		return -1; // 탐색이 실패하면 -1 반환
}

*/

/*이진탐색
int binary_search(int list[], int n, int key)
{
   int low, high, middle;
   low = 0;
   high = n - 1;

   while (low <= high){                // 아직 숫자들이 남아있으면
		middle = (low + high) / 2;     // 중간 요소 결정
		if (key[] == list[middle] )    // 일치하면 탐색 성공
		   return middle;
		else if (key > list[middle])   // 중간 원소보다 크다면
			low = middle + 1;          // 새로운 값으로 low 설정
		else
			high = middle - 1;         // 새로운 값으로 high 설정
	}
	return -1;
}

*/
/*2차원 배열 활용
int main(void)
{
	int s[3][5]; // 2차원 배열 선언
	int i, j; // 2개의 인덱스 변수
	int value = 0; // 배열 원소에 저장되는 값

	for (i = 0; i < 3; i++)
		for (j = 0; j < 5; j++)
			s[i][j] = value++;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 5; j++)
			printf("%d\n", s[i][j]);
	return 0;
}
*/

/*포인터 선언
char c = 'A';                    // 문자형 변수
float f = 36 5; f = 36.5;        // 실수형 변수
double d = 3.141592;             // 실수형 변수

char * pc = &c;                  // 문자를 가리키는 포인터 pc
float * pf = &f;                 // 실수를 가리키는 포인터 pf
double * pd = &d;                // 실수를 가리키는 포인터 p
*/

/*포인터 예제
{
	int i = 3000;
	int* p = &i; // 변수와 포인터 연결

	printf("&i = %u\n", &i); // 변수의 주소 출력
	printf("p = %u\n", p); // 포인터의 값 출력
	printf("i = %d\n", i); // 변수의 값 출력
	printf("*p = %d\n", *p); // 포인터를 통한 간접 참조 값 출력

	return 0;
}
*/

/*
struct vector get_vector_sum(struct vector *a, struct vector *b)
{
	struct vector result;
	result.x = a->x + b->x;
	result.y = a->y + b->y;

	return result;
*/