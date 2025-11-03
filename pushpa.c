#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int)); 

    if (arr == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Elements are: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    free(arr); 
    return 0;
}
