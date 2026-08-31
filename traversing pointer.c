#include <stdio.h>

int main() {
    int nums = {10, 20, 30}; // Step 0: Make an array
    int *p = nums;           // Step 1: Point to the start

    for (int i = 0; i < 3; i++) {
        printf("%d\n", *p);  // Step 2: Read the value
        p++;                 // Step 3: Move to the next one
    }

    return 0;
}