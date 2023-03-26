1-1
```c
#include <stdio.h>

int main(void)
{
	printf("안녕하세요. 신소재공학부 22학번 이다민입니다.");

	return 0;
}



1-2
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
  
int main(void)
{
	int num1 = 0, num2 = 0;
	int result = 0;

	printf("첫 번째 수 : ");
	scanf_s("%d", &num1);
	
	printf("두 번째 수 : ");
	scanf_s("%d", &num2);
	

	result = num1 + num2;

	printf("%d + %d = %d", num1, num2, result);

	return 0;
}


1-3
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int num = 0;

	printf("양의 정수를 입력하시오 : ");
	scanf_s("%d", &num);

	printf("|number      |decimal     |octal       |hexadecimal |\n");
	printf("|%-12d", num);
	printf("|%+-12d", num);
	printf("|%-12o", num); //8진수 > %o
	printf("|%-12x|\n", num); // 16진수 > &x

	return 0;
}

