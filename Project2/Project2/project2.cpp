#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>


double num4(); 


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

	printf("a �� %d�̰� b �� %d�̰� c �� %d�Դϴ�.\n", a, b, c);

	float d = 1.3f;
	double e = 1.345232;

	printf("d �� %f �Դϴ�.\n", d);
	printf("e �� %f �Դϴ�.\n", e); */

	/*int x;
	int y;
	int sum;

	printf("ù��° ���ڸ� �Է��Ͻÿ�:");
	scanf("%d",&x);

	printf("�ι�° ���ڸ� �Է��Ͻÿ�:");
	scanf("%d",&y);

	sum = x + y;
	printf("�μ��� ��: %d", sum);*/

	/*������� ����ϴ� ���α׷�
	int salary;       //����
	int deposit;      //�����

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &salary);

	deposit = 10 * 12 * salary;

	printf("10�� ������ �����: %d\n", deposit);*/

	/*ȯ���� ����ϴ� ���α׷�
	float rate;         //��/�޷� ȯ��
	float usd;          //�޷�ȭ
	int krw;            //��ȭ

	printf("�޷��� ���� ��ȭ ȯ���� �Է��Ͻÿ�:");    //�Է� �ȳ� �޽���
	scanf("%f", &rate);                               //����ڷκ��� ȯ���Է�

	printf("��ȭ �ݾ��� �Է��Ͻÿ�:");
	scanf("%d", &krw);

	usd = krw / rate;

	printf("��ȭ %d���� %f�޷� �Դϴ�.\n", krw, usd);*/

	
	/*���� ������ ����ϴ� ���α׷�

	float radius;       //���� ������
	float area;         //����

	printf("���� �������� �Է��Ͻÿ�:");
	scanf("%f", &radius);

	area = 3.14 * radius * radius;

	printf("���Ǹ���:%f\n", area);*/

	/*�پ��� �ڷ������� ������ �����غ���
	char c; //������ ���� c ����
	int i;  //������ ���� i ����
	double interest_rate;  //�Ǽ��� ���� interest_rate ����

	c = 'a';   //������ ���� c�� ���� 'a'�� ����
	i = '60';  //������ ���� i�� 60�� ����
	interest_rate = 4.9;  //�Ǽ��� ���� interest_rate�� 4.9�� ����*/

    /*������ �ڷ����� ũ�⸦ ����ϴ� ���α׷�
    
	short year = 0;
	int sale = 0;
	long total_sale = 0;

	printf("short�� �ڷ��� ũ�� : %d����Ʈ\n", sizeof(short));
	printf("int�� �ڷ��� ũ��: %d����Ʈ\n", sizeof(int));
	printf("long�� �ڷ��� ũ��: %d����Ʈ\n", sizeof(int)); */

    /*���� �Ż� ����غ���*/

	//char name = "�̻��";
	//int age = 32;
	//float stature = 171.2;

	//printf("���� �̸��� %s�Դϴ�.\n", name);
	//printf("�� ���̴� %d�Դϴ�.\n", age);
	//printf("���� ������ %f cm�̴�.", stature); 

    /*��Ÿ����� ������ �̿��� ���� �� ���� ���̸� ���ϴ� ���α׷�*/
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	double num4 = 0;
	double num5 = 0;
	int modify = 0;


	printf("a�� ���̸� �Է��Ͻÿ�:\n");
	scanf("%d", &num1);

	printf("b�� ���̸� �Է��Ͻÿ�:\n");
	scanf("%d", &num2);

	num4 = pow(num1, 2); //NUM1�� 2��
	printf("num1��2���� %f�̴�.\n", num4);

	num5 = pow(num2, 2); //NUM2�� 2��
	printf("num2��2���� %f�̴�.\n", num5);

	modify = num4 + num5;                //a��2�� + b��2�� ����
	printf("modify���� %d\n", modify);

    num3 = sqrt(modify);
	printf("��Ʈ modify = %d\n", num3);
	//int num3 = ��(num1 ^ 2 + num2 ^ 2);
	
	//printf("num1 ^ 2 + num2 ^ 2 = num3 ^ 2")
	printf("c�� ���̴� %d cm�̴�.", num3);
	printf("%d^2 + %d^2�� %d^2�� ����.", num1, num2, num3);
	
	
	//int num3 = ��(num1 ^ 2 + num2 ^ 2);
	return 0;
}