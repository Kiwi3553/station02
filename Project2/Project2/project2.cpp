#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include <math.h>

//#define RATE 0.07         // ����
//#define INVESTMENT 10000000    //�ʱ� ���ڱ�
//#define YEARS     10      // ���� �Ⱓ

#define START_DAY    3      // ù��° ���� ������ 
#define DAYS_OF_MONTH    31 // ���� �ϼ�

#define STUDENTS 5
#define SIZE 5

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

		/*If���� ����Ͽ� ���밪�� ���ϴ� ���α׷�

			int number;

			printf("������ �Է��Ͻÿ�.:\n");
			scanf("%d", &number);

			if (number < 0)
				{
					number = -number;

					printf("������ %d �Դϴ�.", number);
				}
			*/

			/*IF else���� �̿��� ���� �Է� ���α׷�

				int score;

				printf("������ �Է��ϼ���: \n");
				scanf("%d", &score);


				if(score >= 60)
				{
					printf("�հ��Դϴ�!\n");
					printf("����ϼ̽��ϴ�!\n");
				}
				else
				{
					printf("���հ��Դϴ�.\n");
					printf("�����ϼ���!");
				}
				*/
 /*���� �Ǵ� ���α׷�

				int year;

				printf("������ �Է��Ͻÿ�: ");
				scanf("%d", &year);

				if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
				printf("%d���� �����Դϴ�.\n", year);
				else
				printf("%d���� ������ �ƴմϴ�.\n", year);
				*/

				/*���� 3�� ���� �ּڰ� ã��

				int num1;
				int num2;
				int num3;
				int min;

				printf("���� 3���� �Է��Ͻÿ�: \n");
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
				printf("���� ���� ���� %d�Դϴ�.", min);
				*/

				/*���� �з� ���α׷�

				int score;

				printf("������ �Է��Ͻÿ�.:\n");
				scanf("%d", &score);

				if (score >= 90)
					printf("�հ�: ���� A.\n");
				else if (score >= 80)
					printf("�հ�: ���� B.\n");
				else if (score >= 70)
					printf("�հ�: ���� c.\n");
				else if (score >= 60)
					printf("�հ�: ���� D.");

				else
					printf("���հ����Դϴ�.");
				*/

				/*������ ��� ���� ���α׷�

				char op;
				int x, y;

				printf("������ �Է��Ͻÿ�:\n");
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
				printf("������������ �������Դϴ�.");
				*/

				/*switch��

				int number;

				printf("������ �Է��Ͻÿ�.");
				scanf("%d", &number);

				switch(number)
				{
					case 0:
						printf("����\n");
						break;
					case 1:
						printf("�ϳ�\n");
						break;
					case 2:
					case 3:
						printf("�μ��ʰ�\n");
						break;

				default:
					printf("����");
					break;
				}*/

				/*�����ϼ��� �� �� �ִ� ���α׷�

				int month, days;

				printf("�ϼ��� �˰���� ���� �Է��Ͻÿ�.");
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
				printf("%d���ϼ��� %d�Դϴ�.", month, days);
				*/

				/*��Ģ���� ���� �����2

				int num1;
				int num2;
				char operation;

				printf("ù��° ���ڸ� �Է��ϼ��� :\n");
				scanf("%d", &num1);

				printf("���Ͻô� �����ڸ� �Է��Ͻÿ� :\n");
				scanf(" %c", &operation);

				printf("�ι�° ���ڸ� �Է��ϼ��� :\n");
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
					printf("�������� ���� �������Դϴ�.");

				*/

				/*���ڵ��� �з��ϴ� ���α׷�
				char ch;

				printf("���ڸ� �Է��Ͻÿ�: ");
				scanf("%c", &ch);

				if (ch >= 'A' && ch <= 'Z')
					printf("%c�� �빮���Դϴ�.\n", ch);
				else if (ch >= 'a' && ch <= 'z')
					printf("%c�� �ҹ����Դϴ�.\n", ch);
				else if (ch >= '0' && ch <= '9')
					printf("%c�� �����Դϴ�.\n", ch);
				else
					printf("%c�� ��Ÿ�����Դϴ�.\n", ch);

				*/

				/*��Ģ���� ����:switch����

				int x;
				int y;
				char op;

				printf("������ �Է��Ͻÿ�:\n");
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
						printf("�������� �ʴ� �������Դϴ�.\n");
						break;


				}
				*/

				/*������ ���ͷ� �ٲٴ� ���α׷�
				{
					int meter;

					meter = 0 * 1609;
					printf("0������ %d�����Դϴ�.\n", meter);

					meter = 1 * 1609;
					printf("1������ %d�����Դϴ�.\n", meter);

					meter = 2 * 1609;
					printf("2������ %d�����Դϴ�.\n", meter);
				}
				*/

				/*while�� �̿��� ������ ���ͷ� �ٲٴ� ���α׷�
				{
					int meter;
					int i = 0;

					while (i < 3)
					{
						meter = i * 1609;
						printf("�� %d������ %d�����Դϴ�.\n", i, meter);
						i++;
					}

				}
				*/

				/*while ���� �̿��� ������ ��� ���α׷�
				int n;
				int i = 1;

				printf("����ϰ���� ���� �Է��Ͻÿ�\n");
				scanf("%d", &n);

				while(i <= 9)
				{
					printf("%d * %d = %d \n", n, i, n*i);
					i++;

				}
				*/

				/*for���� �̿��� ������ ��� ���α׷�(����)

				for(int i = 1;i<10; i++)
				{
					for(int j = 1;j<=10; j++)
					{
						printf("%d * %d = %d \n", i, j, (i * j));
					}
					printf("\n");
				}
				*/


				/*while ���� �̿��� ������ ��� ���α׷�
					int n;

					printf("============================\n");
					printf("  n      n�� ���� \n");
					printf("============================\n");

					n = 1;
					while (n <= 10)
					{
						printf("%3d  %5d\n", n, n * n);
						n++;
					}
				*/




				/* ������ ������ �������� ���� ���ϴ� ���α׷�

				int i, n, sum;

				printf("������ �Է��Ͻÿ�:");
				scanf("%d", &n);

				i = 1;
				sum = 0;

				while (i <= n)
				{
					sum += i;
					i++;
				}

				printf("1���� %d������ ���� %d�Դϴ� \n", n, sum);
				*/

				/*�������� �ϱ� ���� �и� 0������ if-els ���� �̿��ϱ�

				int n1, n2, n3;

				printf("������ �Է��Ͻÿ�.:\n");
				scanf("%d", &n1);

				printf("������ �Է��Ͻÿ�.:\n");
				scanf("%d", &n2);

				if (n2 == 0)
					{
						printf("0���δ� ���� �� �����ϴ�.\n");

					}
				else
					n3 = n1 / n2;
						printf("����� %d�Դϴ�.", n3);

				*/



				/* while ���� �̿��� �հ� ���α׷�

				int n;
				int i = 0;
				int sum = 0;

				while(i < 5)
				{
					printf("���� �Է��Ͻÿ� : \n");
					scanf("%d", &n);

					sum = sum + n;
					i++;
				}
				printf("�հ�� %d�Դϴ�.\n", sum);

				*/

/* ������ �Է¹޾Ƽ� �հ踦 ���ϰ� �л� ���� ����.

				int s ;
				float sum ;
				float average ;
				int i ;

				s = 0;
				sum = 0;
				average = 0;
				i = 0;

				printf("���� �Է��� �����Ϸ��� ������ �Է��Ͻÿ�\n");


				while (s >= 0)
				{
					printf("������ �Է��Ͻÿ�: \n");
					scanf("%d", &s);
					sum += s;
					i++;

				}
					sum = sum - s;
					i--;

					average = sum / i;
					printf("������ ����� %f�Դϴ�.", average);

				*/

/* while���� �̿��� �ִ� ����� ���ϱ� ���α׷�
				int x;
				int y;
				int r;

				x = 0;
				y = 0;
				r = 0;

				printf("�� ���� ������ �Է��Ͻÿ�.\n");
				scanf("%d %d", &x, &y);

				while (y != 0)
				{
					r = x % y;
					x = y;
					y = r;

				}

				printf("�ִ������� %d�� �����ϴ�.\n", x);
				*/

/*do while ���� �̿��� �޴�

				int x;
				x = 0;

				do
				{
					printf("1-----���� �����\n");
					printf("2-----���� ����\n");
					printf("3-----���� �ݱ�\n");

					printf("��ư�ѹ��� �Է��Ͻÿ�:");
					scanf("%d", &x);

				}


				while (x < 1 || 3 < x)
					printf("��ȿ�������� ��ư�Դϴ�.�ٽ� �Է����ּ���");
					scanf("%d", &x);

					printf("���õ� �޴� = %d \n", x);
				*/

/*�ݺ��� �̿��� ������ ���α׷�
				int sum = 0;
				int i;

				for (i = 1; i <= 10 ; i++)
				{
					sum = sum + i;
				}
				printf("1���� 10������ �������� %d�Դϴ�.", sum);
				*/

/*�ݺ��� �̿��� �������� ���ϱ�
				int i;
				int n;

				printf("������ �Է��Ͻÿ�.");
				scanf("%d", &n);

				printf("================================= \n");
				printf("    i    i�Ǽ�����\n");
				printf("================================= \n");

				for (i = 1; i <= n; i++)

				printf("  %3d  %5d \n", i, i * i * i);

				*/

/* �ݺ��� �̿��� ���丮�� ���ϱ�

				int i;
				int n;
				int mut;

				mut = 1;

				printf("���丮���� ������ ������ �Է��Ͻʽÿ�:\n");
				scanf("%d", &n);

				for (i = 1; i <= n; i++)
				{
					mut = mut * i;
				}

				printf("%d!�� %d��.",n, mut);

				*/

/*������ ���α׷�
				int ss; //�� ����
				int n; //���� ���� �� ����
				int ll; //�� ����

				printf("����� �� ������ �Է��Ͻÿ�.:\n");
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

/*������ �л��� 5�� ģ ���� ������ ����� ���ϱ�

int s, t;
float score, total, average;
total = 0;

for (s = 0; s < 20; s++)
{
	for (t = 0; t < 5; t++)
	{
		
		printf("%d�� �л��� ���� % d��° ���� : ", s + 1, t + 1);
		scanf("%f", &score);
		total += score;
	}
	average = total / 5.0;
	printf("%d�� �л��� ���� ���: %f\n", s + 1, average);
}
*/

/*break�� �̿��Ͽ� �Ǽ��� �������� ����ϴ� ���ѷ��� Ż���ϱ�

double v;

while (1)
{
	printf("�Ǽ����� �Է��Ͻÿ�");
	scanf("%lf", &v);

	if (v < 0)
		break;
	printf("%lf�� �������� %lf�Դϴ�.\n", v, sqrt(v));
}
*/

/*break�� �̿��Ͽ� �л��� ������ �ջ��ϰ� ����� �����ϴ� ���ѷ��� Ż���ϱ�

float grade, sum = 0, average; 
int count = 0;  //����� or ����� ���� ���

while (1)
{
	printf("�л� ������ �Է��Ͻÿ�:");
	scanf("%f", &grade);
	if (grade < 0)
		break;
	count++;
	sum += grade;

}
average = sum / count;
printf("�л����� ������ ����� %f�Դϴ�.\n", average);
*/


/* �ҹ��ڸ� �빮�ڷ� �����ϴ� ���α׷��� continue �Ẹ��

char letter;

while(1)
{
	printf("�ҹ��ڸ� �Է��Ͻÿ�:");
	scanf("%c", &letter);

	if(letter == 'Q')
		break;
	if(letter<'a'||letter>'z')
		continue;

	letter -= 32; //�ƽ�Ű�ڵ� �빮�� �ҹ������� 32
	printf("��ȯ�� �빮�ڴ� %c�Դϴ�.\n",  letter);
}
*/

/* �������ڰ�� 

int i;
double total = INVESTMENT; //������ �հ�

printf("=============\n");
printf("���� ������\n");
printf("=============\n");

for (i = 1; i <= YEARS; i++)
{
	total = total * (1 + RATE);     // ���ο� ������ ���
	printf("%2d %10.1f\n", i, total);
}
*/

/* �޷� ����� 

int day, date;                                                 //���� ����(���ϰ� ����)
printf("=====================\n");                             //�޷� ������ ���ð� �ٳѱ�
printf("�� �� ȭ �� �� �� �� \n");
printf("=====================\n");

for(day = 0; day < START_DAY; day++)                           //for���� �̿��ؼ� ������ ������ ���� ����� 

	printf(" ");

for(date = 1; date <= DAYS_OF_MONTH; date++)                   //for���� �̿��ؼ� 1�� ���� 31�� �ݺ����ֱ�
{
	if (day == 7)                                              //�Ͽ��ϸ��� �ٳѱ����ֱ� ���� for�� �ȿ� 7�� �ֱ�� �Ͽ翡 �ٳѱ� ���
	{
		day = 0;
		printf("\n");
	}
	day++;                                                     //������ �Ѿ������ �����༭ ��¥ ��� 
	printf("%2d", date);
}
printf("\n=====================\n");                           //�޷� ������ ������ 
*/

/*�Լ� ����

//����1
������ �������� �Ի��ϴ� �Լ�

��ȯ��:int
�Լ� �̸�:square
�Ű� ����:int n

int square(int n)
{
	return(n * n);
	
}

//����2
�ΰ��� �����߿��� ū ���� ����ϴ� �Լ�
��ȯ��:int
�Լ� �̸�: get_max
�Ű� ����:int x,int y

int get_max(int x, int y)
{
	if (x > y)return(x);
	else return(y);
}

//����3
������ ���밪�� ����ϴ� �Լ�
��ȯ�� : int
�Լ� �̸� : absolute
�Ű� ���� : int x

int absolute(int x)
{
	if (x > 0)
		return x;
	else
		return -x;
}

//����4
��ǥ ��ȣ�� �̿��Ͽ� ���簢���� �׸��� �Լ�

��ȯ�� : void
�Լ� �̸� : draw_rect
�Ű� ���� : int side

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

//����5
������ �ŵ� ������(x^y)�� ����ϴ� �Լ�
��ȯ��:int
�Լ� �̸� : power
�Ű� ���� : int x,int y

int power(int x, int y)
{
	int i;
	longlong result = 1;

	for (i = 0; i < y; i++)
		result  *=  x;
	return result;
}

//����6
���丮��(n!)�� ����ϴ� �Լ�
��ȯ�� : int
�Լ� �̸� : factorial
�Ű� ���� : int n

int factorial(int n)
{
	int i;
	longlong result = 1;

	for (i = 1; i <= n: i++)
		result *= i;

	return result;
}

//�Լ� ���� ����

int compute_sum(int n);

int ����(void)
{
	int n, sum;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &n);

	sum = compute_sum(n);        //�Լ� ���
	printf("1���� %d������ ���� %d�Դϴ�. \n", n, sum);

}
int compute_sum(int n)
{
	int i;
	int result = 0;

	for (i = 1; i <= n; i++)
		result += i;
	return result;
}

//���� �ﰢ�� ����

#define RAD_TO_DEG(45.0/atan(1))

int ����(void)
{
	double w, h, r, theta;

	printf("�غ��� ���̸� �Է��Ͻÿ�:");
	scanf("%lf %lf", &w, &h);

	r = sqrt(w * w + h * h);
	theta = RAD_TO_DEG * atan2(h, w);

	printf("����=%f ����=%f \n", r, theta);
}
*/



/*�������� ����


���� 1
int i;

for (i = 0, i < 5; i++)
{
	int temp = 1;                    //����� ������ ������ �����Ǿ� �ʱ�ȭ�ȴ�.
	printf("temp = %d\n", temp);
	temp++;
}

����2
{
	int i;

	i = 10;
	printf("�Լ� ȣ���� i=%d\n", i);
	inc(i);        //���� ���� ȣ��
	printf("�Լ� ȣ���� i=%d\n", i);
	return 0;
}
int inc(int counter)
{
	counter++;
	return counter;
}

����3
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

/*�ŵ����� ���ϱ�

//�ݺ��� ver.
double slow_power(double x, int n)
{
	int i;
	double r = 1.0;

	for (i = 0; i < n; i++)
		r = r * x;
	return(r);
}

//��ȯȣ�⹮ ver.
double power(double x, int n)
{
	if (n == 0)return 1;
	else if ((n % 2) == 0)
		return power(x * x, n / 2);
	else return x * power(x * x, (n - 1) / 2);
}
*/

/*�Ǻ���ġ ���� ����
//����Լ� ver.1
int fib(int n)
{
	if (n == 0) return 0;                          //0�� �Ǹ� 0�� ��ȯ�ض� = 0�� �Ǹ� ���� 
	if (n == 1) return 1;                          //1�� �Ǹ� 1�� ��ȯ�ض� = 1�� �Ǹ� ���� 
	return(fib(n - 1) + fib(n - 2));               //n�� 2�̻��̶�� ��ȯȣ�� ���ʴ�� �־ 0�� 1�� �ɶ����� ������ �Ǻ���ġ ��������� ��ȯ��

}

//����Լ� ver.2

int fibo(int n)
{
	if (n == 0) return 0;    
	else if (n == 1) return 1;
	else return fibo(n - 1) + fibo(n - 2);
}

int ����(void)
{
	int n;
	int i;

	printf("�Ǻ���ġ �� �Է�: \n");
	scanf("&d", &n);

	for (i = 0; i < n; i++) {
		printf("%d", fibo(i));
	}

	printf("\n\n");
	system("pause");

	return 0;

}
//�̷������� ȣ���ؼ� ����

//for ver

int i;                           //�ݺ�Ƚ�� ���� ����
int n;                           //�Է°� ���� ����
int head = 0;                    //�� �ܰ� �� ��
int mid = 0;                     //�� �ܰ� �� ��
int rear = 1;                    //�� ���� ������ ����� ���� ���� �� 

printf("�Ǻ���ġ �� �Է� : ");   //�Է� �ȳ���
scanf("%d", &n);                 //�Է� �ڵ� 

for(i=0; i < n; i++)             //�ݺ���( 0���� �ϴϱ� Ƚ�� ���)
   { 
	printf("%d", head);          //�Ǻ���ġ �� ��¹�(ù��° �������� ���ܰ� �����ܰ谡 �� �� �մ� head�� �� �����̵�)
	mid = head + rear;           //mid�� ���ܰ�� �����ܰ��� ��
	head = rear;                 //�Ѵܰ����� �ι�°���� �Ǵ� �ڵ�
	rear = mid;                  //���Ѱ� �Ѵܰ����� �Ǵ� �ڵ�
    }

	printf("\n\n");              //���� �� ���� ��ĭ
	system("pause");             
	return 0;
*/

/*�ϳ�����ž
�ϳ�����ž ����(A���� C�� ���� N���� ��Ģ�� ���� �Űܶ�)
int n;                //���� ���� ����
char from;            //���� ��ġ ������ 
char tmp;             //���� ��ġ �߰���
char to;              //���� ������

void hanoi_tower(int n, char from, char tmp, char to)
{
	if (n == 1)printf("���� 1�� %c ���� %c���� �ű��.\n", from, to);     //������ 1���̰ų� Ȥ�� 1���� ���Ҵٸ� A���� C�� �Űܶ�(��ȯ ������)
	else {
		hanoi_tower(n - 1, from, to, tmp);                        //��ȯ ȣ�� �۵�. �̶� �� �� ������ ������ n-1 �� ������ ���ǵ��� ������C�� �ƴ� �ٸ������� TMP�� �ű� 
		printf("���� %d�� %c���� %c���� �ű��.\n", n, from, to);   //�� �Ʒ� ������ �������� �̵���Ŵ
		hanoi_tower(n - 1, tmp, from, to)                         //�ι�° ��ȯ ȣ�� �۵�,�ٸ������� �Ű�� ���ݵ��� �������� �ű�°�
	}
}
main()
{
	hanoi_tower(n, 'A', 'B', 'C');
}
*/

/*�迭 ���� ����
int grade[10];
int i;

for (i = 0; i < 10; i++)
	grade[i] = 0;

printf("========================\n");
printf("�ε���     ��\n");
printf("========================\n");

for (i = 0; i < 10; i++)
	printf(" %3d % 8d\n", i, grade[i]);
*/

/*�迭 �ʱ�ȭ ����
int grade[10] = { 20,85,11,64,5,71,52,39,95.43 };
int i;

printf("=======================\n");
printf("�ε���     ��\n");
printf("=======================\n");

for (i = 0; i < 10; i++)

	printf(" %3d  %7d\n", i, grade[i]);
*/


/*�迭 ���� ���� ����

int grade[SIZE];
int i;

for (i = 0; i < SIZE; i++)
	grade[i] = rand() % 100;

printf("=======================\n");
printf("�ε���    ��\n");
printf("=======================\n");

for (i = 0; i < SIZE; i++)
	printf("%5d  %5d\n", i, grade[i]);
*/

/*�迭 ���� ��� ����-���� ��հ� ���α׷�
int grade[STUDENTS];        //define���� ������ ��ȣ��� STUDENTS(�л���=5)�� �迭ũ��� �޾ƿ� �������� ��� �迭 grade�� ���� 
int sum = 0;                //�հ谪�� ���� ���� sum�� ����
int i, average;             //for�� ���� �ݺ� ȸ�� i �� ��հ� ���� ����

for (i = 0; i < STUDENTS; i++)                                  //5���� ������ �ޱ����� ����¹��� �ݺ�
{
	printf("�л����� ������ �Է��Ͻÿ�:");
	scanf("%d", &grade[i]);                                     //������ �޾Ƽ� ������ �迭�� �ּҰ����� ���ٽ��� ���� �־��ش�

}
for (i = 0; i < STUDENTS; i++)                                  //5���� �հ踦 �����ϱ� ���� �ݺ��� 
	sum += grade[i];

average = sum / STUDENTS;                                       //��տ� �հ� ������ �л����Ѱ� �����Ѵ�
prinrf("���� ���=%d\n", average);                              //��հ� �޾� ��հ� ���

*/

/*�迭�� ����
int i;
int a[SIZE] = { 1,2,3,4,5 };
int b[SIZE];

for (i = 0; i < SIZE; i++)
	b[i] = a[i];
*/

/*�迭�� ��
int i;
int a[SIZE] = { 1,2,3,4,5 };
int b[SIZE] = { 1,2,3,4,5 };

for (i = 0; i < SIZE; i++)
{
	if (a[i] != b[i])
	{
		printf("a[]�� b[]�� ���� �ʽ��ϴ�.\n");
		return 0;
	}
}
printf("a[]�� b[]�� �����ϴ�.\n");
*/


/*�迭 ������ ���� ���
int grade[] = { 1,2,3,4,5,6 };
int i, size;

size = sizeof(grade) / sizeof(grade[0]);

for (i = 0; i < size; i++)
	printf("%d", grade[i]);
*/

/*�迭 ���� ���� ���
int data[SIZE];
int i;

for (i = 0; i < SIZE; i++)
{
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &data[i]);
}

for (i = SIZE - 1; i >= 0; i--)
{
	printf("%d\n", data[i]);
}
*/

int grade[STUDENTS] = { 30,20,10,40,50 };
int i, s;

for (i = 0; i < STUDENTS; i++)
{
	printf("��ȣ %d:", i);
	for (s = 0; s < grade[i]; s++)
		printf("*");
	printf("\n");
}

return 0;
}