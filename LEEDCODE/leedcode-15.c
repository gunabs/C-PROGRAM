
char **commonChars(char **words, int wordsSize, int *returnSize) {
    int minFreq[26];

  
    for (int i = 0; i < 26; i++)
        minFreq[i] = 1000;


    for (int i = 0; i < wordsSize; i++) {
        int freq[26] = {0};
        char *w = words[i];

    
        for (int j = 0; w[j] != '\0'; j++) {
            freq[w[j] - 'a']++;
        }

        for (int k = 0; k < 26; k++) {
            if (freq[k] < minFreq[k])
                minFreq[k] = freq[k];
        }
    }

  
    char **result = (char **)malloc(100 * sizeof(char *));
    int idx = 0;

    for (int i = 0; i < 26; i++) {
        while (minFreq[i] > 0) {
            result[idx] = (char *)malloc(2);  // 1 char + '\0'
            result[idx][0] = i + 'a';
            result[idx][1] = '\0';

            idx++;
            minFreq[i]--;
        }
    }

    *returnSize = idx;
    return result;
}
