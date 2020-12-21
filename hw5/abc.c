#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c, d, e;
	scanf_s("%d%d%d", &a, &b, &c);
	d = pow(a, b);
	e = d % c;
	printf("%d", e);
	return 0;
}