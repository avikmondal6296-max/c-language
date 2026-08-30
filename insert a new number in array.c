#include <stdio.h>

int main() {
    int arr[6] = {10, 20, 40, 50};
    int n = 4;
    int pos = 2; 

    
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[pos] = 30; 
    n++;          

    
    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}