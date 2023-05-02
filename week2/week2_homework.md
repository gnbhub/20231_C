2_1
```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 0, b = 0, c = 0;
	int max = 0, min = 0;

	printf("a의 값을 입력하십시오.");
	scanf("%d", &a);
	printf("b의 값을 입력하십시오.");
	scanf("%d", &b);
	printf("c의 값을 입력하십시오.");
	scanf("%d", &c);

	max = a;
	if (max < b)
	{
		max = b; // max에 b가 들어가야 하므로 max를 왼쪽에 b가 오른쪽
	}

	if (max < c) // b가 a보다 크다면 max에는 b가 들어가 있음
	{
		max = c;
	}

	min = a;

	if (min > b)
	{
		min = b;
	}
	if (min > c)
		min = c;

	printf("가장 큰 값은 %d입니다.\n", max);
	printf("가장 작은 값은 %d입니다.\n", min);

	return 0;

}
```
![2_1](https://user-images.githubusercontent.com/127831078/235754940-7bb9a86b-1472-4726-a4a0-cb200c01cc3d.PNG)

2_2
```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 0, b = 0, c = 0;
	int max = 0, min = 0;

	printf("a의 값을 입력하십시오.");
	scanf("%d", &a);
	printf("b의 값을 입력하십시오.");
	scanf("%d", &b);
	printf("c의 값을 입력하십시오.");
	scanf("%d", &c);

	if (a >= b && a >= c)
		max = a;
	else if (b >= c && b >= a)
		max = b;
	else if (c >= a && c >= b)
		max = c;

	if (a <= b && a <= c)
		min = a;
	else if (b <= c && b <= a)
		min = b;
	else if (c <= a && c <= b)
		min = c;

	printf("가장 큰 값은 %d입니다.\n", max);
	printf("가장 작은 값은 %d입니다.\n", min);

	return 0;
}
```

![2_2](https://user-images.githubusercontent.com/127831078/235755110-f268ed83-bb4b-4709-be50-98a95ba6e436.PNG)

2_3
```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 0, b = 0;
	char operator; // 연산자는 문자

	printf("사칙연산 계산기입니다. 계산하고 싶은 두 수를 입력하세요");
	scanf("%d %d", &a, &b);
	printf("연산자를 입력하세요.");
	scanf(" %c", &operator); // \n이 버퍼에 남아 있다
	// 연산자 입력 전에 공백을 추가하여 이전의 엔터 문자를 제거

	if (a < 0 || b < 0)
	{
		printf("음수는 입력할 수 없습니다.");
		return 0;
	}

	switch (operator)
	{
	case '+':
		printf("%d + %d = %d", a, b, a + b);
		break;

	case '-':
		printf("%d - %d = %d", a, b, a - b);
		break;

	case '*':
		printf("%d * %d = %d", a, b, a * b);
		break;

	case '/':
		printf("%d / %d = %d", a, b, a / b);
		break;

	default:
		printf("잘못된 연산자입니다.");
		break;
	}

	return 0;
}
```

![2_3](https://user-images.githubusercontent.com/127831078/235755178-c038778f-9c60-4ff6-baca-372e50a44bab.PNG)
