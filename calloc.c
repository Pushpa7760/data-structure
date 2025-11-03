#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, sum = 0;
    int *ptr;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    ptr = (int*) calloc(n, sizeof(int));

    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
        sum += ptr[i];
    }

    // Display result
    printf("Sum = %d\n", sum);
    free(ptr);

    return 0;
}
