#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 100

int top=0;
char array1[MAX_SIZE];

void push(char c)
{
    if(top<MAX_SIZE)
    {
        array1[top]=c;
        top++;
    }
    else
    {
        printf("Stack is full¡I");
        exit(EXIT_FAILURE);
    }
}
void pop()
{
    if(top==0)
    {
        printf("Stack is empty¡I");
        exit(EXIT_FAILURE);
    }
    else
    {
        top--;
        printf("%c",array1[top]);
    }
}
int main(int argc,char *argv[])
{
    printf("Enter a line of text¡G");
    gets(array1);
    int length=strlen(array1);
    int i;
    for(i=0;i<length;i++)
        push(array1[i]);
    printf("Pop out¡G");
    for(i=0;i<length;i++)
        pop();
    printf("\n");
    system("PAUSE");
    return 0;
}
