#include <stdio.h>

int main(void) {
    int p = 10;
    int *ptr,**ptr2 ;
    ptr=&p;
    ptr2=&ptr;

    printf("p ���ȡG%d\n", p);
    printf("p ���O�����m:%X\n\n", &p);

    printf("*ptr �ѷӪ���:%d\n", *ptr);
    printf("ptr �x�s����}��:%X\n", ptr);
    printf("ptr ���O�����m:%X\n\n", &ptr);

    printf("**ptr2 �ѷӪ���:%d\n", **ptr2);
    printf("*ptr2 �x�s����}��:%X\n", *ptr2);
    printf("ptr2 �x�s����}��:%X\n", ptr2);
    printf("ptr2 ���O�����m:%X\n\n", &ptr2);

    puts("��z(���x�s�F�֡H)�G");
    printf("&p = %X\tptr = %X\n", &p, ptr);
    printf("&ptr = %X\tptr2 = %X\n", &ptr, ptr2);
    printf("&ptr2 = %X\n",&ptr2);

    return 0;
}
