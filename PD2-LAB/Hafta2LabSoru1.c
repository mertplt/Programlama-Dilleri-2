#include <stdio.h>
#include <stdlib.h>


int func(n){
   int i = n;
    if (i == 1)
    return 1;
    return (i + func(i-1));

}

int main(){
    int x;
    printf("Bir sayi giriniz: ");
    scanf("%d",&x);

    int sonuc = func(x);
    printf("Toplam: %d",sonuc);
    
    return 0;
}