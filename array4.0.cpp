#include <stdio.h>

int main() {
    int n, i, key, found = 0;
    
    // Input: Get the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input: Get the array elements
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input: Get the element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);
    
    // Perform linear search
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Element %d found at index %d\n", key, i);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Element %d not found in the array.\n", key);
    }
    
    return 0;
}

