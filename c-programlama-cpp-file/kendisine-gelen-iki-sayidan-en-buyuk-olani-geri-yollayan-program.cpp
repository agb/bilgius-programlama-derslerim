// Kendisine gelen 2 say�dan en b�y�k olan geri yollayan program
#include<stdio.h>
#include<conio.h>
int buyuk(int x, int y)
 { 
	if(x>y)  return(x);
	else 	 return(y);		
 }
main() 
	{	int a,b,sonuc;
		printf("1.sayi: "); scanf("%d",&a);
		printf("2.sayi: "); scanf("%d",&b);
 		sonuc=buyuk(a,b); printf("\nBuyuk olan: %d",sonuc);
		getch();
		printf("\n Not: Diger C programlama dersleri icin : www.bilgius.com/category/c-c/ ");	
	}
	
/*
 Konu linki:  http://www.bilgius.com/ders-32-kendisine-gelen-2-sayidan-en-buyuk-olani-bulan-program/
 C Programlama kategori linki: http://www.bilgius.com/category/c-c/
		
 Bilgius | Bilgi Tanr�s�
 http://www.bilgius.com
*/
