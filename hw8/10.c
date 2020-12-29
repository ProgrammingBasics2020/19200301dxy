#include<stdio.h>
#include<string.h>

void reverseString(char* s, int sSize){
	
	int start = 0;  
	int end   = sSize - 1;  
	char tempchar = 0;   
	
	if(sSize == 0 || sSize == 1)
		s = s;
	
	while(start < end){   
	
		tempchar = s[start];
		s[start] = s[end];
		s[end]   = tempchar;
		
		++start;
		--end;
	}
	
	printf("��ת����ַ���Ϊ:%s\r\n", s);
}

int main(void)
{
	int len = 0;
	char s[10] = {0};
	printf("�������ַ���:");
	scanf("%s", s);
	len = strlen(s);

	reverseString(s, len);
	
	return 0;
}
