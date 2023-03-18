#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define satir 6
 #define sutun 12

int enKisaYol(int matrix[][sutun], int m, int n, int row, int col) {
    if (row < 0 || row >= m || col < 0 || col >= n || matrix[row][col] == 0) {
        // geçersiz bir hücreye veya duvara geldik, sonsuz mesafe olarak kabul edilir.
        return INT_MAX;
    }
    if (row == m - 1 && col == n - 1) {
        // hedefe ulaşıldı, mesafe sıfırdır.
        return 0;
    }
    // mevcut hücreyi ziyaret ettiğimizde, kalan yolda en az maliyetli olanı seçeriz.
    matrix[row][col] = 0; // ziyaret edildi olarak işaretlenir.
    int down = enKisaYol(matrix, m, n, row + 1, col);
    int up = enKisaYol(matrix, m, n, row - 1, col);
    int right = enKisaYol(matrix, m, n, row, col + 1);
    int left = enKisaYol(matrix, m, n, row, col - 1);
    matrix[row][col] = 1; // geri alınır.
    return 1 + ((down < up ? down : up) < (right < left ? right : left) ? (down < up ? down : up) : (right < left ? right : left));
}


int main(){

    int matris[satir][sutun] = {
        {1,0,1,1,1,0,0,1,0,1,1,0},
        {1,0,1,1,1,1,1,0,1,0,0,0},
        {1,1,1,1,1,1,1,0,1,0,1,0},
        {0,1,0,1,0,1,0,1,1,1,1,1},
        {0,1,0,1,1,1,1,1,0,0,0,1},
        {1,1,1,0,1,1,1,1,1,1,1,1}
    };

    int m = 6, n = 12, i = 0, j = 0;

    int sp = enKisaYol(matris, m, n, i, j);


    if(sp < satir*sutun) {
        printf("En kısa yol uzunluğu: %d\n", sp);
    }
    else {
        printf("Yol bulunamadı.\n");
    }

    return 0;


}