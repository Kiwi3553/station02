#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
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

    /*��Ÿ����� ������ �̿��� ���� �� ���� ���̸� ���ϴ� ���α׷�
	int num1 = 0;
	int num2 = 0;
	float num3 = 0;
	double num4 = 0;
	double num5 = 0;
	float modify = 0;


	printf("a�� ���̸� �Է��Ͻÿ�:\n");
	scanf("%d", &num1);

	printf("b�� ���̸� �Է��Ͻÿ�:\n");
	scanf("%d", &num2);

	num4 = pow(num1, 2); //NUM1�� 2��
	printf("num1��2���� %f�̴�.\n", num4);

	num5 = pow(num2, 2); //NUM2�� 2��
	printf("num2��2���� %f�̴�.\n", num5);

	modify = num4 + num5;                //a��2�� + b��2�� ����
	printf("modify���� %f\n", modify);

    num3 = sqrt(modify);
	printf("��Ʈ modify = %f\n", num3);
	//int num3 = ��(num1 ^ 2 + num2 ^ 2);
	
	//printf("num1 ^ 2 + num2 ^ 2 = num3 ^ 2")
	printf("c�� ���̴� %d cm�̴�.", num3);
	printf("%d^2 + %d^2�� %d^2�� ����.", num1, num2, num3);
	
	
	//int num3 = ��(num1 ^ 2 + num2 ^ 2);*/



    /*���ں� �Ǹŷ� �� ���� ���α׷�

	int Ȩ���� = 2300;
	int ������ = 1700;
	int ��Ĩ = 1700;
	int ���� = 2800;

	int Ȩ�����Ǹź����� = 0;
	int �������Ǹź����� = 0;
	int ��Ĩ�Ǹź����� = 0;
	int �����ǸŹڽ��� = 0;

	int ���ϰ������Ǹž� = 0;

	printf("Ȩ���� ���� �Ǹ� �������� �Է��Ͻÿ� :\n");
	scanf("%d", &Ȩ�����Ǹź�����);

	printf("������ ���� �Ǹ� �������� �Է��Ͻÿ� :\n");
	scanf("%d", &�������Ǹź�����);

	printf("��Ĩ ���� �Ǹ� �������� �Է��Ͻÿ� :\n");
	scanf("%d", &��Ĩ�Ǹź�����);

	printf("���� ���� �Ǹ� �ڽ����� �Է��Ͻÿ� :\n");
	scanf("%d", &�����ǸŹڽ���);

	printf("���ں� ���� �� �Ǹŷ��� %d EA, %d EA, %d EA, %d EA�̴�.\n", Ȩ�����Ǹź�����, �������Ǹź�����, ��Ĩ�Ǹź�����, �����ǸŹڽ���);

	

	int Ȩ���������Ǹŷ� = Ȩ���� * Ȩ�����Ǹź�����;
	printf("Ȩ������ ���� ���;��� %d ���̴�.\n", Ȩ���������Ǹŷ�);

	int �����������Ǹŷ� = ������ * �������Ǹź�����;
	printf("�������� ���� ���;��� %d ���̴�.\n", �����������Ǹŷ�);

	int ��Ĩ�����Ǹŷ� = ��Ĩ * ��Ĩ�Ǹź�����;
	printf("��Ĩ�� ���� ���;��� %d ���̴�.\n", ��Ĩ�����Ǹŷ�);

	int ���������Ǹŷ� = ���� * �����ǸŹڽ���;
	printf("������ ���� ���;��� %d ���̴�.\n", ���������Ǹŷ�);
	
	
	int daysum = Ȩ���������Ǹŷ� + �����������Ǹŷ� + ��Ĩ�����Ǹŷ� + ���������Ǹŷ�;
	printf("���ڵ��� ���� �Ѽ��;��� %d ���̴�.", daysum);
	*/

    /*��Ģ���� ���α׷�
	
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

	/*2�� ���� ���α׷�
	int x = 3;
	int y = -3;

	printf("x = %08X\n", x); // 8�ڸ��� 16������ ����Ѵ�.
	printf("y = %08X\n", y); // 8�ڸ��� 16������ ����Ѵ�.
	printf("x+y = %08X\n", x + y); // 8�ڸ��� 16������ ����Ѵ�.*/

    /*���� ������ ���� ���
  
	char code1 = 'A';   //���� ����� �ʱ�ȭ
	char code2 = 65;    //�ƽ�Ű �ڵ�� �ʱ�ȭ

	printf("���� ��� �ʱ�ȭ = %c\n", code1);
	printf("�ƽ�Ű �ڵ� �ʱ�ȭ = %c\n", code2);
	*/

	/*�̽������� ������
	printf("�̽������� �������� \\�� �ǹ̸� ��Ÿ���� ���ڸ� �ٿ��� ���\n");
	printf("'\\a'�� ��� ��Ÿ���� ������̴�.\n");
	printf("'\\007'�ε� ǥ���� �����ϴ�.\n");
	printf("��� ����غ���'\\007'�� ����Ѵ� \007 \n"); 
	*/

	/*������ �ǽ�
	int num = 3;

	num++;

	printf("%d", num);
	*/
	
	/*���� ���α׷�

	int year, result;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &year);
	result = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
	printf("result=%d \n", result);
	*/

	/*
	int a, b;
	printf("ù��° ������=");
	scanf("%d", &a);
	printf("�ι�° ������=");
	scanf("%d", &b);

	printf("%d + %d �� %d\n", a, b, a + b);
	printf("%d - %d �� %d\n", a, b, a - b);
	printf("%d * %d �� %d\n", a, b, a * b);
	printf("%d / %d �� %d\n", a, b, a / b);
	printf("%d %% %d �� %d\n", a, b, a % b);
	*/

	/*���ǹ� ����
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

/*If���� ����Ͽ� ������ ����� �����ϴ� ���α׷�

	int number = 0;

	printf("������ �Է��Ͻÿ� : \n");
	scanf("%d", &number);

	if(number > 0)
		printf("�Է��Ͻ� ������ ����Դϴ�.");

	if(number == 0)
		printf("�Է��Ͻ� ������ 0�Դϴ�.");

	if (number < 0)
		printf("�Է��Ͻ� ������ �����Դϴ�.");
    
	*/

	/*If���� ����Ͽ� Ȧ���� ¦���� �����ϴ� ���α׷�

	
	int number;

	printf("������ �Է��Ͻÿ�.: \n");
	scanf("%d", &number);

	if(number%2 == 1)
		printf("�ش� ���� Ȧ�� �Դϴ�.\n");

	if(number%2 == 0)
		printf("�ش� ���� ¦�� �Դϴ�.");
	*/

/*If���� ����Ͽ� ���밪�� ���ϴ� ���α׷�*/

int number;

printf("������ �Է��Ͻÿ�.:\n");
scanf("%d", &number);

if (number < 0)
	number = -number;

printf("������ %d �Դϴ�.", number);






	return 0;



}