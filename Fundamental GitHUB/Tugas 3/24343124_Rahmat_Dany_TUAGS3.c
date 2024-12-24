#include <stdio.h>
#include <math.h>

void hanoi(int n, char asal, char tujuan, char bantu) {
    if (n == 1) {
        printf("Pindahkan cakram 1 dari %c ke %c\n", asal, tujuan);
        return;
    }
    // Pindahkan n-1 cakram dari asal ke bantu
    hanoi(n - 1, asal, bantu, tujuan);
    // Pindahkan cakram terbesar dari asal ke tujuan
    printf("Pindahkan cakram %d dari %c ke %c\n", n, asal, tujuan);
    // Pindahkan n-1 cakram dari bantu ke tujuan
    hanoi(n - 1, bantu, tujuan, asal);
}

int main() {
    biodata();
    int cakram;
    
    printf("Masukkan jumlah cakram: ");
    scanf("%d", &cakram);
    
    hanoi(cakram, 'A', 'C', 'B'); // A: tiang awal, C: tiang tujuan, B: tiang bantu
    
    return 0;
}

void biodata()
{
    printf("\tProject Tugas Menara Hanoi\n");
	printf("===========================================\n");
	printf("Programer  : Rahmat Dany\n");
	printf("NIM        : 24343124\n");
	printf("===========================================\n");
}