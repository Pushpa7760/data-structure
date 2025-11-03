#include <stdio.h>
#include <time.h>

int main() {
    int n;
    printf("enter the n \n");
    scanf("%d",&n);
    clock_t start, end; 

    start = clock(); 
    for(int i = n;i>=1; i--) {
        printf("%d\n",i); 
    }

    end = clock(); 

    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC; 
    printf("Time taken = %f seconds\n", time_taken);

    return 0;
}


