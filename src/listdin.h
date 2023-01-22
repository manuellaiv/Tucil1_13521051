#ifndef LISTDIN_H
#define LISTDIN_H

#include "boolean.h"
#include "equation.h"
#include <stdio.h>
#include <stdlib.h>
/*  Kamus Umum */
#define IDX_MIN 0
/* Indeks minimum list */
#define IDX_UNDEF -1
/* Indeks tak terdefinisi*/

/* Definisi elemen dan koleksi objek */
typedef Eq ElType; /* type elemen list */
typedef int IdxType;
typedef struct
{
    ElType *buffer; /* memori tempat penyimpan elemen (container) */
    int nEff;       /* >=0, banyaknya elemen efektif */
    int capacity;   /* ukuran elemen */
} ListDin;

/* ********** SELEKTOR ********** */
#define NEFF(l) (l).nEff
#define BUFFER(l) (l).buffer
#define ELMT(l, i) (l).buffer[i]
#define CAPACITY(l) (l).capacity

void CreateListDin(ListDin *l, int capacity);

void dealocateList(ListDin *l);

boolean isFull(ListDin l);

void copyList(ListDin lIn, ListDin *lOut);

void insertLast(ListDin *l, ElType val);

void expandList(ListDin *l, int num);

void printList(ListDin l);

#endif