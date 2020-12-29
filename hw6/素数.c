#include <stdio.h>
#include<math.h>
int prime(int n)
{
	int i;
	for (i=2; i<=sqrt(n); i++)
		if (n%i==0)
			return 0;
	return 1;
}

int main()
{
	int i,m=0;
	for (i=2;;i++)
		if (prime(i)==1)
		{
			m++;
			if ((m>=100)&(m<=1000))
				printf("%d\n", i);
		}
	printf("\n");
}
