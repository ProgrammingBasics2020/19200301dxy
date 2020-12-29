#include<stdio.h>
int count1_in_bin(int n)
{
	int count=0;
	while(n!=0)
	{
        n = ((n-1)&n);
        count++;
    }
	return count;	
}
int main()
{
	int a;
	scanf("%d",&a);	
	printf("%d",count1_in_bin(a));
	return 0;
}
