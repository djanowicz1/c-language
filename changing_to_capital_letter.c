//changing all letters to capital letters
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int i, n;
char s;

unsigned fun(char *s, int n){

    int a;

    for (i = 0; i < n; i++)
    {
        a = s[i];
        s[i] = toupper(a);

    }     
    return 0; 
}

int main(){
    printf("Enter  the string: ");
    gets(&s);
    int n = strlen(&s);
    fun(&s, n);
    printf("%s", &s);

    return 0;
}
