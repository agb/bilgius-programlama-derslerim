// C 'de matrisin transpozu - transpozesi
#include<stdio.h>
#include<conio.h>
main()
{	int i,j,m,n,a[100][100],say=0;
	printf("Kac satir? "); scanf("%d",&m);
	printf("Kac sutun? "); scanf("%d",&n);
	for(i=1;i<=m;i=i+1)
	{
		for(j=1;j<=n;j=j+1) 
			{
				printf("%d,%d ",i,j); scanf("%d",&a[i][j]);
			}
	}
	// Standart matris
	printf("\t\tStandart Matris\n\n");
	for(i=1;i<=m;i=i+1)
	{  
		for(j=1;j<=n;j=j+1) 
			{	printf("\t%d\t",a[i][j]); 
				say=say+1;
				if(say%n==0) printf("\n");
			}
	}	
	// Transpoz matris
	printf("\n\n\t\tTranspoz Matris\n\n");
	for(i=1;i<=m;i=i+1)
	{
		for(j=1;j<=n;j=j+1) 
			{	printf("\t%d\t",a[j][i]); 
				say=say+1;
				if(say%n==0) printf("\n");
			}
	}	
	printf("\n Not: Diger C programlama dersleri icin : www.bilgius.com/category/c_programlama ");
	getch();
}

 /*
 Konu linki:   http://www.bilgius.com/c-programlamada-matrisin-transpozesi
 C Programlama kategori linki: http://www.bilgius.com/category/c_programlama
		
 Bilgius | Bilgi Tanrýsý
 http://www.bilgius.com
*/
