#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    FILE *f;
    char buffer[11];
    if (f = fopen("testdata3.txt","r"))
    {
        fread(buffer,1,10,f); //bufferın icinde 1 karakterden 10 kere oku demek istiyor.
        buffer[10] = 0;
        fclose(f);
        printf("Dosyanin ilk 10 karakteri \n%s\n",buffer);
    }
    else
    {
        printf("Dosya Okunamadi.");
    }
    getch();
}