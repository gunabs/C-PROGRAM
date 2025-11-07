
#include <stdio.h>
#include <math.h>


int main() {
    
    int arr[] = { 1, 2, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
  

    int subsetCount = pow(2, n);

    for(int mask = 0; mask < subsetCount; mask++) {
        int sum = 0;

        
        for(int j = 0; j < n; j++) {
            if(mask & (1 << j)) {
                sum += arr[j];
            }
        }

        printf("%d ", sum);
    }

   

    return 0;
}
