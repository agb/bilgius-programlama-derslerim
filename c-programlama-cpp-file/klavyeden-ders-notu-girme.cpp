// Klavyeden ders notu girme (Not 100 ise AA yazan)

#include<stdio.h>
#include<conio.h>
main()
{
int a;
printf("Not gir: "); scanf("%d",&a);
if      ((a>=90) && (a<=100))      printf("Notunuz AA");
else if ((a>=85) && (a<=89))       printf("Notunuz BA");
else if ((a>=75) && (a<=84))       printf("Notunuz BB");
else if ((a>=70) && (a<=74))       printf("Notunuz CB");
else if ((a>=60) && (a<=69))       printf("Notunuz CC");
else if ((a>=50) && (a<=59))       printf("Notunuz DC");
else if ((a>=0)  && (a<=49))       printf("Notunuz FF");
else printf("Gecersiz bir not girdiniz.");
printf("\n Not: Diger C programlama dersleri icin : www.bilgius.com/category/c-c/ ");
getch();
}

/*
 Konu linki:  http://www.bilgius.com/klavyeden-ders-notu-girme-not-100-ise-aa-yazan/
 C Programlama kategori linki: http://www.bilgius.com/category/c-c/
		
 Bilgius | Bilgi Tanrýsý
 http://www.bilgius.com
*/
