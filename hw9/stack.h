struct node
{
	char *pstr;
	struct node *next;
};
struct stack
{
	struct node *pNode;
	int size;
};
void push(char *pstr, struct stack *s);
void pop(struct stack *s);
int empty(struct stack s);
char * top(struct stack s);
void Sort(struct stack *s);