#include <stdio.h>
#include <time.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    clock_t start, end;
    double time_taken;

    start = clock(); 
    for(int i = 1; i <= n; i++) {         
        for(int j = 1; j <= i; j++) {      
            printf("* ");
        }
        printf("\n");
    }

    end = clock(); 

    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("\nTime taken for nested loops: %f seconds\n", time_taken);

    return 0;
}
