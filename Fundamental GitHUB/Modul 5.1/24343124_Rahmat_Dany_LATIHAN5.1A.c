#include <stdio.h>

//Fungsi untuk menghitung luas persegi pajang
int hitunglahLuasPersegiPanjang(int panjang, int lebar)
{
    return panjang * lebar;
}

int main(){
    printf(" Project Tugas Hitung Luas Persegi Panjang\n");
	printf("===========================================\n");
	printf("Programer  : Rahmat Dany\n");
	printf("NIM        : 24343124\n");
	printf("===========================================\n");
    int panjang, lebar;

    printf("Masukan panjang: ");
    scanf("%d", &panjang);
    printf("Masukan Lebar: ");
    scanf("%d", &lebar);

    //Memanggil fungsi dan menapilkan hasil
    int luas = hitunglahLuasPersegiPanjang(panjang, lebar);
    printf("Luas persegi panjang adalah: %d\n", luas);

    return 0;
}