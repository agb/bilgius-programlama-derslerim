// C'de dosya i�erisinde Arama yapan C program�
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<io.h>

FILE*f;
struct ogrneci
{
	char no[10],ad[15],soyad[20];
    char bad[15],aad[15],telno[10];
    char memleket[20],adres[50];
} ogr;

int i,sec,kaysay;
char noara[10];

void giris(void)
{
   FILE*f;
   f=fopen("ozluk.dat","w+b");
   if(ferror(f)!=0) printf("Dosya a��lamad�");
   else
   {
	   system("CLS");
	   printf("\n�grenci No     :");	scanf("%s",ogr.no);
	   printf("\n�grenci Ad�    :");	scanf("%s",ogr.ad);
	   printf("\n�grenci Soyad� :");	scanf("%s",ogr.soyad);
	   printf("\nBaba Ad�       :");	scanf("%s",ogr.bad);
	   printf("\nAnne Ad�       :");	scanf("%s",ogr.aad);
	   printf("\nTelefon No     :");	scanf("%s",ogr.telno);
	   printf("\nMemleketi      :");	scanf("%s",ogr.memleket);
	   printf("\nAdres          :");	scanf("%s",ogr.adres);
	
	   fseek(f,filelength(fileno(f)),SEEK_END);
	   fwrite(&ogr,sizeof(ogr),1,f);
	   fflush(f);
	   printf("\ndevam etmek i�in bir tusa basiniz");
	   getch();
   }
}
	
int arama(void){

   system("CLS");
   printf("Aranacak �grenci Numaras�n� Giriniz:");
   scanf("%s",&noara);
   kaysay=filelength(fileno(f))/sizeof(ogr);
   for(i=0;i<kaysay;i++){

          fseek(f,i*sizeof(ogr),SEEK_SET);
          fread(&ogr,sizeof(ogr),1,f);
          if(strcmp(noara,ogr.no)==0)
		  {

              printf("\nOgrenci No     :%s",ogr.no);
              printf("\nOgrenci Adi    :%s",ogr.ad);
              printf("\nOgrenci Soaydi :%s",ogr.soyad);
              printf("\nBaba Adi       :%s",ogr.bad);
              printf("\nAnne Adi       :%s",ogr.aad);
              printf("\nTelefon No     :%s",ogr.telno);
			  printf("\nMemleketi   :%s",ogr.memleket);
			  printf("\nAdresi         :%s",ogr.adres);
			  printf("\ndevam etmek i�in bir tusa bas�n�z");
         getch();

         return 0;}

              }

   		printf("\nAranan Kayit Bulunamadi");
  		getch();
   		return 0;
   }
   
   main() {

     f=fopen("ozluk.dat","w+b");
     if(f==NULL){

              printf("Dosya A�ilamadi");

              exit(0);}

     do{	 
			  system("CLS");
              printf("\n 1. Bilgi Girisi");

              printf("\n 2. Bilgi Arama");

              printf("\n 3. Programdan Cikis");

              printf("\n Seciminiz(1-2-3):\nDaha fazlas� iciin www.bilgius.com...");

              scanf("%d",&sec);

              switch(sec){

                        case 1:giris(); break;

                        case 2:arama(); break;

                        case 3:exit(0); break;

                        default:printf("Yanlis Secim");}

              }while(sec!=3);

   fclose(f);

        }
        
/*
 Konu linki: http://www.bilgius.com/cde-dosya-icerisinde-arama-yapma/
 C Programlama kategori linki: http://www.bilgius.com/category/c_programlama/
		
 Bilgius | Bilgi Tanr�s�
 http://www.bilgius.com
*/
