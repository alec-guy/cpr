#include <stdio.h>
#include <string.h>
#include <ctype.h>

int *hexToArrayOfNums(char *str);
char *remove0X(char *str, int counter);
int charToInt(char character);

int main()
{
    char buffer[100];
    printf("Enter a hexadecimal string: ");
    fgets(buffer, sizeof(buffer), stdin);
    // remove newline:
    buffer[strcspn(buffer, "\n")] = '\0';
    /*The C library function strcspn()
   calculates the length of the number of characters before the
   1st occurrence of character present in both the string.*/
    char *hexString =
}

int *hexToArrayOfNums(char *str)
{ // initialize variables
    int i;
    int arrayOfNums[strlen(str)];
    // remove optional 0x from string
    str = remove0X(str, 0);
    // adding values to array of nums
    for (i = 0; i <= strlen(str); i++)
    {
        switch (str[i])
        {
        case 'A':
            arrayOfNums[i] = 10;
        case 'B':
            arrayOfNums[i] = 11;
        case 'C':
            arrayOfNums[i] = 12;
        case 'E':
            arrayOfNums[i] = 13;
        case 'F':
            arrayOfNums[i] = 14;
        default:
            arrayOfNums[i] = charToInt(str[i]);
        }
    }
    return arrayOfNums;
}

char *remove0X(char *str, int i)
{
    while (i <= strlen(str))
    {
        if (str[i] == '0')
        {
            if (toLower(str[i + 1]) == 'x')
            {
                remove0X(str, i + 2)
            }
        }
        i++;
    }
    return str;
}
int charToInt(char character)
{
    switch (character)
    {
    case '1':
        return 1;
    case '2':
        return 2;
    case '3':
        return 3;
    case '4':
        return 4;
    case '5':
        return 5;
    case '6':
        return '6';
    case '7':
        return 7;
    case '8':
        return 8;
    case '9':
        return 9;
    default:
        return 0;
    }
}
