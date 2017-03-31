#include <stdio.h>
#include <stdlib.h>
//p1-8�w�q������
#define MALLOC(p,s)\
    if((p=malloc(s))==NULL)\
    {\
        fprintf(stderr,"Insufficient memory�I");\
        exit(EXIT_FAILURE);\
    }
//�{��2.3
int** make2dArray(int rows, int cols)
{
   int **x, i,j;
   //���o�C����*x���O����
   MALLOC(x,rows*sizeof(*x));
   //���o�����**x���O����
   for(i = 0; i < rows; i++)
        MALLOC(x[i],cols*sizeof(**x));
    //�}�C��l��
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
            x[i][j]=0;
    }
	return x;
}

int main(int argc,char *argv[])
{
    int i,j;
    int **aryptr;
    aryptr = make2dArray(3,4);
    //�L�X�}�C�A4��3�C
    for (i = 0; i<3; i++)     //�@3�C
    {
        for(j=0;j<4;j++)     //1�C��4��A�Y4�ӭ�
            printf("%d \t",aryptr[i][j]);
        printf("\n");
    }
    printf("\n");
    system("PAUSE");
    return 0;
}
