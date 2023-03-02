#include <stdio.h>
#include <stdlib.h>


int hesapla(int,int);

int main(){

int ogrenci_sayisi;
int gecme_notu;

printf("Ogrenci sayisini giriniz: ");
scanf("%d",&ogrenci_sayisi);

printf("Gecme notunu giriniz: ");
scanf("%d",&gecme_notu);

int kalan = hesapla(ogrenci_sayisi,gecme_notu);

printf("Gecen ogrenci sayisi: %d\n",ogrenci_sayisi-kalan);
printf("Kalan ogrenci sayisi: %d",kalan);


}

int hesapla(int os,int gn){

    int notlar[100];
    int kalan;
    int toplam = 0;

    for(int i=0;i<os;i++){
        printf("%d. ogrencinin notu:",i+1);
        scanf("%d",&notlar[i]);

        if (notlar[i] < gn)
        kalan++;

        toplam += notlar[i];
    }

printf("Not oralaması: %d\n",toplam/os);

return kalan;
}
