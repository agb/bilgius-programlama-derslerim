// C'de dairenin alanýný hesaplamak

#include<stdio.h>
#include<conio.h>
int secim,a,b,r;
float pi;

void alan() 
	{	printf("Pi kac alýnacak?\n\n");
		printf("1 -> Standart deger \n2 -> Ozel deger\n"); scanf("%d",&secim);
		if (secim==1) pi=3.14;
		else {
				printf("Pi degerini giriniz: "); scanf("%f",&pi);
			 }
		
	}
	
main()
{
	printf("Dairenin yari capi nedir: "); scanf("%d",&r);
	alan();
	printf("Sonuc: %f",pi*(r*r));
	printf("\n Not: Diger C programlama dersleri icin : www.bilgius.com/category/c-c/ ");
	getch();
}


/*
 Konu linki:  http://www.bilgius.com/dairenin-alanini-hesaplayan-c-programi/
 C Programlama kategori linki: http://www.bilgius.com/category/c-c/
		
 Bilgius | Bilgi Tanrýsý
 http://www.bilgius.com
*/
