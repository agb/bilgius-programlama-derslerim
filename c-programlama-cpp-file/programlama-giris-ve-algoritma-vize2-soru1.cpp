// Konu adý: Afyon Kocatepe Üniversitesi Algoritma ve programlamaya giriþ vize sorularý

#include<stdio.h>
#include<conio.h>
main()
{
	int I=1,A=1,B=0;
	asama3: A=A*I;  
	B=B+(I+1);
	if(I==9) goto asama8; 
	I=I+2;
	goto asama3;
	asama8: printf("A= %d\nB= %d",A,B);
	printf("\n Not: Diger C programlama dersleri icin : www.bilgius.com/category/c-c/ ");
	getch();
}

/*
 Konu linki:  www.bilgius.com/aku-algoritmalar-ve-programlamaya-giris-dersi-vize-soru-ve-cevaplari-2/
 C Programlama kategori linki: http://www.bilgius.com/category/c-c/
		
 Bilgius | Bilgi Tanrýsý
 http://www.bilgius.com
*/
