#include <stdio.h>

// Function to swap two numbers using call by value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping (Call by Value): a = %d, b = %d\n", a, b);
}

// Function to swap two numbers using call by reference
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    
    // Input: Get two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    
    // Call by value demonstration
    printf("Before swapping (Call by Value): x = %d, y = %d\n", x, y);
    swapByValue(x, y);
    printf("After function call (Call by Value): x = %d, y = %d\n", x, y);
    
    // Call by reference demonstration
    printf("\nBefore swapping (Call by Reference): x = %d, y = %d\n", x, y);
    swapByReference(&x, &y);
    printf("After swapping (Call by Reference): x = %d, y = %d\n", x, y);
    
    return 0;
}

