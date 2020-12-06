#include<stdio.h>
int main()
{
	int n = 1;
	int flag ;
	
if((n&1)==1) 
{
    flag=1;
	printf("%d\n",flag);
}
else
{
	flag=0;
	printf("%d\n",flag);
}
	return 0; 
} 
