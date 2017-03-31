#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char *argv[])
{
    char str[50];
    char pat[10];
    int slength,plength,i=0,j=0,flag=0;

    printf("Please input your string:");
    gets(str);
    slength=strlen(str);
    printf("Please input your pattern:");
    gets(pat);
    plength=strlen(pat);

    //循序比對
    while(i<slength)
    {
        if(str[i]==pat[0])
        {
            flag++;     //一個字元相符，flag+1
            for(j=1;j<=plength;j++)
            {
                i++;
                if(str[i]==pat[j]&&flag<plength)
                    flag++;     //又一字元相符，flag再+1
                else if(flag==plength)     //當flag=plength表示已全數相符
                {
                    printf("Pattern found!\n");
                    i=slength;     //跳出while迴圈用
                    break;     //跳出for迴圈用
                }
                else     //一有不相符，flag歸0、跳出for迴圈
                {
                    flag=0;
                    break;
                }
            }
        }
        else
        {
            i++;
        }
    }

    if(flag!=plength)
        printf("ERROR 404! Pattern not found!\n");

    system("PAUSE");
    return 0;
}
