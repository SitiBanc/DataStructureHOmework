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

    //�`�Ǥ��
    while(i<slength)
    {
        if(str[i]==pat[0])
        {
            flag++;     //�@�Ӧr���۲šAflag+1
            for(j=1;j<=plength;j++)
            {
                i++;
                if(str[i]==pat[j]&&flag<plength)
                    flag++;     //�S�@�r���۲šAflag�A+1
                else if(flag==plength)     //��flag=plength��ܤw���Ƭ۲�
                {
                    printf("Pattern found!\n");
                    i=slength;     //���Xwhile�j���
                    break;     //���Xfor�j���
                }
                else     //�@�����۲šAflag�k0�B���Xfor�j��
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
