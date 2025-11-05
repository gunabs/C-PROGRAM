#include <stdio.h>

int main() {
    int arr[] = {4, 1, 2, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int result = 0;
    for(int i = 0; i < n; i++) {
        result ^= arr[i];
    }
    
    printf("The non-repeating number is: %d", result);
    return 0;
}

