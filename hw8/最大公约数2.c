#include<stdio.h>
int GCD_iterative(int m, int n)
{
	int temp;
	if(m<n)
	{
		temp=n;
		n=m;
		m=temp;	
	}
	if(m%n==0) 
		return n;
	else 
		return GCD_iterative(n,m%n); 
}
int main()
{
	int m,n;
	printf("������������:\n");
    scanf("%d,%d",&m,&n);
    printf("%d��%d�����Լ����:\n",m,n);
	printf("%d\n",GCD_iterative(m,n));
	return 0;
}
