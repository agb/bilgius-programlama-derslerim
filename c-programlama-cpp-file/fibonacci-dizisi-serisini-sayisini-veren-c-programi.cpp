// C'de Fibonacci Sayýlarý örneði (Dizi örneði)
#include<stdio.h>
#include<conio.h>
main() {
    int n,fibo[100],i,toplam;
    printf("Fibonacci degerini giriniz: "); scanf("%d",&n);
    fibo[0]=0; fibo[1]=1; 
    if(n==0)      printf("Fibo[0] = 0"); 
    else if(n==1) printf("Fibo[1] = 1");
    else {
          for(i=2;i<=n;i=i+1)
           {
            fibo[i]=fibo[i-1]+fibo[i-2];
            toplam=fibo[i];
           }
          printf("\nFibo[%d] = %d",n,toplam); 
         }
    printf("\n Not: Diger C programlama dersleri icin : www.bilgius.com/category/c-c/ ");
    getch();
}

/*
 Konu linki:  http://www.bilgius.com/cde-fibonacci-sayilari-ornegi-c-programlama-dizi-ornegi/
 C Programlama kategori linki: http://www.bilgius.com/category/c-c/
		
 Bilgius | Bilgi Tanrýsý
 http://www.bilgius.com
*/
