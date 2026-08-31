#include <stdio.h>

int main() { 
    int arr[5] = {10, 20, 30, 40}; 
    int n = 4;  
    int pos = 2;
    
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    n--; 
   
    printf("Array after deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}