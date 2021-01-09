// Konu adý: Afyon Kocatepe Üniversitesi Algoritmalar ve Programlamaya Giriþ Dersi Vize Soru ve Cevaplarý
#include<stdio.h>
#include<conio.h>
main()
{
	int s1,s2,buyuk,kucuk,toplam=0;
	tekrargir: printf("ilk sayiyi giriniz: "); 	scanf("%d",&s1);
	printf("ikinci sayiyi giriniz: ");	  		scanf("%d",&s2);
	if(s1==s2) goto tekrargir;
	else { 
			if(s1>s2) { buyuk=s1; kucuk=s2; }
			else 	  {	buyuk=s2; kucuk=s1; }
		 }
	for(kucuk;kucuk<=buyuk;kucuk=kucuk+1)
	   	 {
			toplam=toplam+kucuk;
		 }
	printf("Sonuc = %d",toplam);
	printf("\n Not: Diger C programlama dersleri icin : www.bilgius.com/category/c-c/ ");	
	getch();
}

/*
 Konu linki:  http://www.bilgius.com/aku-algoritmalar-ve-programlamaya-giris-dersi-vize-soru-ve-cevaplari-3/
 C Programlama kategori linki: http://www.bilgius.com/category/c-c/
		
 Bilgius | Bilgi Tanrýsý
 http://www.bilgius.com
*/
