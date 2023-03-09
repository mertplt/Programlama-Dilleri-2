#include <stdio.h>
#include <stdlib.h>

int basamakTopla(int);

int main(){
    int sayi,toplam;
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);

    toplam = basamakTopla(sayi);
    printf("Basamaklar Toplami: %d",toplam);


}

int basamakTopla(s){
    if (s != 0)
        return s%10 + basamakTopla(s/10);
    else
        return 0;
    
        
}