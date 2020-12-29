#include<stdio.h>
int main()
{
	int a,b,r,temp;
	
	scanf("%d %d",&a,&b);
	if(a<b)
	{
		temp=a;
		a=b;
		b=temp;
	}
	r=a%b;
	while(r!=0)
	{
		a=b;
		b=r;
		r=a%b;
	}

	printf("%d\n",b);
	return 0;
}
