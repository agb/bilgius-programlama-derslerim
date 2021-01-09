// Taban ve Sonuçu verince Üstü gösteren program

#include<stdio.h>
#include<conio.h>
main()
{
	int taban,sonuc,sonuc2=1,i=0,ust=1;
	printf("Tabani gir: "); scanf("%d",&taban);
	printf("Sonucu gir: "); scanf("%d",&sonuc);
	printf("Taraniyor...\n");
	while(0==0)
		{
			sonuc2=sonuc2*taban;
			printf("%d\n",ust);
			if(sonuc2==sonuc) break;
			else ust=ust+1;
		}
	printf("Tarama Bitti.");
	printf("Sonuc= %d",ust);
	printf("\n Not: Diger C programlama dersleri icin : www.bilgius.com/category/c-c/ ");
	getch();
}

/*
 Konu linki:  http://www.bilgius.com/taban-ve-sonucu-verince-ustu-gosteren-program/
 C Programlama kategori linki: http://www.bilgius.com/category/c-c/
		
 Bilgius | Bilgi Tanrýsý
 http://www.bilgius.com
*/
