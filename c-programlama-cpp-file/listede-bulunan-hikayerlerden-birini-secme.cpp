// Listede bulunan hikayelerden birini secme

#include<stdio.h>
#include<conio.h>
main()
{
 /*
 1 - Kýrmýzý Çoraplý küçük bir kýz
 2 - Kýrmýzý Baþlýklý Kýz
 3 - Kýrmýzý eldivenli kýz
 4 - Sana kýrmýzý çok yakýþýyor
 5 - Buna bulamadik bir sey
 Daha iyi anlamanýz için printf leri çoðaltarak yazýcam.
 Tek printf ile de yazýlabilirdi.
 */  
 printf("1.Kirmizi copapli kucuk bir kiz\n");
 printf("2.Kirmizi baslikli  kiz\n");
 printf("3.Kirmizi eldivenli kiz\n");
 printf("4.Sana kirmizi cok yakisiyor\n");
 printf("5.Buna bulamadim bir sey\n");     
 int secim;
 printf("Secim yap: "); scanf("%d",&secim);
 switch(secim)
 {
 case 1: printf("Buraya kirmizi corapli\n kizin hikayesinin gelecegini biliyorum");  break;            
 case 2: printf("Buraya da hepimizin bildigi Kirmizi baslikli  kizin hikayesi gelecek"); break;
 case 3: printf("Kirmizi eldivenli kiz hikayesi gelecek."); break;
 case 4: printf("Beyaz daha iyidir"); break;
 case 5: printf("http://www.bilgius.com"); break;
 }     
 printf("\n Not: Diger C programlama dersleri icin : www.bilgius.com/category/c-c/ ");
 getch();    
}

/*
 Konu linki:  http://www.bilgius.com/listede-bulunan-hikayelerden-birini-secme-switch-yapisi-ornegi/
 C Programlama kategori linki: http://www.bilgius.com/category/c-c/
		
 Bilgius | Bilgi Tanrýsý
 http://www.bilgius.com
*/
