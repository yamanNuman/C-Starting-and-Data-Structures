#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int id;
    FILE *fp; //file pointeri olusturduk.

    if((fp = fopen("textdata6.txt","w")) == NULL)
    {
        printf("Dosya acma hatasi.");
        exit(1);
    }

    for(id = 0; id < 10; id++)
    {
        fputc('a',fp); //fputc ile fp pointerinin göstedigi file'a 0 dan 10 a kadar a yaz.
    }
    fclose(fp);

    if((fp = fopen("textdata6.txt","r")) == NULL) //file okuma modunda actik
    {
        printf("Dosya acma hatasi");
        exit(1);
    }
    for(id = 0; id < 10; id++)
    {
        printf("%c",fgetc(fp)); //fgetc ile 0 dan 10 kadar 1 kere okuduk.
    }
    fclose(fp);

    getch();

}