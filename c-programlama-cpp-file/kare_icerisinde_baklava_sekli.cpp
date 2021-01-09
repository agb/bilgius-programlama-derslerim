// Kare içerisinde bir adet baklava þeklini çizen program

#include<stdio.h>
#include<conio.h>

main()
{	yeniden:
	int sayi,karesayac=0;
	printf("Sayi girin: "); scanf("%d",&sayi);
	printf("\n\n\t");
	
	// Üst
	for(int i=0;i<=sayi;i++)
		{	// Kare üst çizgi
			if(i==0)
				{ for(int a=0;a<=1;a++)	
					for(int r=sayi+1;r>=i;r--) 
						{
							printf("-"); 
							karesayac++;
						}
					 printf("\n");	
				}
				
			// boþluk oluþturuyoruz
			for(int r=sayi;r>=i;r--)
				{ if(r==sayi)	printf("\t|");
				  else			printf(" ");	
				}
				
			// boþluktan hemen sonra * iþareti
			for(int a=0;a<=1;a++)
				for(int g=0;g<=i;g++)	
					printf("*");
					
			// * iþaretinden sonra kare oluþturacaðýmýz için
			// yine boþluk oluþturmak zorundayýz
			for(int r=sayi;r>=i;r--)
				{ if(r==i)		printf("|");
				  else			printf(" ");	
				}		
			
			// düzen(þekil) oluþturmasý için alt satýr...
			printf("\n");				
		}
	
	// Alt
	for(int i=0;i<=sayi-1;i++)
		{	printf("\t");	
		
			// boþluk oluþturuyoruz
			for(int r=-1;r<=i;r++)
				{ if(r==-1)		printf("|");
				  else			printf(" ");	
				}	
				
			// boþluktan hemen sonra * iþareti
			for(int a=0;a<=1;a++)
				for(int g=sayi-1;g>=i;g--)	
					printf("*");
					
			// * iþaretinden sonra kare oluþturacaðýmýz için
			// yine boþluk oluþturmak zorundayýz
			for(int r=-1;r<=i;r++)
				{ if(r==i)		printf("|");
				  else			printf(" ");	
				}						

			// düzen oluþturmasý için alt satýr...
			printf("\n");		
					
			// Kare alt çizgi
					if(i==sayi-1)
						{ 	printf("\t");
							for(int w=1;w<=karesayac;w++) printf("-");			
							printf("\n");
						}										
		}
	printf("\n\n\tDiger C programlama sorulari: http:://sorucevap.bilgius.com\n\n\n");		
	goto yeniden; 
	getch();
}
