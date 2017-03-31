#include <stdio.h>

int main(void) {
    int p = 10;
    int *ptr,**ptr2 ;
    ptr=&p;
    ptr2=&ptr;

    printf("p 的值：%d\n", p);
    printf("p 的記憶體位置:%X\n\n", &p);

    printf("*ptr 參照的值:%d\n", *ptr);
    printf("ptr 儲存的位址值:%X\n", ptr);
    printf("ptr 的記憶體位置:%X\n\n", &ptr);

    printf("**ptr2 參照的值:%d\n", **ptr2);
    printf("*ptr2 儲存的位址值:%X\n", *ptr2);
    printf("ptr2 儲存的位址值:%X\n", ptr2);
    printf("ptr2 的記憶體位置:%X\n\n", &ptr2);

    puts("整理(誰儲存了誰？)：");
    printf("&p = %X\tptr = %X\n", &p, ptr);
    printf("&ptr = %X\tptr2 = %X\n", &ptr, ptr2);
    printf("&ptr2 = %X\n",&ptr2);

    return 0;
}
