// C'de istenilen say� kadar i�lemi tekrarlama 

#include<stdio.h>
#include<conio.h>
main()
{
  int i,n,t=0,a;
  printf("Kac sayi girilecek?: "); scanf("%d",&n);
  for(i=0;i<n;i=i+1) // Bilgisayarlar 0'dan basladigi i�in i=0'dan ba�latt�k.
  {           
  printf("%d .inci sayi gir: ",i+1); // i'i 0'dan baslattigimiz i�in i+1 dedik        
  scanf("%d",&a);
  t=t+a;
  /*
  yeni atanan degerler sol tarafta iken sabit yani daha once bir deger var olan
  degerler sag tarafta olurlar.
  */
  }   
  printf("�slem bitti\nSonuc= %d",t);
  printf("\n Not: Diger C programlama dersleri icin : www.bilgius.com/category/c-c/ ");
  getch();
}

/*
 Konu linki:  http://www.bilgius.com/cde-istenilen-sayi-kadar-islemi-tekrarlama-for-dongusu-ornegi/
 C Programlama kategori linki: http://www.bilgius.com/category/c-c/
		
 Bilgius | Bilgi Tanr�s�
 http://www.bilgius.com
*/
