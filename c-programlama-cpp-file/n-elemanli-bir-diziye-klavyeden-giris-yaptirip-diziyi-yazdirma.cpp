// N elemanlý bir diziye klavyeden giriþ yaptýrýp diziyi ekrana yazdýran program

#include<stdio.h>
#include<conio.h>
main() {
int a[100],i,n;
printf("Kac deger gireleceginizi yazin: "); scanf("%d",&n);
for(i=1;i<=n;i=i+1)
{
if((i%10==9)|| (i%10==3)||(i%10==4) )
{ printf("%d.uncu degeri giriniz: ",i); scanf("%d",&a[i]); }
else
{ printf("%d .inci degeri giriniz.",i); scanf("%d",&a[i]); }
}
for(i=1;i<=n;i=i+1) printf("a[%d] = %d\n",i,a[i]);
printf("\n Not: Diger C programlama dersleri icin : www.bilgius.com/category/c-c/ ");
getch();
}

/*
 Konu linki:  http://www.bilgius.com/n-elemanli-bir-diziye-klavyeden-giris-yaptirip-diziyi-ekrana-yazdiran-program/
 C Programlama kategori linki: http://www.bilgius.com/category/c-c/
		
 Bilgius | Bilgi Tanrýsý
 http://www.bilgius.com
*/
