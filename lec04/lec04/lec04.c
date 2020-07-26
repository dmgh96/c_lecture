#include <stdio.h>
//#define PI 3.14

int main() {

	//printf("10진수는 %d는 8진수로 %o고 16진수로 %x입니다.", 10, 10, 10);
	//printf("실수출력 %f \n", 10.0f);
	//%c %s

	//printf("a의 대문자는 : %c \n", 'A');
	//printf("a의 대문자는 : %c \n", 65); //아스키코드 65 = A
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

	//printf("오늘 출석률은 %d%% 입니다.", 99);
	//int a = 10;
	//printf("a=%d\n", a);
	//printf("this is%n Sparta!!\n", &a);
	//printf("a=%d\n", a);
	
	//printf("hello\nworld");
	//printf("\a");

	//printf("helloworld!\b\n");
	//printf("\thelloworld\tAAA\n");

	//printf("나의 이름은 \"%s\"입니다.\n", "김낙현");
	//printf("집은 '%s'에 있습니다.", "성북구");

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

	//----------선언 후 초기화(값을 넣는다.)
	
	/*
	int a = 1;
	int b = 5;
	int c = a + b;
	
	printf("a의 값은 %d\n", a);
	printf("b의 값은 %d\n", b);
	printf("c의 값은 %d\n", c);
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

	printf("%f의 데이터 크기는 %d bytes\n", 0.12, sizeof(0.12)); //8바이트
	printf("%f의 데이터 크기는 %d bytes\n", 0.12f, sizeof(0.12f)); //4바이트
	printf("%f의 데이터크기는 %d bytes", a, sizeof(a));
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

	printf("결과 %f", result);


/*
	char num1 = 128; //범위 벗어남
	char num2 = -129; //범위 벗어남

	printf("%d\n", num1);
	printf("%d\n", num2);
*/

	return 0;
}