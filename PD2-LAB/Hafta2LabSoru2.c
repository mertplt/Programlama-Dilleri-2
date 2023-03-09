#include <stdio.h>
#include <stdlib.h>

int eleman_sayisi;
int Biggest(int x[]){
   static int max = -9999,i = 0;
  

   if (i < eleman_sayisi){
        if (x[i]> max)
            max = x[i];
        i++;
        Biggest(x);
   }
    return max;
}

int main(){
    int dizi[100],max,i;
    printf("Eleman Sayisini Giriniz: ");
    scanf("%d",&eleman_sayisi);

    for(i=0;i<eleman_sayisi;i++){
        printf("%d.sayi: ",i+1);
        scanf("%d",&dizi[i]);
    }

    max = Biggest(dizi);
    printf("Maximum : %d",max);
    return 0;
}