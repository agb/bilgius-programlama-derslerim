// C'de Kombinasyon hesaplama
#include<stdio.h>
#include<conio.h>
int faktoriyel(int x)
 {
    int sonuc=1;
    for(x;x>=1;x=x-1) { sonuc=x*sonuc; }
    return(sonuc);
 }
main()
{	int n,r,islem;
	printf("n degerini giriniz: "); scanf("%d",&n);
	printf("r degerini giriniz: "); scanf("%d",&r);
	islem=faktoriyel(n)/(faktoriyel(r)*faktoriyel(n-r));
	printf("Sonuc %d",islem);
	printf("\n Not: Diger C programlama dersleri icin : www.bilgius.com/category/c-c/ ");
	getch();
}

/*
 Konu linki:  http://www.bilgius.com/cde-kombinasyon-hesaplama/
 C Programlama kategori linki: http://www.bilgius.com/category/c-c/
		
 Bilgius | Bilgi Tanrýsý
 http://www.bilgius.com
*/
