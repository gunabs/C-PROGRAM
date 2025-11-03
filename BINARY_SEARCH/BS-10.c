#include <stdio.h>

int singleNonDuplicate(int arr[], int n) {
    int low = 0, high = n - 1;

    while (low < high) {
        int mid = (low + high) / 2;
        if (mid % 2 == 1)
            mid--;

        if (arr[mid] == arr[mid + 1]) {
            low = mid + 2;
        }
        else {

            high = mid;
        }
    }

    return arr[low]; 

int main() {
    int arr[] = {1,1,2,2,3,3,4,5,5,6,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = singleNonDuplicate(arr, n);
    printf("Single Element: %d\n", result);

    return 0;
}

