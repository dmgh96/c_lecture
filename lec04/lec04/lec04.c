#include <stdio.h>

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
	return 0;
}