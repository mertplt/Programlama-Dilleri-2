#include <stdio.h>
#include <stdlib.h>

int kitleIndex(float,float);


int main(){

    float boy,kilo;
    int deger;

printf("Boyunuzu giriniz: ");
scanf("%f",&boy);

printf("Kilonuzu giriniz: ");
scanf("%f",&kilo);

deger = kitleIndex(boy,kilo);


switch (deger)
{
case 1:
    printf("zayif");
    break;
case 2:
    printf("normal");
    break;
case 3:
    printf("kilolu");
    break;
case 4:
    printf("Obez");
    break;
default:
    break;
}


    return 0;
}

int kitleIndex(float boy, float kilo) {
    float index = kilo / (boy * boy);
    if (index <= 18)
        return 1;
    else if (index <= 25)
        return 2;
    else if (index <= 30)
        return 3;
    else 
        return 4;
}