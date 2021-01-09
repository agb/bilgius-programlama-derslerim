// Afyon Kocatepe Üniversitesi Algoritma ve Algoritmaya Giriþ - Programlama Temelleri vize sorularý
#include<stdio.h>
#include<conio.h>
main()
{
	int N=0,P=0,T=0,A;
	asama3: printf("\tn:%d,p:%d,t:%d\nA degerini gir:",N,P,T); scanf("%d",&A);
	if(A<0) N=N+1; else goto asama8;
	T=T+1;
	goto asama3;
	asama8: if(A>0)P=P+1; 
	else goto nptyaz;
	T=T+1;
	goto asama3;
	nptyaz: printf("N degeri=%d\nP degeri=%d\nT degeri=%d");
	printf("\n Not: Diger C programlama dersleri icin : www.bilgius.com/category/c-c/ ");
	getch();
}

/*
 Konu linki:  http://www.bilgius.com/aku-algoritmalar-ve-programlamaya-giris-dersi-vize-soru-ve-cevaplari-3/
 C Programlama kategori linki: http://www.bilgius.com/category/c-c/
		
 Bilgius | Bilgi Tanrýsý
 http://www.bilgius.com
*/
