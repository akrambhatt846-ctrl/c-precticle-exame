#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    int *ptr = arr;
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }
    
    printf("Original array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    
    printf("Squares of elements: ");
    for(i = 0; i < n; i++) {
        printf("%d ", (*(ptr + i)) * (*(ptr + i)));
    }
    printf("\n");
    
    return 0;
}