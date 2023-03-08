#include <stdio.h>
#include <stdlib.h>

/*
int f(int n){

    if(n == 0 )
        return 0;
    f(n-1);
    printf("%d\n",n);
}

int main(void){
    int sayi = 10;
    f(sayi);
    return 0;
}
*/

/*
int toplam(int n)
{
    if (n == 1)
        return n;
    else return(n + toplam(n - 1));
}

int main(void){
    int sayi = 10;
    printf("Sonuc = %d",toplam(sayi));
    return 0;
}
*/


/*

int tablo(x) {
int i;
if (x<=10) {
for (i = 1; i<11; i++) printf("%-3d", x*i);
        printf("\n");
        return tablo(x + 1);
}
    else return 1;

}


int main(void){
        int x = 1;
        tablo(x);
        return 0;
}

*/

/*
long faktoryel(long n){
if (n <= 1)
return 1;
else return (n*faktoryel(n - 1));
}

int main(void)
{
    int i;
for (i = 0; i <= 10; i++) {
printf("%d! = %d\n", i, faktoryel(i));
}
return 0; }
*/

// Question

func(x){

    if (x <= 0)
    return(0);
    return(func(x - 1)+ 2);

}

int main(){
    int x = 23;
   int A =  func(x);
   printf("deger: %d",A);
}










