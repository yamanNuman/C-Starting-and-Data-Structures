#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

char* my_strcpy(char a[],char b[]);

int main()
{
    char a [] = "Numan";
    char b [] = "Hayrullah";

    //strncpy(a,b,3);
    //strcpy(a,b);
    //printf("%s and %s",a,b);

    my_strcpy(a,b);

    printf("\nKopyalananan string : %s",a);

    getch();
}

char* my_strcpy(char a[],char b[])
{
    int i;
    char gecici;
    printf("%s and %s",a,b); //fonksiyona ne olarak geldigini kontrol etmek icin yazdim.

    while(b[i] != '\0')
    {
        a[i] = b[i];
        i++;
    }
    return a;
}