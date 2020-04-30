#include<stdio.h>

unsigned slen(char s[]){   //funkcja do wyznaczania dlugosci napisu
    int i;
    for ( i = 0; s[i] != 0; i++);

    return i;
};

int main(){

char s3[] = "Ala ma 2 koty & 3 psy";

printf("%ld\n", sizeof(s3) );


return 0;
}
