#include <stdio.h>
//#define PI 3.14

int main() {

	//printf("10������ %d�� 8������ %o�� 16������ %x�Դϴ�.", 10, 10, 10);
	//printf("�Ǽ���� %f \n", 10.0f);
	//%c %s

	//printf("a�� �빮�ڴ� : %c \n", 'A');
	//printf("a�� �빮�ڴ� : %c \n", 65); //�ƽ�Ű�ڵ� 65 = A
	//printf("%f \n", 0.000123);
	//printf("%f \n", 0.00012345);
	//printf("%e \n", 0.000123);
	//printf("%E \n", 0.0001236);
	//printf("|%10s|\n", "hello");
	//printf("|%-10s|\n", "hello");
	//printf("%f\n", 0.123456789);
	//printf("%.9f\n", 0.123456789);
	//printf("%o\n", 0721);
	//printf("%x\n", 0xf1);
	//printf("======================\n");
	//printf("%#o\n", 0721);
	//printf("%#x\n", 0xf1);

	//printf("���� �⼮���� %d%% �Դϴ�.", 99);
	//int a = 10;
	//printf("a=%d\n", a);
	//printf("this is%n Sparta!!\n", &a);
	//printf("a=%d\n", a);
	
	//printf("hello\nworld");
	//printf("\a");

	//printf("helloworld!\b\n");
	//printf("\thelloworld\tAAA\n");

	//printf("���� �̸��� \"%s\"�Դϴ�.\n", "�賫��");
	//printf("���� '%s'�� �ֽ��ϴ�.", "���ϱ�");

	//printf("%c\n", 65);
	//printf("\x09,%d\n", 10);
	//printf("\t,%d\n", 10);
	//printf("10\\10");
	
	/*
	printf("\n");
	printf("%-4s\n", "*");
	printf("%-3s\n", "**");
	printf("%-2s\n", "***");
	printf("%-1s\n", "****");
	printf("%s\n\n", "*****");

	printf("%5s\n", "*");
	printf("%5s\n", "**");
	printf("%5s\n", "***");
	printf("%5s\n", "****");
	printf("%5s\n\n", "*****");

	printf("%5s\n", "*");
	printf("%6s\n", "***");
	printf("%7s\n", "*****");
	printf("%8s\n", "*******");
	printf("%s\n", "*********");
	*/

	/*
	int A;
	int a;
	int a_1;
	int _a1;
	int @a;
	int 1a;
	int a b;
	int if;
	*/

	//const float pi = 3.14f;

	//printf("PI=%f, pi=%f\n", PI, pi);

	//----------���� �� �ʱ�ȭ(���� �ִ´�.)
	
	/*
	int a = 1;
	int b = 5;
	int c = a + b;
	
	printf("a�� ���� %d\n", a);
	printf("b�� ���� %d\n", b);
	printf("c�� ���� %d\n", c);
	*/

	//int a = 1, b = 5, c = a + b;
	
	//-------------------------------------------
	
	/*
	int aa, bb, cc;

	aa = 1;
	bb = 5;
	cc = aa + bb;
	*/

	/*
	float a = 0.12f;

	printf("%f�� ������ ũ��� %d bytes\n", 0.12, sizeof(0.12)); //8����Ʈ
	printf("%f�� ������ ũ��� %d bytes\n", 0.12f, sizeof(0.12f)); //4����Ʈ
	printf("%f�� ������ũ��� %d bytes", a, sizeof(a));
	*/

/*
	char ch = 65;
	int a = (int)ch;

	printf("%c", a);
*/

	/*
	const char ch2 = 'A';
	ch2 = 10;
	
	printf("%c\n", ch);
	printf("%d\n", ch2);
	*/

/*
	int num1 = 10;
	int num2 = 3;

	double result;
	result = (double)num1 / num2;

	printf("��� %f", result);
	*/

/*
	char num1 = 128; //���� ���
	char num2 = -129; //���� ���

	printf("%d\n", num1);
	printf("%d\n", num2);
*/

/*
	int a = 6, b = 5;

	printf("���� ���� ��� :  %d \n", a + b);
	printf("���� ���� ��� :  %d \n", a - b);
	printf("���� ���� ��� :  %d \n", a * b);
	printf("������ ���� ��� :  %d \n", a / b);
	printf("������ ���� ��� :  %d \n", a % b); //������ ���ϱ�

	int i = 0, j = 0, k = 0;

	printf("i = %d, j = %d, k = %d \n", i, j, k);

	i = 1;
	j = 5;
	k = 7;

	printf("i = %d, j = %d, k = %d \n", i, j, k);
*/
	
/*
	int a = 10;

	a += 10; // a = a + 10
	printf("%d\n", a);

	a -= 10; // a = a - 10
	printf("%d\n", a);

	a *= 10;
	printf("%d\n", a);

	a /= 10;
	printf("%d\n", a);

	a %= 10;
	printf("%d\n", a);
	*/
	
/*
	int b = 10;

	b++; //b = b + 1 (���� ���ο� ������)
	printf("%d\n", b);

	++b; //b = b + 1 (�� ���ο� ������)
	printf("%d\n", b);

	b--; //b = b - 1
	printf("%d\n", b);

	--b; //b = b - 1
	printf("%d\n", b);
*/

/*
	int num1 = 20;  // ������ 20�� ������ 0000 0000 0001 0100 
	int num2 = 16;  // ������ 16�� ������ 0000 0000 0001 0000 

	char result1, result2, result3, result4;

	result1 = num1 & num2; //�� ���� ��� 1�϶��� 1�̵ȴ�.
	//0000 0000 0001 0100
	//0000 0000 0001 0000
	//0000 0000 0001 0000 = 16
	printf("��Ʈ ���� AND(����) ������ ��� %d \n", result1);

	result2 = num1 | num2; //���߿� �ϳ��� 1�̸� 1�̴�. �Ѵ� 0 = 0
	printf("��Ʈ ���� OR(����) ������ ��� %d \n", result2);

	result3 = num1 ^ num2; //�� ���� �ٸ��� 1 ������ 0
	printf("��Ʈ ���� XOR(��Ÿ�� ����) ������ ��� %d \n", result3);

	result4 = ~num1; // 20�� ���� = -(20 + 1) '�����´�'
	printf("��Ʈ ���� NOT(����) ������ ��� %d \n", result4);
*/
/*
	int number = 500; //0000 0001
	printf("%d\n", number << 1); //0000 0010 
	printf("%d\n", number << 2); //0000 0100
	printf("%d\n", number << 3); //0000 1000
	printf("%d\n", number << 4); //0001 0000

	number = 16;
	printf("%d\n", number >> 1);  
	printf("%d\n", number >> 2); 
	printf("%d\n", number >> 3);
	printf("%d\n", number >> 4); 
*/	

	char ch = 0;
	printf("���ڸ� �Է��ϼ���. : ");
	ch = getchar();
	printf("���� : %c \n", ch);

	putchar('db');

	return 0;
}