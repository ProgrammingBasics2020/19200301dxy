#include <stdio.h>
int is_int_pal(int a);

int main()
{   
	int a;
	printf("输入一个数字：\n");
    scanf("%d",&a);
    
    if(is_int_pal(a)==0)
        printf("Yes\n");
    if(is_int_pal(a)==-1)
        printf("No\n");
}

int is_int_pal(int a)
{	

	int b=0,c;
	c=a;

	while(c)
	{
		b*=10;
		b+=c%10;
		c/=10;
	}
    if(a!=b )
    	return -1;
	else
    	return 0;
}
