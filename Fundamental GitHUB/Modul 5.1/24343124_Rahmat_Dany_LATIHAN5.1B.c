#include <stdio.h>

// Fungsi untuk menghitung keliling lingkaran
float hitungKelilingLingkaran(float jariJari)
{
    return 2* 3.14 * jariJari;
}

int main()
{
    printf("  Project Tugas Hitung Keliling lingkaran\n");
	printf("===========================================\n");
	printf("Programer  : Rahmat Dany\n");
	printf("NIM        : 24343124\n");
	printf("===========================================\n");
    float jariJari;
    
    printf("Masukan jari-jari lingkaran: ");
    scanf("%f", &jariJari);

    // Menggil fangsi dan maenampilkan hasil
    float keliling = hitungKelilingLingkaran(jariJari);
    printf("Keliling lingkaran adalah: %.2f\n", keliling);

    return 0;
}