#ifndef _EQUATION_
#define _EQUATION_

#include "boolean.h"

typedef struct{
    int TabVal[50];
    int LenVal;
} Eq;

#define tambah 99991
#define kurang 99992
#define kali 99993
#define bagi 99994
#define left 99995
#define right 99996

boolean isOp(int i);
    // Menghasilkan true jika 

int adaKurung(Eq eq);
    // Mengembalikan indeks kurung awal jika ada
    // Mengembalikan -1 jika tidak ada tanda kurung

int adaKaliBagi(Eq eq);
    // Mengembalikan indeks operasi kali atau bagi
    // Mengembalikan -1 jika tidak ada operasi kali atau bagi

int adaTambahKurang(Eq eq);
    // Mengembalikan indeks operasi tambah atau kurang
    // Mengembalikan -1 jika tidak ada operasi tambah atau kurang

void solved(int init, int end, int res, Eq *eq);
    // Menghilangkan operasi yang sudah dihitung

int solveEq(Eq *eq);
    // Menyelesaikan persamaan
    // Urutannya tutup kurung, operasi kali bagi, operasi tambah kurang

void showEq(Eq eq);
    // Menampilkan persamaan

boolean isSame(Eq eq1, Eq eq2);

boolean isSame1(Eq eq1, Eq eq2);

boolean isSame2(Eq eq1, Eq eq2);

#endif