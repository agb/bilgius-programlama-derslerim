// �ki matrisin �arp�m�n� yapan C program�
#include<stdio.h>
#include<conio.h>
main() {
	   int m,n,i,j,k,a[100][100],b[100][100],c[100][100],topla=0,say=0;
	   printf("Kacar satir: "); scanf("%d",&m);
	   printf("Kacar sutun: "); scanf("%d",&n);
	   printf("A matrisini gir: \n");
	   for(i=1;i<=m;i=i+1) 
	      {
		   for(j=1;j<=n;j=j+1)
		    {
			 scanf("%d",&a[i][j]);				   
			}  
		  }
	   printf("B matrisini gir: \n");
	   for(i=1;i<=m;i=i+1) 
	      {
		   for(j=1;j<=n;j=j+1)
		    {
			 scanf("%d",&b[i][j]);				   
			}  
		  }
	   for(i=1;i<=m;i=i+1)
	     {
		   for(j=1;j<=n;j=j+1)	
		    {  topla=0;
				for(k=1;k<=m;k=k+1) 
					 {
			 		   topla=topla+a[i][k]*b[k][j];
					 }
			c[i][j]=topla;  
			// Daha iyi bir g�r�n�m elde etmek i�in
			// s�tun say�s�na ula��ld���nda alt sat�ra ge�icek...
			printf(" %d ",c[i][j]); say=say+1; if(say==n) { printf("\n"); say=0;}
			}	
		 }
	   printf("\n Not: Diger C programlama dersleri icin : www.bilgius.com/category/c-c/ ");
	   getch();
	   }
	   
/*
 Konu linki:  http://www.bilgius.com/iki-matrisin-carpimini-yapan-c-programi/
 C Programlama kategori linki: http://www.bilgius.com/category/c-c/
 
 *Program�n son g�ncelleme tarihi:  19 Ocak 2014 
		
 Bilgius | Bilgi Tanr�s�
 http://www.bilgius.com
*/
