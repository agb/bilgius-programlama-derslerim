// Switch yap�s�n� kullanarak iki say� aras�nda d�rt i�lem yapma

#include<stdio.h>
#include<conio.h>
main()
{
 /*
 +  iki say�n�n toplam�
 -  iki say�n�n fark�
 x  iki say�n�n �arp�m�
 /  iki say�n�n b�l�m�
 */   
  int secim,a,b;   
  printf("1.Topla\n2.Cikar\n3.Carp\n4.Bol\nSecim Yap: "); scanf("%d",&secim);
  printf("1.sayi: "); scanf("%d",&a);
  printf("2.sayi: "); scanf("%d",&b);
  switch(secim)    
  {
   case 1: printf("Sonuc= %d",a+b);  break;
   case 2: printf("Sonuc= %d",a-b);  break;
   case 3: printf("Sonuc= %d",a*b);  break;
   case 4: printf("Sonuc= %d",a/b);  break;
   default: printf("islem gecersiz");         
  }     
  printf("\n Not: Diger C programlama dersleri icin : www.bilgius.com/category/c-c/ ");
  getch();
}

/*
 Konu linki:  http://www.bilgius.com/switch-yapisini-kullanarak-iki-sayi-arasinda-dort-islem-yapma/
 C Programlama kategori linki: http://www.bilgius.com/category/c-c/
		
 Bilgius | Bilgi Tanr�s�
 http://www.bilgius.com
*/
