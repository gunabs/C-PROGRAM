#include <stdio.h>
#include <string.h>

char* toHex(int num) {
    static char hex[9];  
    char hexChars[] = "0123456789abcdef";
    unsigned int n = num;  
    int i = 0;

    if (n == 0) {
        strcpy(hex, "0");
        return hex;
    }
    while (n > 0) {
        int remainder = n % 16;
        hex[i++] = hexChars[remainder];
        n /= 16;
    }

    hex[i] = '\0';

  
    for (int j = 0; j < i / 2; j++) {
        char temp = hex[j];
        hex[j] = hex[i - j - 1];
        hex[i - j - 1] = temp;
    }

    return hex;
}

int main() {
    int num1 = 26;
    char* result=toHex(num1);
    
    printf("%s",result);
    return 0;
}

