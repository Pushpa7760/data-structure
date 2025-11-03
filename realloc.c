#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *ptr, i, newSize;

    printf("Enter initial number of elements: ");
    scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &ptr[i]);

    printf("\nElements before resizing: ");
    for (i = 0; i < n; i++)
        printf("%d ", ptr[i]);

    printf("\n\nEnter new size (greater than %d): ", n);
    scanf("%d", &newSize);

    ptr = (int*) realloc(ptr, newSize * sizeof(int));

    if (ptr == NULL) {
        printf("Memory not reallocated.\n");
        return 1;
    }

    printf("Enter %d new elements:\n", newSize - n);
    for (i = n; i < newSize; i++)
        scanf("%d", &ptr[i]);

    printf("\nAll elements after resizing: ");
    for (i = 0; i < newSize; i++)
        printf("%d ", ptr[i]);

    free(ptr);
    return 0;
}
