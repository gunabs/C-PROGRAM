#include <stdio.h>
#include <limits.h>
int search(int arr[], int n, int k) {
    int low = 0, high = n - 1;
    
    while (low <= high) {
        int mid = (low + high) / 2;
       
       if(arr[mid]==k)
       {
           return 1;
       }
        if (arr[low] < arr[mid]) {
            if(k>=arr[low]&&k<arr[mid])
               high=mid-1;
             else
             {
                low = mid + 1; 
             }
        } 
        else {
             if(k>arr[mid]&&k<=arr[high])
                low=mid+1;
             else
             {
                 high=mid-1;
                 
             }
    }
    }
    return 0;
}

int main() {
    int arr[] = {7, 8, 1, 2, 3, 3, 3, 4, 5, 6};
    int k = 19;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = search(arr, n, k);
    printf("%d",result);
    

    return 0;
}

