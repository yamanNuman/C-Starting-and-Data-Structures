#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

char* my_strcat(char a[],char b[]);

int main()
{
    char a[] = "Numan";
    char b[] = "Busra";

    //strcat(a,b); //b stringini a striginin sonuna ekler.
    //strncat(a,b,3); //b stringinin ilk 3 karakterini a stringinin sonuna ekler.

    //printf("%s and %s",a,b);

    my_strcat(a,b);
    printf("Eklenmis hali : %s",a);

    getch();
}

char* my_strcat(char a[],char b[])
{
    int i = 0;
    int count = 0;
    while(a[i] != '\0')
    {
        i++;
        count++;
    }

    i = 0;
    while(b[i] != '\0')
    {
        a[count] = b[i];
        count++;
        i++;
    }

    return a;
}