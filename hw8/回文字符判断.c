#include<stdio.h>
int main(){
	int i,k,j;
	char line[80];
	
	k = 0;
	
	while((line[k] = getchar()) != '\n'){//读入字符串，以回车符结尾
		k++;//统计输入字符串的长度
	}
	
	i = 0;
	j = k;//保存k值
	
	k = k-1;//k = k-1的意思是，数组的下标最大是k-1
	
	while(i < k){
		if(line[i] != line[k])//字符串比较判断
			break;
		i++;
		k--;
	}
	
	for(int i = 0;i < j;i++)
	{
		printf("%c",line[i]);
	}
	printf("\n");
	
	if(i >= k){打印判断结果
		printf("Yes\n");
	} else{
		printf("No\n");
	}
	
	return 0;
}
