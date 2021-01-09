/* Konu: Algoritma ve Programlamaya giriþ - vize soru4 
Büyük ve ortanca sayý arasýndaki tam sayýlarýn çarpýmlarýný, 
ortanca ve küçük sayý arasýndaki sayýlarýn toplamlarýný hesaplayan ve yazdýran C programý: */
#include<stdio.h>
#include<conio.h>
main()
{	int a,b,c,enbuyuk,ortanca,enkucuk;
	printf("1.sayi: "); scanf("%d",&a);
	printf("2.sayi: "); scanf("%d",&b);
	printf("3.sayi: "); scanf("%d",&c);
	// hangisi en büyük? 
	 if((a>b) && (a>c)) enbuyuk=a;
 	 else {
	     if(b>c) enbuyuk=b;
		 else enbuyuk=c;
          }
	// hangisi ortanca?
	  if((c>b && a>b && c>a) || (b>c && a>c && b>a))        ortanca=a;
	  else if ((c>a && b>a && c>b) || (a>c && b>c && a>c))  ortanca=b;
	  else                                                  ortanca=c;
	// hangisi en küçük?
		 if((a<b) && (a<c)) enkucuk=a;
 	 else {
	     if(b<c) enkucuk=b;
		 else enkucuk=c;
          }
	printf("Buyuk ve ortanca sayi carpim: %d\n",enbuyuk*ortanca);
	printf("Ortanca ve enkucuk sayinin toplami %d",enkucuk+ortanca);
	printf("\n Not: Diger C programlama dersleri icin : www.bilgius.com/category/c-c/ ");
	getch();
}

/* 
 Konu linki:  http://www.bilgius.com/klavyeden-girilen-uc-sayinin-ortancasini-bulma/
 C Programlama kategori linki: http://www.bilgius.com/category/c-c/
		
 Bilgius | Bilgi Tanrýsý
 http://www.bilgius.com
*/
