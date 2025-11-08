#include <stdio.h>
#include <string.h>

char* longestPalindrome(char* s) {

    int n = strlen(s);

    static char str[1000];

    str[0] = '\0'; 

    if (n == 0)
    { 
      return str;
    }

    for (int i = 0; i < n; i++)
    {
        int low = i, high = i;

        
        while (low >= 0 && high < n && s[low] == s[high])
       	{
            low--;
            high++;
        }

        int len = high - low - 1;

        if (strlen(str) < len)
       	{
            strncpy(str, s + low + 1, len);
            str[len] = '\0';
        }

        
        low = i;
        high = i + 1;
        while (low >= 0 && high < n && s[low] == s[high])
       	{
            low--;
            high++;
        }

        int len2 = high - low - 1;

        if (strlen(str) < len2)
       	{
            strncpy(str, s + low + 1, len2);
            str[len2] = '\0';
        }
    }

    return str;
}

int main() {
    char s[] = "babad";
    printf("Longest Palindromic Substring: %s\n", longestPalindrome(s));
    return 0;
}

