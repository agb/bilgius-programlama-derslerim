// C'de 1 den n'e kadar sayýlarýn toplamý

#include<stdio.h>
#include<conio.h>
main()
{
int i,n,t=0,d;
printf("Kac sayi girilecek: "); scanf("%d",&n);

 for(i=0;i<n;i=i+1)
{
printf("%d.inci Sayi gir: ",i+1); scanf("%d",&d);
t=t+d;
}
printf("Sonuc = %d",t);
printf("\n Not: Diger C programlama dersleri icin : www.bilgius.com/category/c-c/ ");
getch();
}

/*
 Konu linki:  http://www.bilgius.com/cde-1-den-ne-kadar-sayilarin-toplami/
 C Programlama kategori linki: http://www.bilgius.com/category/c-c/
		
 Bilgius | Bilgi Tanrýsý
 http://www.bilgius.com
*/
