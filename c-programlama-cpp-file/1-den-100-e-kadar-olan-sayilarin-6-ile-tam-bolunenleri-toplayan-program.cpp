// Konu adý: 1'den 100'e kadar olan sayýlardan 6 ile tam bölünenlerin toplamýný bulan programý
#include<stdio.h>
main()
{	int i,t;
	for(i=0;i<100;i=i+1) 
		{
			if(i%6==0) t=t+i;
		}
	printf("Sonuc %d",t);
	printf("\n Not: Diger C programlama dersleri icin : www.bilgius.com/category/c-c/ ");
	return(0);
}

/*
 Konu linki:  http://www.bilgius.com/1-den-100-e-kadar-olan-sayilarin-6-ile-tam-bolunenlerin-toplami/
 C Programlama kategori linki: http://www.bilgius.com/category/c-c/
		
 Bilgius | Bilgi Tanrýsý
 http://www.bilgius.com
*/
