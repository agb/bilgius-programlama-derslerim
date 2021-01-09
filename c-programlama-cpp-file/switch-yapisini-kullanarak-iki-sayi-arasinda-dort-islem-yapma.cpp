// Switch yapýsýný kullanarak iki sayý arasýnda dört iþlem yapma

#include<stdio.h>
#include<conio.h>
main()
{
 /*
 +  iki sayýnýn toplamý
 -  iki sayýnýn farký
 x  iki sayýnýn çarpýmý
 /  iki sayýnýn bölümü
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
		
 Bilgius | Bilgi Tanrýsý
 http://www.bilgius.com
*/
