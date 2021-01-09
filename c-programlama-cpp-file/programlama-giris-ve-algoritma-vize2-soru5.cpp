// Algoritma ve Programlamaya giriþ - vize2 soru5
#include<stdio.h>
#include<conio.h>
main()
{
	int i,vize,final,toplam=0,sonuc[50],ortalama;
	for(i=0;i<50;i=i+1) 
		{
			printf("%d.inci ogrenci vize:",i+1);  scanf("%d",&vize);
			printf("%d.inci ogrenci final:",i+1); scanf("%d",&final);
			toplam=vize+toplam;
			sonuc[i] = (vize*(0.3) + final*(0.7)); 
		}
			ortalama=toplam/2;
	for(i=0;i<50;i=i+1) 
		{
			printf("%d.inci ogrenci basari notu: %d\n",i+1,sonuc[i]); 
		}
			if(ortalama<60) printf("sýnýf ortalamasý basarisiz");
			else 			printf("sýnýf ortalamasý basarili");
			printf("Sýnýf ortalamasý %d",ortalama); 
			printf("\n Not: Diger C programlama dersleri icin : www.bilgius.com/category/c-c/ ");			
			getch();
}

/* 
 Konu linki:  http://www.bilgius.com/aku-algoritmalar-ve-programlamaya-giris-dersi-vize-soru-ve-cevaplari-2/
 C Programlama kategori linki: http://www.bilgius.com/category/c-c/
		
 Bilgius | Bilgi Tanrýsý
 http://www.bilgius.com
*/
