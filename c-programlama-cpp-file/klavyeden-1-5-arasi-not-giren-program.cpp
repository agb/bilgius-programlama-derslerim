// Klavyeden girilen notun derecesini g�steren program

#include<stdio.h>
#include<conio.h>
main()
{
 /*
 2   ba�ar�s�z
 4   ge�er
 6   orta
 8   iyi
 10   pekiyi
 */
 printf("Notu gir: ");     
 int secim; scanf("%d",&secim);
 switch(secim)
 {
 case 1:
 case 2: printf("Basarisiz"); break;
 case 3:
 case 4: printf("Gecer"); break;
 case 5:
 case 6: printf("Orta"); break;
 case 7:
 case 8: printf("�yi"); break;
 case 9:
 case 10: printf("Pekiyi"); break;
 }     
 getch();
 printf("\n Not: Diger C programlama dersleri icin : www.bilgius.com/category/c-c/ ");
}

/*
 Konu linki:  http://www.bilgius.com/klavyeden-1-5-arasi-not-gir-switch-yapisi-ornegi/
 C Programlama kategori linki: http://www.bilgius.com/category/c-c/
		
 Bilgius | Bilgi Tanr�s�
 http://www.bilgius.com
*/
