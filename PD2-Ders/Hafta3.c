#include <stdio.h>
#include <stdlib.h>

/*
int fun(int a[], int n){
int x;
    if (n == 1)
        return a[0];
    else
        x = fun(a, n - 1);
    if (x > a[n-1])
        return x;
    else 
        return a[n - 1];

}
int main(){
int arr[] = { 12, 10, 300, 50, 100 };
printf(" %d ", fun(arr, 5)); getchar();
    return 0;
}
*/


int fun1(int x, int y){
               if (x == 0)
           return y;//base case – temel durum

else
        return fun1(x - 1, x + y);
}

void fun2(int n){
    int i = 0;
if (n > 1) {
         fun2(n - 1);
         printf("\n");
}
for (i = 0; i < n; i++) 
printf(" * ");
}

int main(){
    int a = 5, b = 2,c;
c = fun1(a, b);
printf("Value from the function: %d\n",c); fun2(5);
getchar();
}