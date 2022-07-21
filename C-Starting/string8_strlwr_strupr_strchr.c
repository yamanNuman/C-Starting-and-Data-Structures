#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main()
{
    char a[] = "FUCK THE WORLD!";
    strlwr(a); //büyük karakterleri kucultur
    char b[] = "fuck the world!";
    strupr(b); //kucuk karakterleri buyultur.

    puts(a);
    puts(b);

    getch();
}