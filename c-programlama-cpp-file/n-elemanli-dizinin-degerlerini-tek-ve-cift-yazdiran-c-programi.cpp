// N elemanlý dizinin deðerlerini tek ve çift olarak ekrana yazdýran C programý
#include<stdio.h>
#include<conio.h>
main() {
    int a[100],i,n,t=0,c=0;
    printf("Kac deger gireleceginizi yazin: "); scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
        {
        if((i%10==9)|| (i%10==3)||(i%10==4) )
            { printf("%d.uncu degeri giriniz: ",i); 
              scanf("%d",&a[i]); 
               if(a[i]%2==0) c=c+a[i]; 
               else t=t+a[i];
            }
        else
           { printf("%d.uncu degeri giriniz: ",i); 
              scanf("%d",&a[i]); 
               if(a[i]%2==0) c=c+a[i]; 
               else t=t+a[i];
           }
        }
     printf("Teklerin Toplami: %d\nCiftlerin Toplami: %d",t,c);
     printf("\n Not: Diger C programlama dersleri icin : www.bilgius.com/category/c-c/ ");
     getch();
}

/*
 Konu linki:  http://www.bilgius.com/n-elemanli-dizinin-degerlerini-tek-ve-cift-olarak-ekrana-yazdiran-c-programlama/
 C Programlama kategori linki: http://www.bilgius.com/category/c-c/
		
 Bilgius | Bilgi Tanrýsý
 http://www.bilgius.com
*/
