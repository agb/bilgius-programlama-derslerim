// Konu: Klavyeden girilen iki say�n�n b�y�k olan� (e�itse e�it yazan)
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
		
 Bilgius | Bilgi Tanr�s�
 http://www.bilgius.com
*/
