#include <stdio.h>
#include <stdlib.h>
#define ASIZE 5

int stack[ASIZE]={0};
int top=-1;

void push();
void pop();
void display();
void release();

int main()
{
	int choice;

	printf("�}�C���|���յ{��(�i�x�s��Ƶ���%d)\n", ASIZE+1);

	while(1)
	{
		printf("1) �s�W\t2) �R��\t3) ���\t0) ���� : ");
		scanf("%d",&choice);

		if(!choice)
			break;

		switch(choice)
		{
			case 1:		push();		break;
			case 2:		pop();		break;
			case 3:		display();	break;
			default:	display();	break;
		}
	}
	printf("�M�Ű��|\n");
	release();

	return 0;
}

void push()
{
	int d;

	if(top < ASIZE)
	{
		printf("�п�J���(���) : ");
		scanf("%d",&d);
		top++;
		stack[top] = d;
	}
	else
	{
		printf("���|���F\n");
	}
}


void pop()
{
	if(top >= 0)
	{
		printf("%3d\n",stack[top]);
		top--;
	}
	else
	{
		printf("���|�O�Ū�\n");
	}
}

void display()
{
	int pos = top;
	while(pos >= 0)
	{
		printf("%3d ",stack[pos]);
		pos--;
	}
	printf("\n");
}

void release()
{
	while(top >= 0)
		pop();
}