#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


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








return 0;



}