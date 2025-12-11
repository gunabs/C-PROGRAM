#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* shortestToChar(char* s, char c, int* returnSize) {
    int n = strlen(s);
    *returnSize = n;
    int* ans = (int*)malloc(sizeof(int) * n);

    int pre =-(n*n);   
    for (int i = 0; i < n; i++) 
    {
        if (s[i] == c)
        {
        pre = i;
        }
        ans[i] = i - pre;
    }

    pre =n*n;       
    for (int i = n - 1; i >= 0; i--) 
    {
        if (s[i] == c)
        {
            pre = i;
        }
        if (pre - i < ans[i]) 
        {
            ans[i] = pre - i;
        }
    }

    return ans;
}

int main() {
    char s[] = "loveleetcode";
    char c = 'e';
    int returnSize;
    int* result = shortestToChar(s, c, &returnSize);
    free(result); 
    return 0;
}

