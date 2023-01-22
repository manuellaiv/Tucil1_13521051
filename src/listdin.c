#include "listdin.h"
#include <stdio.h>
#include <stdlib.h>


/* ********** KONSTRUKTOR ********** */
/* Konstruktor : create list kosong  */
void CreateListDin(ListDin *l, int capacity){
   BUFFER(*l)=(ElType*) malloc (capacity*sizeof(ElType));
   NEFF(*l)=0;
   CAPACITY(*l)=capacity;
}
/* I.S. l sembarang, capacity > 0 */
/* F.S. Terbentuk list dinamis l kosong dengan kapasitas capacity */

void dealocateList(ListDin *l){
   free(BUFFER(*l));
   CAPACITY(*l)=0;
   NEFF(*l)=0;
}
/* I.S. l terdefinisi; */
/* F.S. (l) dikembalikan ke system, CAPACITY(l)=0; NEFF(l)=0 */

/* *** Test list penuh *** */
boolean isFull(ListDin l){
   return (NEFF(l)==CAPACITY(l));
}
/* Mengirimkan true jika list l penuh, mengirimkan false jika tidak */

void copyList(ListDin lIn, ListDin *lOut){
   CreateListDin(lOut,CAPACITY(lIn));
   NEFF(*lOut)=NEFF(lIn);
   int i;
   for (i=0;i<NEFF(lIn);i++){
      ELMT(*lOut,i)=ELMT(lIn,i);
   }
}
/* I.S. lIn terdefinisi tidak kosong, lOut sembarang */
/* F.S. lOut berisi salinan dari lIn (identik, nEff dan capacity sama) */
/* Proses : Menyalin isi lIn ke lOut */ 

/* ********** MENAMBAH DAN MENGHAPUS ELEMEN DI AKHIR ********** */
/* *** Menambahkan elemen terakhir *** */
void insertLast(ListDin *l, ElType val){
   boolean same = false;
   int i = 0;
   while(!same && i < NEFF(*l)){
      // if(isSame2(val, ELMT(*l,i))){
      //    same = true;
      // }
      if(isSame(val, ELMT(*l,i))){
         same = true;
      }
      if(isSame1(val, ELMT(*l,i))){
         same = true;
      }
      i++;
   }
   if(!same){
      if (isFull(*l)){
         expandList(l,10);
      }
      ELMT(*l,NEFF(*l)) = val;
      NEFF(*l)++;
   } 
}
/* Proses: Menambahkan val sebagai elemen terakhir list */
/* I.S. List l boleh kosong, tetapi tidak penuh */
/* F.S. val adalah elemen terakhir l yang baru */

/* ********* MENGUBAH UKURAN ARRAY ********* */
void expandList(ListDin *l, int num){
    ListDin temp;
    int newcapacity = CAPACITY(*l) + num ;
    copyList(*l, &temp) ;
    CAPACITY(temp) = newcapacity;
    dealocateList(l);
    copyList(temp, l);
}
/* Proses : Menambahkan capacity l sebanyak num */
/* I.S. List sudah terdefinisi */
/* F.S. Ukuran list bertambah sebanyak num */

void printList(ListDin l){
/* Menampilkan semua elemen list */
   for(int i = 0; i < NEFF(l); i++){
      showEq(ELMT(l,i));
   }
}
