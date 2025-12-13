#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    int score;
    int index;
} Athlete;


int compare(const void *a, const void *b)
{
    return ((Athlete *)b)->score - ((Athlete *)a)->score;
}
char** findRelativeRanks(int* score, int scoreSize, int* returnSize) 
{
    *returnSize = scoreSize;

    Athlete* athletes = (Athlete*)malloc(scoreSize * sizeof(Athlete));
    char** result = (char**)malloc(scoreSize * sizeof(char*));

    for (int i = 0; i < scoreSize; i++)
    {
        athletes[i].score = score[i];
        athletes[i].index = i;
    }

    qsort(athletes, scoreSize, sizeof(Athlete), compare);

    for (int i = 0; i < scoreSize; i++)
    {
        int idx = athletes[i].index;

        if (i == 0)
        {
            result[idx] = strdup("Gold Medal");
        } 
        else if (i == 1) 
        {
            result[idx] = strdup("Silver Medal");
        }
        else if (i == 2) 
        {
            result[idx] = strdup("Bronze Medal");
        }
        else 
        {
            result[idx] = (char*)malloc(12);
            sprintf(result[idx], "%d", i + 1);
        }
    }

    free(athletes);
    return result;
}

int main()
{
    int score[] = {10, 3, 8, 9, 4};
    int n = sizeof(score) / sizeof(score[0]);
    int returnSize;

    char** ranks = findRelativeRanks(score, n, &returnSize);

    free(ranks);        
    return 0;
}
