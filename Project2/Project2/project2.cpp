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

	/*다양한 자료형으로 변수에 저장해보기*/
	char c; //문자형 변수 c 선언
	int i;  //정수형 변수 i 선언
	double interest_rate;  //실수형 변수 interest_rate 선언

	c = 'a';   //문자형 변수 c에 문자 'a'를 대입
	i = '60';  //정수형 변수 i에 60을 대입
	interest_rate = 4.9;  //실수형 변수 interest_rate에 4.9를 대입


	return 0;
}