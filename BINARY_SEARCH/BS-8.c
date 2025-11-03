#include <stdio.h>
#include <limits.h>
int search(int arr[], int n, int k) {
    int low = 0, high = n - 1;
    int ans =INT_MAX;
    while (low <= high) {
        int mid = (low + high) / 2;
       
       if(ans>arr[mid])
       {
           ans=arr[mid];
       }
        if (arr[high] < arr[mid]) {
            
                low = mid + 1;
        } 
        else {
           
                high = mid - 1;
        }
    }
    return ans;
}

int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int k = 0;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = search(arr, n, k);
    printf("%d",result);
    

    return 0;
}

