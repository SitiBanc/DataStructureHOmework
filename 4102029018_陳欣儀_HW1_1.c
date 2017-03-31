#include <stdio.h>
#include <stdlib.h>
//p1-8定義的巨集
#define MALLOC(p,s)\
    if((p=malloc(s))==NULL)\
    {\
        fprintf(stderr,"Insufficient memory！");\
        exit(EXIT_FAILURE);\
    }
//程式2.3
int** make2dArray(int rows, int cols)
{
   int **x, i,j;
   //取得列指標*x的記憶體
   MALLOC(x,rows*sizeof(*x));
   //取得欄指標**x的記憶體
   for(i = 0; i < rows; i++)
        MALLOC(x[i],cols*sizeof(**x));
    //陣列初始化
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
    //印出陣列，4欄3列
    for (i = 0; i<3; i++)     //共3列
    {
        for(j=0;j<4;j++)     //1列有4欄，即4個值
            printf("%d \t",aryptr[i][j]);
        printf("\n");
    }
    printf("\n");
    system("PAUSE");
    return 0;
}
