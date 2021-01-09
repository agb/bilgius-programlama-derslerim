// C'de faktöriyel hesaplama
#include<stdio.h>
#include<conio.h>
int faktoriyel(int x)
 {  int sonuc=1;
	for(x;x>=1;x=x-1) { sonuc=x*sonuc; }
	return(sonuc);		
 }
main() 
{ 	int sayi;
	printf("Faktoriyeli hesaplanacak sayi girin: "); scanf("%d",&sayi);
	printf("Sonuc: %d",faktoriyel(sayi));
	printf("\n Not: Diger C programlama dersleri icin : www.bilgius.com/category/c-c/ ");
	getch();
}

/*
 Konu linki:  http://www.bilgius.com/ders-33-kendisine-gelen-sayinin-faktoriyelini-bulan-program/
 C Programlama kategori linki: http://www.bilgius.com/category/c-c/
		
 Bilgius | Bilgi Tanrýsý
 http://www.bilgius.com
*/
