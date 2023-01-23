#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include "listdin.h"

void combin1(int arr[4], int op[4], ListDin *leq){
    // _ op _ op _ op _
    int sol = 0;
    Eq eq, eqs;
    eq.TabVal[0] = arr[0];
    for(int i = 0; i < 4; i++){
        eq.TabVal[1] = op[i];
        eq.TabVal[2] = arr[1];
        for(int j = 0; j < 4; j++){
            eq.TabVal[3] = op[j];
            eq.TabVal[4] = arr[2];
            for(int k = 0; k < 4; k++){
                eq.TabVal[5] = op[k];
                eq.TabVal[6] = arr[3];
                eq.LenVal = 7;
                eqs = eq;
                if (solveEq(&eqs) == 24){
                    insertLast(leq, eq);
                }
            }
        }
    }
}

void combin2(int arr[4], int op[4], ListDin *leq){
    // ( _ op _ ) op ( _ op _ )
    int sol = 0;
    Eq eq, eqs;
    eq.TabVal[0] = left;
    eq.TabVal[1] = arr[0];
    for(int i = 0; i < 4; i++){
        eq.TabVal[2] = op[i];
        eq.TabVal[3] = arr[1];
        eq.TabVal[4] = right;
        for(int j = 0; j < 4; j++){
            eq.TabVal[5] = op[j];
            eq.TabVal[6] = left;
            eq.TabVal[7] = arr[2];
            for(int k = 0; k < 4; k++){
                eq.TabVal[8] = op[k];
                eq.TabVal[9] = arr[3];
                eq.TabVal[10] = right;
                eq.LenVal = 11;
                eqs = eq;
                if (solveEq(&eqs) == 24){
                    insertLast(leq, eq);
                }
            }
        }
    }
}

void combin3(int arr[4], int op[4], ListDin *leq){
    // ( _ op _ ) op _ op _
    int sol = 0;
    Eq eq, eqs;
    eq.TabVal[0] = left;
    eq.TabVal[1] = arr[0];
    for(int i = 0; i < 4; i++){
        eq.TabVal[2] = op[i];
        eq.TabVal[3] = arr[1];
        eq.TabVal[4] = right;
        for(int j = 0; j < 4; j++){
            eq.TabVal[5] = op[j];
            eq.TabVal[6] = arr[2];
            for(int k = 0; k < 4; k++){
                eq.TabVal[7] = op[k];
                eq.TabVal[8] = arr[3];
                eq.LenVal = 9;
                eqs = eq;
                if (solveEq(&eqs) == 24){
                    insertLast(leq, eq);
                }
            }
        }
    }
}

void combin4(int arr[4], int op[4], ListDin *leq){
    // _ op ( _ op _ ) op _
    int sol = 0;
    Eq eq, eqs;
    eq.TabVal[0] = arr[0];
    for(int i = 0; i < 4; i++){
        eq.TabVal[1] = op[i];
        eq.TabVal[2] = left;
        eq.TabVal[3] = arr[1];
        for(int j = 0; j < 4; j++){
            eq.TabVal[4] = op[j];
            eq.TabVal[5] = arr[2];
            eq.TabVal[6] = right;
            for(int k = 0; k < 4; k++){
                eq.TabVal[7] = op[k];
                eq.TabVal[8] = arr[3];
                eq.LenVal = 9;
                eqs = eq;
                if (solveEq(&eqs) == 24){
                    insertLast(leq, eq);
                }
            }
        }
    }
}

void combin5(int arr[4], int op[4], ListDin *leq){
    // _ op _ op ( _ op _ )
    int sol = 0;
    Eq eq, eqs;
    eq.TabVal[0] = arr[0];
    for(int i = 0; i < 4; i++){
        eq.TabVal[1] = op[i];
        eq.TabVal[2] = arr[1];
        for(int j = 0; j < 4; j++){
            eq.TabVal[3] = op[j];
            eq.TabVal[4] = left;
            eq.TabVal[5] = arr[2];
            for(int k = 0; k < 4; k++){
                eq.TabVal[6] = op[k];
                eq.TabVal[7] = arr[3];
                eq.TabVal[8] = right;
                eq.LenVal = 9;
                eqs = eq;
                if (solveEq(&eqs) == 24){
                    insertLast(leq, eq);
                }
            }
        }
    }
}

void combin6(int arr[4], int op[4], ListDin *leq){
    // ( _ op _ op _ ) op _
    int sol = 0;
    Eq eq, eqs;
    eq.TabVal[0] = left;
    eq.TabVal[1] = arr[0];
    for(int i = 0; i < 4; i++){
        eq.TabVal[2] = op[i];
        eq.TabVal[3] = arr[1];
        for(int j = 0; j < 4; j++){
            eq.TabVal[4] = op[j];
            eq.TabVal[5] = arr[2];
            eq.TabVal[6] = right;
            for(int k = 0; k < 4; k++){
                eq.TabVal[7] = op[k];
                eq.TabVal[8] = arr[3];
                eq.LenVal = 9;
                eqs = eq;
                if (solveEq(&eqs) == 24){
                    insertLast(leq, eq);
                }
            }
        }
    }
}

void combin7(int arr[4], int op[4], ListDin *leq){
    // _ op ( _ op _ op _ )
    int sol = 0;
    Eq eq, eqs;
    eq.TabVal[0] = arr[0];
    for(int i = 0; i < 4; i++){
        eq.TabVal[1] = op[i];
        eq.TabVal[2] = left;
        eq.TabVal[3] = arr[1];
        for(int j = 0; j < 4; j++){
            eq.TabVal[4] = op[j];
            eq.TabVal[5] = arr[2];
            for(int k = 0; k < 4; k++){
                eq.TabVal[6] = op[k];
                eq.TabVal[7] = arr[3];
                eq.TabVal[8] = right;
                eq.LenVal = 9;
                eqs = eq;
                if (solveEq(&eqs) == 24){
                    insertLast(leq, eq);
                }
            }
        }
    }
}

void combin8(int arr[4], int op[4], ListDin *leq){
    // (( _ op _ ) op _ ) op _
    int sol = 0;
    Eq eq, eqs;
    eq.TabVal[0] = left;
    eq.TabVal[1] = left;
    eq.TabVal[2] = arr[0];
    for(int i = 0; i < 4; i++){
        eq.TabVal[3] = op[i];
        eq.TabVal[4] = arr[1];
        eq.TabVal[5] = right;
        for(int j = 0; j < 4; j++){
            eq.TabVal[6] = op[j];
            eq.TabVal[7] = arr[2];
            eq.TabVal[8] = right;
            for(int k = 0; k < 4; k++){
                eq.TabVal[9] = op[k];
                eq.TabVal[10] = arr[3];
                eq.LenVal = 11;
                eqs = eq;
                if (solveEq(&eqs) == 24){
                    insertLast(leq, eq);
                }
            }
        }
    }
}

void combin9(int arr[4], int op[4], ListDin *leq){
    // ( _ op ( _ op _ )) op _
    int sol;
    Eq eq, eqs;
    eq.TabVal[0] = left;
    eq.TabVal[1] = arr[0];
    for(int i = 0; i < 4; i++){
        eq.TabVal[2] = op[i];
        eq.TabVal[3] = left;
        eq.TabVal[4] = arr[1];
        for(int j = 0; j < 4; j++){
            eq.TabVal[5] = op[j];
            eq.TabVal[6] = arr[2];
            eq.TabVal[7] = right;
            eq.TabVal[8] = right;
            for(int k = 0; k < 4; k++){
                eq.TabVal[9] = op[k];
                eq.TabVal[10] = arr[3];
                eq.LenVal = 11;
                eqs = eq;
                if (solveEq(&eqs) == 24){
                    insertLast(leq, eq);
                }
            }
        }
    }
}

void combin10(int arr[4], int op[4], ListDin *leq){
    // _ op (( _ op _ ) op _ )
    int sol;
    Eq eq, eqs;
    eq.TabVal[0] = arr[0];
    for(int i = 0; i < 4; i++){
        eq.TabVal[1] = op[i];
        eq.TabVal[2] = left;
        eq.TabVal[3] = left;
        eq.TabVal[4] = arr[1];
        for(int j = 0; j < 4; j++){
            eq.TabVal[5] = op[j];
            eq.TabVal[6] = arr[2];
            eq.TabVal[7] = right;
            for(int k = 0; k < 4; k++){
                eq.TabVal[8] = op[k];
                eq.TabVal[9] = arr[3];
                eq.TabVal[10] = right;
                eq.LenVal = 11;
                eqs = eq;
                if (solveEq(&eqs) == 24){
                    insertLast(leq, eq);
                }
            }
        }
    }
}

void combin11(int arr[4], int op[4], ListDin *leq){
    // _ op ( _ op ( _ op _ ))
    int sol;
    Eq eq, eqs;
    eq.TabVal[0] = arr[0];
    for(int i = 0; i < 4; i++){
        eq.TabVal[1] = op[i];
        eq.TabVal[2] = left;
        eq.TabVal[3] = arr[1];
        for(int j = 0; j < 4; j++){
            eq.TabVal[4] = op[j];
            eq.TabVal[5] = left;
            eq.TabVal[6] = arr[2];
            for(int k = 0; k < 4; k++){
                eq.TabVal[7] = op[k];
                eq.TabVal[8] = arr[3];
                eq.TabVal[9] = right;
                eq.TabVal[10] = right;
                eq.LenVal = 11;
                eqs = eq;
                if (solveEq(&eqs) == 24){
                    insertLast(leq, eq);
                }
            }
        }
    }
}

void combinarr(int arr[4], int start, int end, ListDin *leq){
    int op[4];
    op[0] = tambah;
    op[1] = kurang;
    op[2] = kali;
    op[3] = bagi;

    int sol = 0;
    if(start == end){ 
        for(int i = 0; i < 4; i++){
            combin1(arr, op, leq);
            combin2(arr, op, leq);
            combin3(arr, op, leq);
            combin4(arr, op, leq);
            combin5(arr, op, leq);
            combin6(arr, op, leq);
            combin7(arr, op, leq);
            combin8(arr, op, leq);
            combin9(arr, op, leq);
            combin10(arr, op, leq);
            combin11(arr, op, leq);
        }
        return; 
    }
    else{
        combinarr(arr, start + 1, end, leq);
        for(int i = start + 1; i < end; i++){ 
            if(arr[start] != arr[i]){
                int temp = arr[start]; 
                arr[start] = arr[i]; 
                arr[i] = temp;
                combinarr(arr, start + 1, end, leq); 
                temp = arr[start]; 
                arr[start] = arr[i]; 
                arr[i] = temp;
            }
        }
    }
} 

int main(){
    ListDin leq;
    CreateListDin(&leq, 200);
    int input;
    printf("---- 24 GAME SOLVER ----\nPilih masukan input:\n1. Input user\n2. Random\nMasukkan pilihan: ");
    scanf("%d", &input);
    while (input != 1 && input != 2){
        printf("Masukan tidak sesuai. Masukkan pilihan: ");
        scanf("%d", &input);
    }

    int arr[4];
    if (input == 1){
        printf("Masukkan angka: ");
        char inp[12];
        int i = 0;
        char x;

        scanf("%c", &x);
        while(i < 12){
            inp[i] = x;
            i++;
            scanf("%c", &x);
            if (x == '\n'){
                break;
            }
        }
        int k = 0;
        for(int j = 0; j < i; j++){
            if(inp[j] == 'K'){
                arr[k] = 13;
                k++;
            }
            else if(inp[j] == 'Q'){
                arr[k] = 12;
                k++;
            }
            else if(inp[j] == 'J'){
                arr[k] = 11;
                k++;
            }
            else if(inp[j] == '1'){
                j++;
                if(inp[j] == '0'){
                    arr[k] = 10;
                    k++;
                }
            }
            else if(inp[j] == '9'){
                arr[k] = 9;
                k++;
            }
            else if(inp[j] == '8'){
                arr[k] = 8;
                k++;
            }
            else if(inp[j] == '7'){
                arr[k] = 7;
                k++;
            }
            else if(inp[j] == '6'){
                arr[k] = 6;
                k++;
            }
            else if(inp[j] == '5'){
                arr[k] = 5;
                k++;
            }
            else if(inp[j] == '4'){
                arr[k] = 4;
                k++;
            }
            else if(inp[j] == '3'){
                arr[k] = 3;
                k++;
            }
            else if(inp[j] == '2'){
                arr[k] = 2;
                k++;
            }
            else if(inp[j] == 'A'){
                arr[k] = 1;
                k++;
            }
        }
    }
    else{
        srand(time(NULL));
        for(int i = 0; i < 4; i++){
            arr[i] = rand()%14;
            while(arr[i] == 0){
                arr[i] = rand()%14;
            }
        }

        printf("Angka: %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
    }

    clock_t begin = clock();
    combinarr(arr, 0, 4, &leq);
    clock_t end = clock();
    printf("Jumlah solusi: %d\n", NEFF(leq));
    printList(leq);
    printf("Waktu eksekusi program: %f s\n", ((double)(end - begin) / CLOCKS_PER_SEC));
    
    printf("Apakah ingin menyimpan solusi?\n1. Ya\n2. Tidak\nMasukkan pilihan: ");
    scanf("%d", &input);
    while (input != 1 && input != 2){
        printf("Masukan tidak sesuai. Masukkan pilihan: ");
        scanf("%d", &input);
    }

    if (input == 1){
        printf("Masukkan nama file: ");
        char name[100];
        scanf("%s", &name);
        FILE *f;
        char dest[] = "../test/";
        strcat(dest,name);
        f = fopen(dest, "w");
        
        for(int i = 0; i < NEFF(leq); i++){
            for(int j = 0; j < ELMT(leq,i).LenVal; j++){
                if(ELMT(leq,i).TabVal[j] == left){
                    fputc('(',f);
                }
                else if(ELMT(leq,i).TabVal[j] == right){
                    fputc(')',f);
                }
                else if(ELMT(leq,i).TabVal[j] == 1){
                    fputc('1',f);
                }
                else if(ELMT(leq,i).TabVal[j] == 2){
                    fputc('2',f);
                }
                else if(ELMT(leq,i).TabVal[j] == 3){
                    fputc('3',f);
                }
                else if(ELMT(leq,i).TabVal[j] == 4){
                    fputc('4',f);
                }
                else if(ELMT(leq,i).TabVal[j] == 5){
                    fputc('5',f);
                }
                else if(ELMT(leq,i).TabVal[j] == 6){
                    fputc('6',f);
                }
                else if(ELMT(leq,i).TabVal[j] == 7){
                    fputc('7',f);
                }
                else if(ELMT(leq,i).TabVal[j] == 8){
                    fputc('8',f);
                }
                else if(ELMT(leq,i).TabVal[j] == 9){
                    fputc('9',f);
                }
                else if(ELMT(leq,i).TabVal[j] == 10){
                    fputs("10",f);
                }
                else if(ELMT(leq,i).TabVal[j] == 11){
                    fputs("11",f);
                }
                else if(ELMT(leq,i).TabVal[j] == 12){
                    fputs("12",f);
                }
                else if(ELMT(leq,i).TabVal[j] == 13){
                    fputs("13",f);
                }
                else if(ELMT(leq,i).TabVal[j] == tambah){
                    fputc('+',f);
                }
                else if(ELMT(leq,i).TabVal[j] == kurang){
                    fputc('-',f);
                }
                else if(ELMT(leq,i).TabVal[j] == kali){
                    fputc('*',f);
                }
                else if(ELMT(leq,i).TabVal[j] == bagi){
                    fputc('/',f);
                }
            }
            fputc('\n', f);
        }

        fclose(f);
    }

    return 0;
}