#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char *mapping[] = {
    "",     // 0
    "",     // 1
    "abc",  // 2
    "def",  // 3
    "ghi",  // 4
    "jkl",  // 5
    "mno",  // 6
    "pqrs", // 7
    "tuv",  // 8
    "wxyz"  // 9
};

void backtrack(char **result, int *returnSize, char *current, const char *digits, int index) {
    if (digits[index] == '\0') {
        
        result[*returnSize] = strdup(current);
        (*returnSize)++;
        return;
    }

    const char *letters = mapping[digits[index] - '0'];
    for (int i = 0; letters[i] != '\0'; i++) {
        current[index] = letters[i];
        backtrack(result, returnSize, current, digits, index + 1);
    }
}

char **letterCombinations(char *digits, int *returnSize) {
    *returnSize = 0;
    int len = strlen(digits);
    if (len == 0) return NULL;

    
    int maxCombinations = 1;
    for (int i = 0; i < len; i++) {
        int num = digits[i] - '0';
        int lettersCount = strlen(mapping[num]);
        maxCombinations *= lettersCount;
    }

    char **result = (char **)malloc(maxCombinations * sizeof(char *));
    char *current = (char *)malloc((len + 1) * sizeof(char));
    current[len] = '\0';

    backtrack(result, returnSize, current, digits, 0);

    free(current);
    return result;
}

int main() {
    char digits[] = "79";
    int returnSize;
    char **combinations = letterCombinations(digits, &returnSize);

    printf("[");
    for (int i = 0; i < returnSize; i++) {
        printf("\"%s\"", combinations[i]);
        if (i < returnSize - 1) printf(", ");
        free(combinations[i]);
    }
    printf("]\n");

    free(combinations);
    return 0;
}

