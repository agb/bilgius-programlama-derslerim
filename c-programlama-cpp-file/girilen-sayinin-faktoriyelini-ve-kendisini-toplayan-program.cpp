// C programlamada girilen say�n�n fakt�riyelini ve kendisini toplayan program
#include<stdio.h>
int faktoriyel(int x)
 {
    int sonuc=1;
    for(x;x>=1;x=x-1) { sonuc=x*sonuc; }
    return(sonuc);
 } 
main()
 {
	int n,toplam;
	printf("Say� gir: "); scanf("%d",&n);
	toplam=faktoriyel(n)+n;
	printf("Sonuc %d",toplam);
	printf("\n Not: Diger C programlama dersleri icin : www.bilgius.com/category/c-c/ ");
	return 0;
 }
 
 /*
 Konu linki:  http://www.bilgius.com/girilen-sayinin-faktoriyelini-alarak-cikan-sonucla-sayiyi-toplayan-program
 C Programlama kategori linki: http://www.bilgius.com/category/c-c/
		
 Bilgius | Bilgi Tanr�s�
 http://www.bilgius.com
*/
