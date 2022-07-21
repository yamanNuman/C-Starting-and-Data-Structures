#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main()
{
    char a[] = "Numan Yaman Gelmis Hosgelmis.";
    char b[10];
    
    // strrev(a); //stringi ters cevirir.
    // puts(a);
    
    while(1)
    {
    printf("\nEn fazla 10 karakterlik bir string giriniz : "); gets(b);
    if(strstr(a,b)) // b stringi a stringinin icinde var mı diye kontrol etmeye yarar.
    {
        printf("%s stringi %s stringinin icinde gecmektedir.",b,a);
    }

    else{
        printf("%s stringi %s stringinin icinde bulunamamaktadir.",b,a);
    }

    }
    getch();

}