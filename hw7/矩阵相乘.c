#include <stdio.h>
#define ROW 2 
#define COL 2 
int main()
{
	int matrixA[ROW][COL],	matrixB[ROW][COL],matrixC[ROW][COL];
	int i,j;
	printf("���������A�е�Ԫ��:\n");
		for(i=0;i<ROW;i++)
			for(j=0;j<COL;j++)
				scanf("%d",&matrixA[i][j]);
	printf("���������B�е�Ԫ��:\n");
		for(i=0;i<ROW;i++)
			for(j=0;j<COL;j++)
				scanf("%d",&matrixB[i][j]);

    printf("����C�е�Ԫ�أ�"); 
	for(i=0;i<ROW;i++)			
		for(j=0;j<COL;j++)
		{
          	matrixC[i][j]=matrixA[i][j]*matrixB[i][j];	
		}
	for(i=0;i<ROW;i++)			
	{
		for(j=0;j<COL;j++)
			printf("%d ",matrixC[i][j]);
			printf("\n");
	}	
 
	return 0;
}
