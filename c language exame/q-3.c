#include <stdio.h>

int reverseNumber(int num) {
    int reversed = 0;
    
    if(num < 100 || num > 999) {
        printf("Error: Please enter a 3-digit number.\n");
        return -1;
    }
    
    // Extract digits and reverse
    int hundreds = num / 100;
    int tens = (num % 100) / 10;
    int units = num % 10;
    
    reversed = (units * 100) + (tens * 10) + hundreds;
    
    return reversed;
}

int main() {
    int number, reversed;
    
    printf("Enter a 3-digit number: ");
    scanf("%d", &number);
    
    reversed = reverseNumber(number);
    
    if(reversed != -1) {
        printf("Original number: %d\n", number);
        printf("Reversed number: %d\n", reversed);
    }
    
    return 0;
}