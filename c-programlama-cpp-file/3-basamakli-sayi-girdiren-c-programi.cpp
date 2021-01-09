// 3 basamaklý sayý girdiren program (3 basamaklý deðilse tekrar girdiren)

#include<stdio.h>
#include<conio.h>
main()
{
  int a;
  do {
     printf("3 basamakli sayi girin: "); scanf("%d",&a);
     if( (a>99) && (a<1000)) break;
     else printf("3 basamakli sayi girmediniz! \n");
     }
  while(0==0);
  // veya while((a<99) || (a>1000));
  printf("Basarili --> Devam ediyor...");
  printf("\n Not: Diger C programlama dersleri icin : www.bilgius.com/category/c-c/ ");
  getche();
}

/*
 Konu linki:  http://www.bilgius.com/3-basamakli-sayi-girdiren-program-3-basamakli-degilse-tekrar-girdiren/
 C Programlama kategori linki: http://www.bilgius.com/category/c-c/
		
 Bilgius | Bilgi Tanrýsý
 http://www.bilgius.com
*/
