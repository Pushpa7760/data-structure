#include<stdio.h>
int main()
{
    int *ptr ,a;
    ptr=&a;
    *ptr=a;
    printf("enter the value of a\n");
    scanf("%d",&a);
    printf("%p",&a);
    printf(" \nthen the value of a is :%d",a);
}
