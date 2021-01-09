// C 'de diziyi tersten yazdýrmak
#include<stdio.h>
#include<conio.h>
char yazi[100],gonder;
int i,n,birincibardak,ikincibardak,bosbardak;
char terstenyaz(char yazi[100]) 
	{ 	
		for(i=0;yazi[n]!='\0';n=n+1) ; // Döngüdeki karakter sayýsýný öðrenmek için...
		for(i=0;i<n/2;i=i+1) 
		 {
			 /*	
			 	bosbardak	  =  birincibardak;
				birincibardak =  ikincibardak;
				ikincibardak  =  bosbardak;	
			*/	
			    bosbardak 	 = yazi[n-i-1];
			    yazi[n-i-1]  = yazi[i];
			    yazi[i]	 	 = bosbardak; 
		 }
	gonder=printf("%s",yazi);
    return(gonder); 
	}
main() 
	{
		printf("Bir cumle yaz: "); gets(yazi);
		terstenyaz(yazi);
		printf("\n Not: Diger C programlama dersleri icin : www.bilgius.com/category/c-c/ ");
		getch();
	}
	
/*
 Konu linki:  http://www.bilgius.com/ders-34-cde-diziyi-tersten-yazdirmak/
 C Programlama kategori linki: http://www.bilgius.com/category/c-c/
		
 Bilgius | Bilgi Tanrýsý
 http://www.bilgius.com
*/
