#include <stdio.h>

int search(int arr[], int n, int k) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

      
        if (arr[mid] == k)
            return mid;

        
        if (arr[low] <= arr[mid]) {
            
            if (k >= arr[low] && k < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        } 
        else {
           
            if (k > arr[mid] && k <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {4,5,6,7,0,1,2,3};
    int k = 0;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = search(arr, n, k);

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}

