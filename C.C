#include <stdio.h>

typedef struct { //definisi kata kunci typedef struktur
    int x; //definisi tipe data int bernilai x didalam struktur
    int y; //definisi tipe data int bernilai y didalam struktur
} Koordinat; //mendefinisikan sebuah struktur bernama kordinat

int main() { //definisi fungsi utama program
    Koordinat koordinat1, koordinat2; //deklarasi variabel bertipe koordinat, dan mengisinya dengan
                                    //koordinat 1 dan 2
                                    
    koordinat1.x = 1; //menginisialisasi variabel koordinat1 dengan nilai x&y dan mengisi nilai
    koordinat1.y = 2; //masing masing koordinatnya

    koordinat2.x = 3; //menginisialisasi variabel koordinat1 dengan nilai x&y dan mengisi nilai
    koordinat2.y = 4; //masing masing koordinatnya

    printf("Koordinat 1: (%d, %d)\n", koordinat1.x, koordinat1.y);
    //mencetak nilai koordinat 1 dengan menggunakan printf, lalu memanggil variabel koordinat1 x&y
    printf("Koordinat 2: (%d, %d)\n", koordinat2.x, koordinat2.y);
    //mencetak nilai koordinat 2 dengan menggunakan printf, lalu memanggil variabel koordinat2 x&y
    return 0;
}