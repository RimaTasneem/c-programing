#include <stdio.h>

// Define a structure for distance
struct Distance {
    int feet;
};

int main() {
    struct Distance d1, d2, sum;

    printf("Enter first distance in feet: ");
    scanf("%d", &d1.feet);
    printf("Enter second distance in feet: ");
    scanf("%d", &d2.feet);

    sum.feet = d1.feet + d2.feet;

    
    printf("Total distance = %d feet\n", sum.feet);

    return 0;
}
