/*
    Nama File      : MODUL7.c 
	Programmer     : Rahmat Dany (24343124)
	Tgl. pembuatan : 10/11/24
	Deskripsi      : Mengganti Nilai Elemen Array
*/

#include <stdio.h>
void judul(){
    printf("\tMengganti Nilai Elemen Array\n");
    printf("============================================\n");
    printf("\n");
	printf("Nama : Rahmat Dany\n");
	printf("Nim  : 24343124\n");
    printf("\n");
	printf("============================================\n");
}
int main() {
    judul();
    int angka[5] = {10, 20, 30, 40, 50};
    int indeks, nilaiBaru;

    printf("Array awal: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", angka[i]);
    }
    printf("\n");

    printf("Masukkan nomor indeks elemen yang ingin diganti (0-4): ");
    scanf("%d", &indeks);

    if(indeks >= 0 && indeks < 5) {
        printf("Masukkan nilai baru: ");
        scanf("%d", &nilaiBaru);
        angka[indeks] = nilaiBaru;

        printf("Array setelah diganti: ");
        for(int i = 0; i < 5; i++) {
            printf("%d ", angka[i]);
        }
        printf("\n");
    } 
    
    return 0;
}