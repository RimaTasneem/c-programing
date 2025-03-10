#include <stdio.h>

// Function to calculate the sum of squares of first N natural numbers
int sum_of_squares(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }
    return sum;
}

int main() {
    int n;
    
    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // Function call and displaying result
    printf("Sum of squares of first %d natural numbers is: %d\n", n, sum_of_squares(n));
    
    return 0;
}


