#include<stdio.h>
int fac_bit_count(int n)
{
	int i, k = 1, l = 0;
	for (i = n; i > 1; i--)
		k = k * i;
	for (; k >= 1; k = k / 10)
		l++;
	return l;
}

int main()
{
	int n;
	scanf_s("%d", &n);
	printf("%d",fac_bit_count(n));
	return 0;
}
