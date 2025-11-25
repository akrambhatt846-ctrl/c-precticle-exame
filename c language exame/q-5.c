#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; 
    int values[] = {100, 81, 64, 49, 36}; 
    
    printf("Pattern:\n");
    for(i = 0; i < rows; i++) {
       
        for(j = 0; j <= i; j++) {
            printf("%d ", values[i]);
        }
        printf("\n");
    }
    
    return 0;

}
