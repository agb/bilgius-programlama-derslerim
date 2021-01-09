// C 'de dosyaya veri listeleme
#include<stdio.h>
#include<conio.h>
struct ogryapi 
 {  
    char numara[10];
    char adi[20];
    int notu;
 } ogrenci;
 
void kayit()
{
	  char yenikayit;
	  FILE*dosya;
	  dosya=fopen("veri.dat","a+");
      if(ferror(dosya)!=0) printf("Hata var\n");
      else
       {
      fseek(dosya,0,SEEK_END);
	   do 
	   {
	        printf("Numaraya gir: "); scanf("%s",&ogrenci.numara);
	        printf("Ad:");    scanf("%s",&ogrenci.adi);
	        printf("Notu gir:");  scanf("%d",&ogrenci.notu);
	        fwrite(&ogrenci,sizeof(ogrenci),1,dosya);
	        printf("Baþka kayit ekleyecek misiniz?:"); 
	        yenikayit=getche(); printf("\n");
	   }        
    while((yenikayit=='E') || (yenikayit=='e'));
    // fclose(dosya);
      }
}
main() 
{   printf("Yeni kayit ekleyecek misiniz? "); char secim; secim=getche(); 
	printf("\n");
	if(secim=='e' || secim=='E') kayit(); 
	FILE*dosya;
	dosya=fopen("veri.dat","a+"); 
	// Listeleme iþlemleri
	fseek(dosya,0,SEEK_SET);
	do 
		{
		      fread(&ogrenci,sizeof(ogrenci),1,dosya);
			  if(feof(dosya)!=0) break;
			  printf("%9s%20s%8d\n",ogrenci.numara,ogrenci.adi,ogrenci.notu);						
		}
	while(0==0);
	fclose(dosya);
    getch();
}

 /*
 Konu linki:   http://www.bilgius.com/cde-kayit-listeleme/
 C Programlama kategori linki: http://www.bilgius.com/category/c_programlama
		
 Bilgius | Bilgi Tanrýsý
 http://www.bilgius.com
*/
