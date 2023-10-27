#include <stdio.h>

int main(void)
{
	int a;
	printf("好きな数字を入れてください.偶数か奇数か判断します\n");
	scanf_s("%d", &a);

	if (a % 2 == 0)
	{
		printf("これは偶数です");
	}
	else
	{
		printf("これは奇数です");
	}
	return 0;
}
