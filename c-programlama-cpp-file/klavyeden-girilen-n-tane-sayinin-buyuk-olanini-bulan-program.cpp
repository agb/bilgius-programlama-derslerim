// Klavyeden girilen n tane say�n�n b�y�k olan�
#include<stdio.h>
#include<conio.h>
main()
{	int n,i,sayi[100],buyuk,enbuyuk;
	
	bastan:
	printf("Kac tane say� gireceksiniz?: "); scanf("%d",&n);
	if(n==1)  { printf("En az 2 say� girmelisiniz\n"); goto bastan; }
	for(i=0;i<n;i=i+1)
	{
		printf("%d.sayi: ",i+1); scanf("%d",&sayi[i]); 
	}
	
	/*	Alternatif: A��klama sat�rlar�n� kald�r�p 
		for d�ng�s� i�erisindeki n-1 yerine deger yazin.
		if(n==3) deger=2.0;
		else	 deger=3*n/(3.5);
	*/
	for(i=0;i<n-1;i=i+1) 
	{	
		if(sayi[i]<sayi[i+1]) 
		{	buyuk=sayi[i+1];
			if(i==0) enbuyuk=buyuk;
			else 
			  { if(buyuk>enbuyuk) enbuyuk=buyuk; }
		}
		else 				  
		 {  buyuk=sayi[i];
			if(i==0) enbuyuk=buyuk;
			else
			{ if(buyuk>enbuyuk) enbuyuk=buyuk; }
		 }
	}
	printf("Girdiginiz sayilar icerisinde en buyuk olan: %d",enbuyuk);
	printf("Diger C programlama dersleri icin : \n\thttp://www.bilgius.com/category/c_programlama");
	getch();
}

/*
 Konu linki:   http://www.bilgius.com/klavyeden-giri�in-buyuk-olani
 C Programlama kategori linki: http://www.bilgius.com/category/c_programlama
		
 Bilgius | Bilgi Tanr�s�
 http://www.bilgius.com
*/
