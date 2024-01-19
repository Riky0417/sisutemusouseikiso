#include<stdio.h>//実際には動かないswap関数の例

void swap(int, int); //swap関数のプロトタイプ宣言

int main(void)
{
	int x, y;

	x = 5;
	y = 3;
	swap(x, y);
	printf("x=5d\ty=%d\n", x, y);//印字

	return 0;
}

void swap(int a, int b)
{
	int temp;

	temp = a;//swap実行1
	a = b;  //swap実行2
	b = temp;//swap実行3
}
