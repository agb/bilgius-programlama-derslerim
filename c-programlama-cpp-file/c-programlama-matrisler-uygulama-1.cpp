// MxN elemanlý matrise klavyeden giriþ yaptýrma 
#include<stdio.h>
#include<conio.h>
main() {
       int m,n,i,j,deger[100],s=1;
       printf("Kac satir: "); scanf("%d",&m);
       printf("Kac sutun: "); scanf("%d",&n);
       // Satýr
       for(i=1;i<=m;i=i+1) {
                           // Sütun
                           for(j=1;j<=n;j=j+1) 
                                {
                                printf("%d,%d girin: ",i,j); scanf("%d",&deger[s]);
                                s=s+1;
                                }
                           }
       s=1;
       printf("Sonuc: \n");
       for(i=1;i<=m;i=i+1) {
                           for(j=1;j<=n;j=j+1)
                                {
                                printf("Matris [%d,%d] = %d\n",i,j,deger[s]);
                                s=s+1;
                                }
                           }
    printf("\n Not: Diger C programlama dersleri icin : www.bilgius.com/category/c-c/ ");                    
    getch();
}

/*
 Konu linki:  http://www.bilgius.com/mxn-elemanli-matrise-klavyeden-giris-yaptirma/
 C Programlama kategori linki: http://www.bilgius.com/category/c-c/
		
 Bilgius | Bilgi Tanrýsý
 http://www.bilgius.com
*/
