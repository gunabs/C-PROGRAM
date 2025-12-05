#include <stdio.h>

int main() {
    char str[] = "gunacse";
    int size = sizeof(str) / sizeof(str[0]);  
    int pos;

    printf("Enter position to remove (0 to %d): ", size - 2); 
    scanf("%d", &pos);

    if (pos < 0 || pos >= size - 1)
    {
        printf("Invalid position!\n");
        return 0;
    }

    for (int i = 0; i < size - 1; i++) {
        if (i != pos) {
            printf("%c", str[i]);
        }
    }

    printf("\n");

    return 0;
}

