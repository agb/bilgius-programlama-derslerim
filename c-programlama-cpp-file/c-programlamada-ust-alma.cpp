// C 'de üst alma
#include<stdio.h>
#include<conio.h>
int ustalma(int taban,int ust) 
	{	int x,sonuc=1;
		for(x=1;x<=ust;x=x+1) 
			{ 
			 sonuc=sonuc*taban;
			}
		return(sonuc);
	}
main() 
	{	int taban,ust;
		printf("Taban: "); scanf("%d",&taban);
		printf("Ust:   "); scanf("%d",&ust);
		printf("Sonuc: %d",ustalma(taban,ust));
		printf("\n Not: Diger C programlama dersleri icin : www.bilgius.com/category/c-c/ ");
		getch();
	}

/*
 Konu linki:  http://www.bilgius.com/tag/cde-ust-alma/
 C Programlama kategori linki: http://www.bilgius.com/category/c-c/
		
 Bilgius | Bilgi Tanrýsý
 http://www.bilgius.com
*/
