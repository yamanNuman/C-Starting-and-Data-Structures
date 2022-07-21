#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int my_strcmp(char *a,char *b);

int main(void)
{
    char *a = "Numan";
    char *b = "Yaman";


    if(my_strcmp(a,b) == 0)
    {
        printf("Karisilastirilan stringler birbirine esittir.");
    }
    else{
        printf("Karsilastirilan stringler birbirlerinden farklidir.");
    }
    
    getch();
}

int my_strcmp(char *a,char *b)
{
    int i = 0;
    int count = 0;
    int uzunluk1 = 0;
    int uzunluk2 = 0;
    printf("%c and %c\n",*a,*b);

    while(a[i] != '\0' && b[i] != '\0')
    {
        i++;
        if(a[i] == b[i])
        {
            count == 0;
        }
        else
        {
            count++;
        }
    }
}