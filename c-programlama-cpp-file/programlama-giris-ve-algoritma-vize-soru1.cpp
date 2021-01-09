// Algoritma ve Programlamaya giriþ - vize C programý
#include<stdio.h>
#include<conio.h>
main()
{	int A,B,X;
	printf("Sayý gir(A):"); scanf("%d",&A);
	asama3: X=50; 
	printf("Sayý gir(B):"); scanf("%d",&B);
	A=A-1; 
	if(X<B)  goto asama7;
	else X=B;
	asama7: if(A>0) goto asama3;
			else printf("X= %d B= %d",X,B);
	printf("\n Not: Diger C programlama dersleri icin : www.bilgius.com/category/c-c/ ");
	getch();
}

/* 
 Konu linki:  http://www.bilgius.com/klavyeden-girilen-uc-sayinin-ortancasini-bulma/
 C Programlama kategori linki: http://www.bilgius.com/category/c-c/
		
 Bilgius | Bilgi Tanrýsý
 http://www.bilgius.com
*/
