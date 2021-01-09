// Konu: Klavyeden girilen iki sayýnýn büyük olaný (eþitse eþit yazan)
#include<stdio.h>
#include<conio.h>
main()
{
 int a,b;
 printf("1.sayi: "); scanf("%d",&a);
 printf("2.sayi: "); scanf("%d",&b);     
 if(a>b) printf("%d daha buyuktur",a);
 else if(a==b) printf("Sayilar birbirine esittir",b);
 else printf("%d buyuktur",b);
 printf("\n Not: Diger C programlama dersleri icin : www.bilgius.com/category/c-c/ ");
 getch();     
}

/*
 Konu linki:  http://www.bilgius.com/klavyeden-girilen-iki-sayinin-buyuk-olani-esitse-esit-yazan/
 C Programlama kategori linki: http://www.bilgius.com/category/c-c/
		
 Bilgius | Bilgi Tanrýsý
 http://www.bilgius.com
*/
