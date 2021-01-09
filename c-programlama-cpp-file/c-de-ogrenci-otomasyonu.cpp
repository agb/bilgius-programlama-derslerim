// C'de öðrenci otomasyon programý yapýmý
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
   system("CLS");
   printf("\nÖgrenci No     :");	scanf("%s",ogr.no);
   printf("\nÖgrenci Adý    :");	scanf("%s",ogr.ad);
   printf("\nÖgrenci Soyadý :");	scanf("%s",ogr.soyad);
   printf("\nBaba Adý       :");	scanf("%s",ogr.bad);
   printf("\nAnne Adý       :");	scanf("%s",ogr.aad);
   printf("\nTelefon No     :");	scanf("%s",ogr.telno);
   printf("\nMemleketi      :");	scanf("%s",ogr.memleket);
   printf("\nAdres          :");	scanf("%s",ogr.adres);

   fseek(f,filelength(fileno(f)),SEEK_SET);
   fwrite(&ogr,sizeof(ogr),1,f);
   fflush(f);
   printf("\ndevam etmek için bir tusa basiniz");
   getch();
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

void listele(void){

    system("CLS");

    kaysay=filelength(fileno(f))/sizeof(ogr);

    for(i=0;i<kaysay;i++)
	{

              fseek(f,i*sizeof(ogr),SEEK_SET);

              fread(&ogr,sizeof(ogr),1,f);

              printf("\n\n\nOgrenci No :%s",ogr.no);
              printf("\nOgrenci Adi    :%s",ogr.ad);
              printf("\nOgrenci Soaydi :%s",ogr.soyad);
              printf("\nBaba Adi       :%s",ogr.bad);
              printf("\nAnne Adi       :%s",ogr.aad);
              printf("\nTelefon No     :%s",ogr.telno);
              printf("\nMemleketi      :%s",ogr.memleket);
              printf("\nAdresi         :%s",ogr.adres);
   }
      printf("\ndevam etmek için bir tusa basiniz");

      getch();}

main() {

     f=fopen("ozluk.dat","w+b");

     if(f==NULL){

              printf("Dosya Açilamadi");

              exit(0);}

     do{	 
			  system("CLS");
              printf("\n 1. Bilgi Girisi");

              printf("\n 2. Bilgi Arama");

              printf("\n 3. Bilgi Listeleme");

              printf("\n 4. Programdan Çikis");

              printf("\n Seçiminiz(1-2-3-4)\nDaha fazlasi icin www.bilgius.com ...");

              scanf("%d",&sec);

              switch(sec){

                        case 1:giris(); break;

                        case 2:arama(); break;

                        case 3:listele(); break;

                        case 4:exit(0); break;

                        default:printf("Yanlis Secim");}

              }while(sec!=4);

   fclose(f);

        }
        
/*
 Konu linki: http://www.bilgius.com/cde-ogrenci-otomasyonu-yapimi
 C Programlama kategori linki: http://www.bilgius.com/category/c_programlama/
		
 Bilgius | Bilgi Tanrýsý
 http://www.bilgius.com
*/
