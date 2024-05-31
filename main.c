#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main() {

    const int maksimumKapasitasParkirMobil = 100;
    const int maksimumKapasitasParkirMotor = 100;

    int mobilTerparkir = 0;
    int motorTerparkir = 0;

    int pilihan;

    while (1) {

        printf("====================\n");
        printf("Selamat datang di area parkir Mall Dinoyo City!\n\n");

        printf("Berikut ini adalah pilihan opsi yang dapat anda pilih:\n\n");

        printf("1. Cek sisa slot parkir untuk mobil.\n");
        printf("2. Cek sisa slot parkir untuk motor.\n");
        printf("3. Parkir mobil.\n");
        printf("4. Parkir motor.\n");
        printf("5. Keluar parkir mobil.\n");
        printf("6. Keluar parkir motor.\n\n");

        while (1) {

            printf("Silahkan masukkan pilihan anda: ");
            scanf("%d", &pilihan);

            if (pilihan >= 1 && pilihan <= 6) {

                while (getchar() != '\n');
                break;

            } else {

                printf("Pilihan yang anda masukkan tidak valid, silahkan ulangi sekali lagi.\n\n");
                while (getchar() != '\n');

            }

        }

        switch (pilihan) {

            case 1:
                printf("%d dari %d slot parkir tersedia untuk mobil.\n", mobilTerparkir, maksimumKapasitasParkirMobil);
                printf("====================\n\n");
                break;
            case 2:
                printf("%d dari %d slot parkir tersedia untuk motor.\n", motorTerparkir, maksimumKapasitasParkirMotor);
                printf("====================\n\n");
                break;
            case 3:
                if (mobilTerparkir < maksimumKapasitasParkirMobil) {

                    printf("Selamat menikmati hari anda di Mall Dinoyo City!\n");
                    printf("====================\n\n");
                    mobilTerparkir++;

                } else {

                    printf("Maaf, area parkir mobil saat ini sedang penuh. Mohon tunggu sebentar atau pindah ke tempat parkir terdekat anda.\n");
                    printf("====================\n\n");

                }
                break;
            case 4:
                if (motorTerparkir < maksimumKapasitasParkirMotor) {

                    printf("Selamat menikmati hari anda di Mall Dinoyo City!\n");
                    printf("====================\n\n");
                    motorTerparkir++;

                } else {

                    printf("Maaf, area parkir motor saat ini sedang penuh. Mohon tunggu sebentar atau pindah ke tempat parkir terdekat anda.\n");
                    printf("====================\n\n");

                }
                break;
            case 5:
                if (mobilTerparkir > 0) {

                    printf("Terimakasih telah menggunakan layanan parkir Mall Dinoyo City. Semoga perjalanan anda selamat sampai tujuan.\n");
                    printf("====================\n\n");
                    mobilTerparkir--;

                } else {

                    printf("Maaf, saat ini tidak ada mobil terparkir. Silahkan hubungi petugas untuk informasi lebih lanjut.\n");
                    printf("====================\n\n");

                }
                break;
            case 6:
                if (motorTerparkir > 0) {

                    printf("Terimakasih telah menggunakan layanan parkir Mall Dinoyo City. Semoga perjalanan anda selamat sampai tujuan.\n");
                    printf("====================\n\n");
                    motorTerparkir--;

                } else {

                    printf("Maaf, saat ini tidak ada motor terparkir. Silahkan hubungi petugas untuk informasi lebih lanjut.\n");
                    printf("====================\n\n");

                }
                break;
            default:
                printf("Maaf, terjadi kesalahan teknis pada program. Silahkan hubungi petugas untuk informasi lebih lanjut.\n");
                printf("====================\n\n");

        }

    }

    return 0;

}