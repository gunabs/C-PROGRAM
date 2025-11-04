#include <stdio.h>

int squareRoot(int n) {
    int start = 1, end = n;
    int ans = 0;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (mid * mid == n) {
            return mid; 
        }

        if (mid * mid < n) {
            start = mid + 1;
            ans = mid; 
        } else {
            end = mid - 1;
        }
    }

    return ans;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", squareRoot(n));
    return 0;
}

