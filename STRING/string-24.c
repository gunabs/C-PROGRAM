//write a program that takes a string input from the user . if the vowels in the input string appear alone they should be removed . however if the vowels appear consecutively they should be retiined. //


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char c) {
    c = tolower(c);
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}
int main() {
    char str[100];
    char result[100];
    int j = 0;

    printf("Enter a string: ");
    scanf("%99s", str);

    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (isVowel(str[i])) {
         
            int prev_is_vowel = (i > 0 && isVowel(str[i-1]));
            
            int next_is_vowel = (i < len-1 && isVowel(str[i+1]));

            if (prev_is_vowel || next_is_vowel) {
                result[j++] = str[i];  
            }
        } else {
            result[j++] = str[i];      
        }
    }

    result[j] = '\0';  

    printf("Output: %s\n", result);

    return 0;
}

