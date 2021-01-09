// Konu: Klavyeden girilen üç sayýdan en büyüðü
#include<stdio.h>
#include<conio.h>
main()
{
 int a,b,c;
 printf("1.sayi: "); scanf("%d",&a);
 printf("2.sayi: "); scanf("%d",&b);
 printf("3.sayi: "); scanf("%d",&c);
 if((a>b) && (a>c)) printf("1.sayi buyuktur");
 else {
      if(b>c) printf("2.sayi buyuktur"); else printf("3.sayi buyuktur");
      }
 printf("\n Not: Diger C programlama dersleri icin : www.bilgius.com/category/c-c/ ");
 getch();     
}

/*
 Konu linki:  http://www.bilgius.com/klavyeden-girilen-uc-sayidan-en-buyugu/
 C Programlama kategori linki: http://www.bilgius.com/category/c-c/
		
 Bilgius | Bilgi Tanrýsý
 http://www.bilgius.com
*/
