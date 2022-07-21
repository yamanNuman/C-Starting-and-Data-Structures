#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int prime_number(int number);

int main()
{
    int sayi;
    printf("Bir sayi giriniz : ");
    scanf("%d",&sayi);
    printf("En Buyuk Asal Sayi : %d",prime_number(sayi));

    getch();
}

int prime_number(int number)
{
    for(int i = number; i >= 2; i--)
    {
        int asal = 1;

        for(int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                asal = 0;
                break;
            }
        }
        if(asal == 1)
        {
            return i;
        }
    }
}