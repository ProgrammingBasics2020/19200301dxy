#include<stdio.h>
int is_pow2(int n)
{
	if((n&(n-1))==0)
		return 0;
	else
		return -1;	
}
int main()
{
	int a;
	scanf("%d",&a);	
	printf("%d",is_pow2(a));
	return 0;
}
