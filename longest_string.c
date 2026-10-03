#include <stdio.h>
#include <string.h>

int main()
{
    char words[5][50];
    int longest = 0;

    printf("Enter 5 words:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Word %d: ", i + 1);
        scanf("%49s", words[i]);
    }

    for (int i = 1; i < 5; i++)
    {
        if (strlen(words[i]) > strlen(words[longest]))
        {
            longest = i;
        }
    }

    printf("\nLongest word: %s\n", words[longest]);
    printf("Length: %lu\n", strlen(words[longest]));

    return 0;
}
