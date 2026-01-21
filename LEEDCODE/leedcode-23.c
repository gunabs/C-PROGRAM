#include <stdio.h>
#include <string.h>

int minDeletionSize(char **strs, int strsSize) {
    int count = 0;
    int len = strlen(strs[0]);  
    for (int col = 0; col < len; col++) {      
        for (int row = 0; row < strsSize - 1; row++) {
            if (strs[row][col] > strs[row + 1][col]) {
                count++;        
                break;         
            }
        }
    }
    return count;
}
int main() {
    char *strs[] = {"cba", "daf", "ghi"};
    int size = 3;

    printf("%d\n", minDeletionSize(strs, size));
    return 0;
}

