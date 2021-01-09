// C'de Ortalama hesaplama

#include<stdio.h>
#include<conio.h>
#include<math.h>
// Tüm fonksiyonlarda kullanýlmasý için GLOBAL DEÐÝÞKEN kullanýyoruz
      int i,n,sayigir[100],toplam=0,sonuc,secim;
      float harmonik_sonuc,harmonik_topla=0.0,harmonik_sayigir[100];
	  double topla=1.0,ust;
void sayi()
     {
      printf("Kac deger girelecek: "); scanf("%d",&n);     
      for(i=1;i<=n;i=i+1)                 
       	 	 {
          	  printf("%d . deger: ",i); 
			   if(secim==3) 	scanf("%f",&harmonik_sayigir[i]); 
          	   else 			scanf("%d",&sayigir[i]);                    
        	 }	
     }
     
void ortalama() 
  {
   sayi();  ust=n;
   for(i=1;i<=n;i=i+1)  
	  	 {
		  toplam=toplam+sayigir[i];
		  topla=topla*sayigir[i];
		  harmonik_topla=harmonik_topla + (1/harmonik_sayigir[i]);
		 }	
	if(secim==1) { sonuc=toplam/n; printf("Sonuc : %d",sonuc); }
	else if (secim==2)			   printf("Sonuc: %f", pow(topla,1/ust)); 
	else { harmonik_sonuc=(n/harmonik_topla); printf("Sonuc : %f",harmonik_sonuc); }	
  }

main() 
{
  printf("1 - Aritmetik ortalalama\n");
  printf("2 - Geometrik ortalama\n");
  printf("3 - Harmonik ortalama\n\n");
  printf("Lutfen ortalama tipini seciniz: ");  
  scanf("%d",&secim);
  ortalama();
  printf("\n Not: Diger C programlama dersleri icin : www.bilgius.com/category/c-c/ ");
  getch();
}

/*
 Konu linki:  http://www.bilgius.com/c-programlama-ortalama-hesaplamak/
 C Programlama kategori linki: http://www.bilgius.com/category/c-c/
		
 Bilgius | Bilgi Tanrýsý
 http://www.bilgius.com
*/
