#include <stdio.h>
#include <stdlib.h>

int obeb(int x,int y){
    if(y==0)
        return x;
    return(obeb(y,x%y));

}

int main(){
    int sayi1 = 48, sayi2 = 128;
    int sonuc;

    sonuc = obeb(sayi1,sayi2);
    printf("Sayilarin OBEB'i : %d",sonuc);
    return 0;

}