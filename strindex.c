#include <stdio.h>
#include <string.h>

int strrindex(char *str, char c);

int main()
{
    printf("Welcome to the right most occurence of 'a' program!\n");
    printf("Isn't that a mouthful? LMAO.\n");
    printf("Enter a word and I will return the index of the rightmost character 'a': ");
    char buffer[100];
    fgets(buffer, 100, stdin);
    printf("Rightmost occurence of 'a' index: %d", strrindex(buffer, 'a'));
}
int strrindex(char *str, char c)
{
    int i = 0;
    int rightMostOccurrence = -1;

    while (i <= strlen(str))
    {
        if (str[i] == c)
        {
            rightMostOccurrence = i;
            ++i;
        }
        else
        {
            i++;
        }
    }
    return rightMostOccurrence;
}
