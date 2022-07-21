#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char a[10] = {'1','2','3','4','5','6','7','8','9','a'};
    FILE *fs;

    fs = fopen("testdata4.txt","w"); //testdata4.txt file yazma modunda actık
    fwrite(a,1,10,fs); // a blogundan 1 boyuttan 10 kere fs yaz dedik.
    fclose(fs); //dosya kapama islemi yaptık

    getch();
}