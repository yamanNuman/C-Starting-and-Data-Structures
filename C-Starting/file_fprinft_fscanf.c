#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int a = 31;
    float b = 31.232131;
    char  c = 'P';

    FILE *fp; //file pointeri olusturuldu.


    fp = fopen("testdata0.txt","w"); //fopen ile file write modunda acıldı.
    fprintf(fp,"Int : %d  Float : %f   Char : %c",a,b,c); //fprintf ile file üzerine yazildi.

    fclose(fp); //dosya kapama islemi yapildi.

    // int b = 5, f;
    // float a = 13.352, c = 6.68,e,g;
    // FILE *outfile,*infile; // 2 tane file pointerimiz tanımladık biriyle yazma islemini yapıcaz digeri ile okuma islemini yapıcaz

    // outfile = fopen("testdata.txt","w"); //fopen ile file actık testdata.txt isminde ve write modunda actik.
    // fprintf(outfile,"%f     %d      %f",a,b,c); // fprintf ile file a degiskenleri yazdirdik.
    // fclose(outfile); //dosya kapatildi.

    // infile = fopen("testdata.txt","r"); //fopen ile bu sefer read modunda actık
    // fscanf(infile,"%f %d %f",&e,&f,&g); //fscanf fonskiyonu ile bu sfer dosyadan okuduk
    // printf("%f %d %f\n",a,b,c); //ekrana bastirma islemini yaptık.
    // printf("%f %d %f\n",e,f,g);
    // fclose(infile); //dosyamizi kapattik.


    // char ch;
    // FILE *fp;
    // fp = fopen("testdata2.txt","r"); //hazir olan file imz vardi onu okuma modunda actik.

    // while(!feof(fp)) //!feof end of string gibidir. Dosyannin sonunda olur bittiği anlamina gelir. !feof görene kadar okuyacak.
    // {
    //     ch = getc(fp); //getc file dan bir karakter alır okur.
    //     printf("\n%c",ch);
    // }
    getch();
}