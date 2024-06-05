// Nama File : Sentinel.c
// Deskripsi : mencari harga x dalam array secara sequential menggunakan sentinel
// Nama : Muhammad Affan Frdaus
// NIM : 24060123140209
// Tanggal : 15 Mei 2024

#include <stdio.h>
#include <stdbool.h>

void SEQSearchWithSentinel(int T[], int N, int X, int *IX ){

    //Kamus Lokal
    int i;

    // Algotitma

    T[N]=X;
    i = 0;

    while (T[i]!=X)
    {
       i++;
    }
    if (i<N)
    {
        *IX=i;
    }
    else
    {
        *IX=-1;
    }

}



int main()
{
    //Kamus Lokal
    int N = 8;
    int T[8]= {1,3,5,-8,12,90,15};
    int X = 8;
    int IX;


    //Algoritma
    SEQSearchWithSentinel(T,N,X,&IX);
    if (IX!=-1)
    {
        printf("data berada pada indeks ke %d ", IX);
    }
    else
    {
        printf("data tidak ditemukan");
    }
    return 0;
}