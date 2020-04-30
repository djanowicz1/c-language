#include <stdio.h>
#include <string.h>
#include <ctype.h>

int i, c = 0, n;
char s;

int checkpalindrome(const char *s, int n)
{
    int i = 0, j = n - 1;
    for (i = 0; i < j + 1; i++, j--)
    {
        while ((s[i] == ' ' || !isalpha(s[i])) && i <= j)
        {
            i = i + 1;
        }
        while ((s[j] == ' ' || !isalpha(s[j])) && i <= j)
        {
            j = j - 1;
        }
        char first = tolower(s[i]);
        char last = tolower(s[j]);
        if (first == ' ' && last == ' ')
        {
            break;
        }

        if (first != last)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    printf("Enter  the string: ");
    gets(&s);
    int n = strlen(&s);

    if (checkpalindrome(&s, n))
        printf("String is palindrome\n");
    else
        printf("String is not palindrome\n");
}
