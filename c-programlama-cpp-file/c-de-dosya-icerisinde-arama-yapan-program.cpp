// C'de dosya içerisinde Arama yapan C programý
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
   if(ferror(f)!=0) printf("Dosya açýlamadý");
   else
   {
	   system("CLS");
	   printf("\nÖgrenci No     :");	scanf("%s",ogr.no);
	   printf("\nÖgrenci Adý    :");	scanf("%s",ogr.ad);
	   printf("\nÖgrenci Soyadý :");	scanf("%s",ogr.soyad);
	   printf("\nBaba Adý       :");	scanf("%s",ogr.bad);
	   printf("\nAnne Adý       :");	scanf("%s",ogr.aad);
	   printf("\nTelefon No     :");	scanf("%s",ogr.telno);
	   printf("\nMemleketi      :");	scanf("%s",ogr.memleket);
	   printf("\nAdres          :");	scanf("%s",ogr.adres);
	
	   fseek(f,filelength(fileno(f)),SEEK_END);
	   fwrite(&ogr,sizeof(ogr),1,f);
	   fflush(f);
	   printf("\ndevam etmek için bir tusa basiniz");
	   getch();
   }
}
	
int arama(void){

   system("CLS");
   printf("Aranacak Ögrenci Numarasýný Giriniz:");
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
			  printf("\ndevam etmek için bir tusa basýnýz");
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

              printf("Dosya Açilamadi");

              exit(0);}

     do{	 
			  system("CLS");
              printf("\n 1. Bilgi Girisi");

              printf("\n 2. Bilgi Arama");

              printf("\n 3. Programdan Cikis");

              printf("\n Seciminiz(1-2-3):\nDaha fazlasý iciin www.bilgius.com...");

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
		
 Bilgius | Bilgi Tanrýsý
 http://www.bilgius.com
*/
