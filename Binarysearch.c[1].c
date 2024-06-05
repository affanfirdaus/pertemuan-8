// Nama File : BinarySearchversiboolean.c
// Deskripsi : mencari harga x dalam tabel secara binary search versi boolean
// Nama :  Muhammad Affan Firdaus
// NIM : 24060123140209
// Tanggal : 01 Juni 2024
#include <stdio.h>
#include <stdbool.h>

void BinarySearch2(int T[], int N, int X, bool *Found, int *IX ){
    //kamus lokal
    int atas, bawah, tengah;
    //Algoritma 
    atas = 0;
    bawah= N-1;
    tengah;
    
    *Found = false;
    *IX = -1;


    while ((atas<=bawah ) && (!(* Found))) 
    {
        tengah = (atas + bawah)/2;
        if (X==T[tengah])
        {
            *Found = true;
            *IX = tengah;
            break;
        }
        else if (X<T[tengah])
        {
            bawah = tengah -1;
        }
        else if (X>T[tengah])
        {
            atas = tengah +1;
        }
        
    }
    
}

int main()
{
    //kamus lokal
    int N = 10;
    int T[10]= {19,1,4,28,5,20,15,13,16,29};
    int X = 5;
    int IX;
    bool Found;

    //Algoritma
    BinarySearch2(T,N,X,&Found,&IX);
    if (Found)
    {
        printf("Data terdapat pada indeks ke %d", IX);
    }
    else
    {
        printf("Data Not Found");
    }
    
    return 0;
}