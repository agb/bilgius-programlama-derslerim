// Sýfýr girilene kadar 0 hariç teklerin ve çiftlerin ayrý ayrý ortalamasý

#include<stdio.h>
#include<conio.h>
main()
{
int sayi,tek=0,cift=0;
 do
{
printf("Sayi gir: "); scanf("%d",&sayi);
if(sayi%2==0) tek=tek+sayi;
else          cift=cift+sayi;
}
 while(sayi!=0);
printf("Teklerin Toplami: %d\n",tek);
printf("Ciftlerin Toplami: %d",cift);
printf("\n Not: Diger C programlama dersleri icin : www.bilgius.com/category/c-c/ ");
getch();
}

/*
 Konu linki:  http://www.bilgius.com/sifir-girilene-kadar-0-haric-teklerin-ve-ciftlerin-ayri-ayri-ortalamasi-do-while-ornegi/
 C Programlama kategori linki: http://www.bilgius.com/category/c-c/
		
 Bilgius | Bilgi Tanrýsý
 http://www.bilgius.com
*/
