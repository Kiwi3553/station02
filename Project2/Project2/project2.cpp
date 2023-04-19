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


	printf("Hello World!\n");



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
	printf("e 는 %f 입니다.\n", e);

	int x;
	int y;
	int sum;

	printf("첫번째 숫자를 입력하시오:");
	scanf("%d", &x);

	printf("두번째 숫자를 입력하시오:");
	scanf("%d", &y);

	sum = x + y;
	printf("두수의 합: %d", sum);

	
	return 0;
}