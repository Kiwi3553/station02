#include <stdio.h>

int main()
{
	//�̰��� �ּ��̴�.
	/*�̰͵� �ּ��̴�.*/
	//�̷��� ���� �Լ��� ���� �Լ��� ������ ������ȴ�
	
	//����(���ϴ� ��)

	//int flyheight = 0;
	/*������ ���� num�� ����(����)�� �Ŀ� 0�� �ְڴ�*/

	//flyheight = 30; //������ ���� num�� 30�� �ְڴ�

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

	printf("a �� %d�̰� b �� %d�̰� c �� %d�Դϴ�.\n", a, b, c);

	float d = 1.3f;
	double e = 1.345232;

	printf("d �� %f �Դϴ�.\n", d);
	printf("e �� %f �Դϴ�.\n", e);

	int x;
	int y;
	int sum;

	printf("ù��° ���ڸ� �Է��Ͻÿ�:");
	scanf("%d", &x);

	printf("�ι�° ���ڸ� �Է��Ͻÿ�:");
	scanf("%d", &y);

	sum = x + y;
	printf("�μ��� ��: %d", sum);

	
	return 0;
}