#include <stdio.h>

int main(){
    // Deklerasi variabel
    float nilaiTugas, nilaiUTS, nilaiUAS, nilaiAkhir;
    int lulus;

    // Input nilai dati pengguna
    printf("Masukan nilai Tugas (0-100):");
    scanf("%f", &nilaiTugas);
    printf("Masukan nilai UTS (0-100):");
    scanf("%f", &nilaiUTS);
    printf("Masukan nilai UAS (0-100):");
    scanf("%f", &nilaiUAS);

    // Hitu nilai akhir
    nilaiAkhir = (0.3 * nilaiTugas) + (0.3 * nilaiUTS) + (0.4 * nilaiUAS);

    // Tentukan apakah lulus atau tidak
    lulus = (nilaiAkhir >= 60) &&(nilaiUAS >= 50);

    // Output hasil
    printf("\nNilai Akhir Anda: %.2f\n", nilaiAkhir);

    if (lulus) {
        printf("Selamat Anda LULUS.\n");
    } else {
        printf("Selamat Anda TIDAK LULUS.\n");
    }

    return 0;
}