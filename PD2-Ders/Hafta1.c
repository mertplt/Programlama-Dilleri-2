#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
int a = 10;
void fonk1(int a){
    a = 40;
    printf("a = %d\n",a);
}
int main(){
    printf("a = %d\n",a);
    fonk1(a);
    printf("a = %d\n",a);

   
    return 0;
}

*/

/*
int a = 10;
void fonk1(int a){
    a = 40;
    printf("a = %d\n",a);
}
int main(){
    int a;
    a = 30;
    printf("a = %d\n",a);
    fonk1(a);
    printf("a = %d\n",a);

   
    return 0;
}
*/
/*
int a ;
void fonk1(int a){
    a = 20;
    
}
int main(){
   
    a = 10;
    printf("a = %d\n",a);
    fonk1(a);
    printf("a = %d\n",a);

   
    return 0;
}
*/

int main(){
   
   srand(time(NULL));

  int randNumber = rand() % 15;
  printf("%d",randNumber);

   
    return 0;
}
