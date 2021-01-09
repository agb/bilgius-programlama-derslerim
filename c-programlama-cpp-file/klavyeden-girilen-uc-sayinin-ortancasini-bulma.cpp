// Konu: Klavyeden girilen üç sayýnýn ortancasýný bulma
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("1.sayi: "); scanf("%d",&a);
	printf("2.sayi: "); scanf("%d",&b);
	printf("3.sayi: "); scanf("%d",&c);
	if((c>b && a>b && c>a) || (b>c && a>c && b>a))	  	 printf("A -1.sayi- ORTANCADIR");
	else if ((c>a && b>a && c>b) || (a>c && b>c && a>c)) printf("B -2.sayi- ORTANCADIR");
	else											     printf("C -3.sayi- ORTANCADIR");
	printf("\n Not: Diger C programlama dersleri icin : www.bilgius.com/category/c-c/ ");
	getch();
}


/*
 Konu linki:  http://www.bilgius.com/klavyeden-girilen-uc-sayinin-ortancasini-bulma/
 C Programlama kategori linki: http://www.bilgius.com/category/c-c/
		
 Bilgius | Bilgi Tanrýsý
 http://www.bilgius.com
*/
