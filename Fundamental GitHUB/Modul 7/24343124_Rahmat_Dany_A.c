/*
    Nama File      : MODUL7.c 
	Programmer     : Rahmat Dany (24343124)
	Tgl. pembuatan : 10/11/24
	Deskripsi      : Menampilkan Elemen Array
*/

#include <stdio.h>

void judul(){
    printf("\tMenampilkan Elemen Array\n");
    printf("============================================\n");
    printf("\n");
	printf("Nama : Rahmat Dany\n");
	printf("Nim  : 24343124\n");
    printf("\n");
	printf("============================================\n");;
}
int main() {
    judul();
    int angka[5] = {10, 20, 30, 40, 50};
    for(int i = 0; i < 5; i++) {
        printf("Angka ke-%d: %d\n", i + 1, angka[i]);
    }
    return 0;
}