#include<stdio.h>
#include<stdlib.h>
#define max 10
int s[max], top=-1;
void push()
{
	if(top == max-1)
		printf("stack overflow \n");
	else{
		int x;
		printf("enter the value to push \n");
		scanf("%d",&x);
		s[++top]=x;
	}
}

void pop(){
	if(top < 0)
		printf("stack is empty \n");
	else
		printf("popped item is %d \n", s[top--]);	
}

void display()
{
	if(top < 0)
		printf("stck is empty \n");
	else{
		int i;
		for(i=top; i>=0; i--)
			printf(" \t \t %d \n", s[i]);
	}	
}

int main()
{
	int ch;
	while(1)
	{
		printf(" 1. push \n 2. pop \n 3. display \n 4. exit \n");
		printf("enter your choice : \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
			default :
				printf("wrong choice ! \n");				
		}
	}
	return 0;
}
