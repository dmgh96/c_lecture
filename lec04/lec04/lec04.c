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


	int num1 = 10;
	int num2 = 3;

	double result;
	result = (double)num1 / num2;

	printf("��� %f", result);


/*
	char num1 = 128; //���� ���
	char num2 = -129; //���� ���

	printf("%d\n", num1);
	printf("%d\n", num2);
*/

	return 0;
}