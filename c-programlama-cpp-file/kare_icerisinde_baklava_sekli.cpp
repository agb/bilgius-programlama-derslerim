// Kare i�erisinde bir adet baklava �eklini �izen program

#include<stdio.h>
#include<conio.h>

main()
{	yeniden:
	int sayi,karesayac=0;
	printf("Sayi girin: "); scanf("%d",&sayi);
	printf("\n\n\t");
	
	// �st
	for(int i=0;i<=sayi;i++)
		{	// Kare �st �izgi
			if(i==0)
				{ for(int a=0;a<=1;a++)	
					for(int r=sayi+1;r>=i;r--) 
						{
							printf("-"); 
							karesayac++;
						}
					 printf("\n");	
				}
				
			// bo�luk olu�turuyoruz
			for(int r=sayi;r>=i;r--)
				{ if(r==sayi)	printf("\t|");
				  else			printf(" ");	
				}
				
			// bo�luktan hemen sonra * i�areti
			for(int a=0;a<=1;a++)
				for(int g=0;g<=i;g++)	
					printf("*");
					
			// * i�aretinden sonra kare olu�turaca��m�z i�in
			// yine bo�luk olu�turmak zorunday�z
			for(int r=sayi;r>=i;r--)
				{ if(r==i)		printf("|");
				  else			printf(" ");	
				}		
			
			// d�zen(�ekil) olu�turmas� i�in alt sat�r...
			printf("\n");				
		}
	
	// Alt
	for(int i=0;i<=sayi-1;i++)
		{	printf("\t");	
		
			// bo�luk olu�turuyoruz
			for(int r=-1;r<=i;r++)
				{ if(r==-1)		printf("|");
				  else			printf(" ");	
				}	
				
			// bo�luktan hemen sonra * i�areti
			for(int a=0;a<=1;a++)
				for(int g=sayi-1;g>=i;g--)	
					printf("*");
					
			// * i�aretinden sonra kare olu�turaca��m�z i�in
			// yine bo�luk olu�turmak zorunday�z
			for(int r=-1;r<=i;r++)
				{ if(r==i)		printf("|");
				  else			printf(" ");	
				}						

			// d�zen olu�turmas� i�in alt sat�r...
			printf("\n");		
					
			// Kare alt �izgi
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
