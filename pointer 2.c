#include <stdio.h>

int main() {
    int a, b;
    int *ptr1, *ptr2;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    ptr1 = &a;
    ptr2 = &b;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    int temp;
    temp = *ptr1;   
    *ptr1 = *ptr2;  
    *ptr2 = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
