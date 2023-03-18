#include <stdio.h>
#include <stdlib.h>
int tekSayi(int *A,int b){
    if(b>=0)
        if(A[b-1] % 2 == 0)
            return tekSayi(A,b-1);
        else return 1 + tekSayi(A,b-1);
    else
        return 0;

}

int main(){
    int dizi[] = {3,5,12,6,34,3,19};
    int boyut = sizeof(dizi)/sizeof(dizi[0]);

    printf("tek sayi adedi: %d",tekSayi(dizi,boyut));
}