// C 'de dosyaya veri yazdýrma
#include<stdio.h>
#include<conio.h>
struct ogryapi 
 {  
    char numara[10];
    char adi[20];
    int notu;
 } ogrenci;
main() 
{    char yenikayit;
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
    fclose(dosya);
      }
    getch();
}

 /*
 Konu linki:   http://www.bilgius.com/cde-dosyaya-yeni-kayit-eklemek
 C Programlama kategori linki: http://www.bilgius.com/category/c_programlama
		
 Bilgius | Bilgi Tanrýsý
 http://www.bilgius.com
*/
