/* Konu: Algoritma ve Programlamaya giri� - vize soru4 
B�y�k ve ortanca say� aras�ndaki tam say�lar�n �arp�mlar�n�, 
ortanca ve k���k say� aras�ndaki say�lar�n toplamlar�n� hesaplayan ve yazd�ran C program�: */
#include<stdio.h>
#include<conio.h>
main()
{	int a,b,c,enbuyuk,ortanca,enkucuk;
	printf("1.sayi: "); scanf("%d",&a);
	printf("2.sayi: "); scanf("%d",&b);
	printf("3.sayi: "); scanf("%d",&c);
	// hangisi en b�y�k? 
	 if((a>b) && (a>c)) enbuyuk=a;
 	 else {
	     if(b>c) enbuyuk=b;
		 else enbuyuk=c;
          }
	// hangisi ortanca?
	  if((c>b && a>b && c>a) || (b>c && a>c && b>a))        ortanca=a;
	  else if ((c>a && b>a && c>b) || (a>c && b>c && a>c))  ortanca=b;
	  else                                                  ortanca=c;
	// hangisi en k���k?
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
		
 Bilgius | Bilgi Tanr�s�
 http://www.bilgius.com
*/
