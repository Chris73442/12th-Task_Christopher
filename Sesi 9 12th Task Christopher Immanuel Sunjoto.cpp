#include <stdio.h>
#include <string.h>

int main() {
    char tindakan[100];
    char lulus[5];

    printf("===== Program Simulasi Kelulusan Mata Kuliah =====\n");
    printf("Simulasikan langkah-langkah agar lulus MK ini.\n");

    // Loop hingga user mengetik "ya"
    do {
        printf("\nApa yang akan kamu lakukan agar bisa lulus MK ini? ");
        scanf(" %[^\n]", tindakan);  // membaca input termasuk spasi

        printf("Apakah kamu sudah lulus MK ini? (ya/tidak): ");
        scanf("%s", lulus);

    } while (strcmp(lulus, "ya") != 0);

    printf("\nSelamat! Kamu dinyatakan lulus mata kuliah ini.\n");

    return 0;
}
