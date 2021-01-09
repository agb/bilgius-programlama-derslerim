// Klavyeden girilen dört sayýdan en büyüðü

#include<stdio.h>
#include<conio.h>
main()
{
 int a,b,c,d;
 printf("1.sayi: "); scanf("%d",&a);
 printf("2.sayi: "); scanf("%d",&b);
 printf("3.sayi: "); scanf("%d",&c);
 printf("4.sayi: "); scanf("%d",&d);
 if((a>b) && (a>c) && (a>d)) printf("1.sayi buyuktur");
 else if((b>c) && (b>d))     printf("2.sayi buyuktur");
 else if(c>d)                printf("3.sayi buyuktur");    
 else                        printf("4.sayi buyuktur");     
 printf("\n Not: Diger C programlama dersleri icin : www.bilgius.com/category/c-c/ ");
 getch();     
}

/*
 Konu linki:  http://www.bilgius.com/tag/dort-sayidan-en-buyugu-nasil-bulunur/
 C Programlama kategori linki: http://www.bilgius.com/category/c-c/
		
 Bilgius | Bilgi Tanrýsý
 http://www.bilgius.com
*/
