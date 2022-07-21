#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//SEEK_SET dosyanın başından
//SEEK_CUR cursorun oldugu yerden
//SEEK_END dosyanın sonundan
int main()
{
    FILE *f;
    f = fopen("testdata5.txt","w");
    fputs("Dalyaraklar Ordusu",f); //file a bu stringi yazmaya yazar.
    fseek(f,5,SEEK_SET); //dosyanın basından 5 karakter gidip fputs ile verdigimiz diger stringi yazar.
    fputs("yap",f);
    fseek(f,0,SEEK_END); //dosyanin sonundan hic bosluk birakamadan devamina fputs ile hosmidir yazdirdik.
    fputs("hosmidir",f);
    fseek(f,0,SEEK_CUR); //cursorun en son oldugu yerden itibaren yazar. bir oncesinde seek_END ile sonuna yazdirdik cursor sonra kaldi ve oradan devam ederek yazdi.
    fputs("hostur",f);
    printf("Dosyadaki konum : %ld",ftell(f)); //ftell dosyada cursorun nerede kaldigini gösteriri.
    fclose(f);

    getch();
}