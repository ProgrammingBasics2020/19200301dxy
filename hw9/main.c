#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"
int main()
{
	struct stack s={NULL,0};
	char *a;
	int i;
	for(i=0;i<7;i++)
	{
		a=(char*)calloc(100,sizeof(char));
		gets(a);
		push(a,&s);
	}
	Sort(&s);
	printf("排序后结果为:\n");
	for(i=0;i<7;i++)
	{
		puts(top(s));
		pop(&s);
	}
}
void push(char *pstr, struct stack *s)
{
	struct node *p;
	p=(struct node*)malloc(sizeof(struct node));
	p->pstr=pstr;
	p->next=s->pNode;
	s->pNode=p;
	s->size++;
}
void pop(struct stack *s)
{
	s->pNode=s->pNode->next;
	s->size--;
}
int empty(struct stack s)
{
	return s.size<=0?1:0;
}
char * top(struct stack s)
{
	return s.pNode->pstr;
}
void Sort(struct stack *s)
{
	int i,j;
	char *temp;
	for(i=0;i<s->size-1;i++)
	{
		struct node *p=s->pNode;
		for(j=0;j<s->size-i-1;j++)
		{
			struct node *m=p,*n=p->next;
			if(strlen(m->pstr)<strlen(n->pstr))
			{
				temp=(char*)calloc(100,sizeof(char));
				strcpy(temp,m->pstr);
				strcpy(m->pstr,n->pstr);
				strcpy(n->pstr,temp);
			}
			p=p->next;
		}
		
	}
}
