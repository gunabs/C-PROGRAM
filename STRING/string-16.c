#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char* s) {
    int n = strlen(s);
    int l = 0, r = 0;
    int map[256];
    int maxlen = 0;

    
    for (int i = 0; i < 256; i++)
        map[i] = -1;

    while (r < n) {
        if (map[(unsigned char)s[r]] != -1 && map[(unsigned char)s[r]] >= l) {
            l = map[(unsigned char)s[r]] + 1;
        }

        if (maxlen < (r - l + 1)) {
            maxlen = r - l + 1;
        }

        map[(unsigned char)s[r]] = r;
        r++;
    }

    return maxlen;
}

int main() {
    char s1[] = "abcabcbb";
    printf("%s  %d\n", s1, lengthOfLongestSubstring(s1)); 
   

    return 0;
}

