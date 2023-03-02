#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
   
   srand(time(NULL));

  int zar1 = 1 + rand() % 6;
  int zar2 = 1 + rand() % 6;
  int toplam = zar1 + zar2;
  int puan = 0;
  int isFinish = 0; // 0 = devam , 1 = kazandın, 2 = kaybettin
      printf("ilk atışta zar1: %d\n",zar1);
      printf("ilk atışta zar2: %d\n",zar2);

  if (toplam == 7 || toplam == 11){
    printf("tebrikler ilk atışta kazandınız");
  }else if(toplam == 2 || toplam == 3 || toplam == 11){
    printf("malesef ilk atışta kaybettiniz");
  }
  else{
    puan = toplam;
    int atıs = 2;
    printf("puan: %d\n",puan);
         while(isFinish == 0){
    
      int zar1 = 1 + rand() % 6;
      int zar2 = 1 + rand() % 6;
        int toplam = zar1 + zar2;
          printf("%d. atış toplamı: %d\n",atıs,toplam);
               // printf("%d. atışta zar1: %d\n",atıs,zar1);
               // printf("%d. atışta zar2: %d\n",atıs,zar2);
          
             atıs++;
    if (toplam == 7){
      isFinish = 2;
        break;

        }  
    if (toplam == puan){
      isFinish = 1;
      break;
          }   
      }
    }

    
    switch (isFinish)
    {
    case 1:
      printf("Tebrikler kazandınız");
      break;
    case 2:
      printf("Malesef kaybettiniz");
    default:
    break;
    }
  

    return 0;
}