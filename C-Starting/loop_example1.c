#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
00100       Kare matriste ortanca olanlara 1 geri kalanlara 0 verme.
00100
11111
00100
00000
*/

int main()
{
  int n;
  printf("Kare matrix boyutunu giriniz : ");
  scanf("%d",&n);
  printf("\n");

  for(int i = 0; i < n; i++)
  {
      for(int j = 0; j < n; j++)
      {
          if((i == n / 2 || j == n / 2) || (n % 2 == 0 && (j == (n/2)-1 || i == (n / 2) - 1)))
          {
              printf("1");
          }
          else
          {
              printf("0");
          }
      }
      printf("\n");
  }

  getch();
}