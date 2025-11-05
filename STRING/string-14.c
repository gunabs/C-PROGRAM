#include <stdio.h>
#include <string.h>

void removeDuplicates(char *str) {
    if (str == NULL) return;

    int hash[256] = {0}; 
    int read = 0, write = 0;

    while (str[read] != '\0') {
        unsigned char ch = str[read];
        if (!hash[ch]) {
            hash[ch] = 1;
            str[write++] = str[read];
        }
        read++;
    }
    str[write] = '\0';
}

int main() {
    char str[] = "programming";
    printf("Original: %s\n", str);
    removeDuplicates(str);
    printf("After removing duplicates: %s\n", str);
    return 0;
}

