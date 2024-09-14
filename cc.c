#include <stdio.h>
#include <string.h>

// Definisi struktur untuk menyimpan informasi buku
struct Buku {
    int id;
    char judul[100];
    char penulis[50];
    int tahun_terbit;
};

// Fungsi untuk mencetak informasi buku
void cetakBuku(struct Buku b) {
    printf("ID Buku: %d\n", b.id);
    printf("Judul: %s\n", b.judul);
    printf("Penulis: %s\n", b.penulis);
    printf("Tahun Terbit: %d\n", b.tahun_terbit);
}

int main() {
    // Inisialisasi variabel bertipe struct Buku
    struct Buku buku1, buku2;

    // Mengisi data untuk buku pertama
    buku1.id = 1;
    strcpy(buku1.judul, "Belajar C dengan Mudah");
    strcpy(buku1.penulis, "Ahmad Syafi'i");
    buku1.tahun_terbit = 2020;

    // Mengisi data untuk buku kedua
    buku2.id = 2;
    strcpy(buku2.judul, "Algoritma dan Struktur Data");
    strcpy(buku2.penulis, "Budi Raharjo");
    buku2.tahun_terbit = 2018;

    // Mencetak informasi buku pertama
    printf("Informasi Buku 1:\n");
    cetakBuku(buku1);

    // Mencetak informasi buku kedua
    printf("\nInformasi Buku 2:\n");
    cetakBuku(buku2);

    return 0;
}
