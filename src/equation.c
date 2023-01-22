#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"
#include "equation.h"

boolean isOp(int i){
    if (i == tambah || i == kurang || i == kali || i == bagi){
        return true;
    }
    else{
        return false;
    }
}

int adaKurung(Eq eq){
    int i = 0;
    boolean ada = false;

    while (i < eq.LenVal && !ada){
        if (eq.TabVal[i] == left){
            ada = true;
        }
        else{
            i++;
        }
    }

    if (ada){
        return i;
    }
    else{
        return -1;
    }

    return 0;
}

int adaKaliBagi(Eq eq){
    int i = 0;
    boolean ada = false;

    while (i < eq.LenVal && !ada){
        if (eq.TabVal[i] == kali || eq.TabVal[i] == bagi){
            ada = true;
        }
        else{
            i++;
        }
    }

    if (ada){
        return i;
    }
    else{
        return -1;
    }

    return 0;
}

int adaTambahKurang(Eq eq){
    int i = 0;
    boolean ada = false;

    while (i < eq.LenVal && !ada){
        if (eq.TabVal[i] == tambah || eq.TabVal[i] == kurang){
            ada = true;
        }
        else{
            i++;
        }
    }

    if (ada){
        return i;
    }
    else{
        return -1;
    }

    return 0;
}

void solved(int init, int end, int res, Eq *eq){
    eq->TabVal[init] = res;
    for(int i = 0; i < eq->LenVal; i++){
        eq->TabVal[init+1+i] = eq->TabVal[end+1+i];
    }
    eq->LenVal = eq->LenVal - (end-init);
}

int solveEq(Eq *eq){
    // habiskan tanda kurung
    while (adaKurung(*eq) != -1){
        int init = adaKurung(*eq);
        int end = init+1;
        int res;
        boolean found = false;
        int other = 0;
        // cari pasangan tanda kurungnya
        while (!found && end < eq->LenVal){
            if (eq->TabVal[end] == right && other == 0){
                found = true;
            }
            else if (eq->TabVal[end] == left){
                other++;
                end++;
            }
            else if (eq->TabVal[end] == right && other != 0){
                other--;
                end++;
            }
            else{
                end++;
            }
        }

        Eq eqt;
        int j = 0;
        for(int i = init+1; i < end; i++){
            eqt.TabVal[j] = eq->TabVal[i];
            j++;
        }
        eqt.LenVal = end-init-1;
        
        res = solveEq(&eqt);
        solved(init, end, res, eq);
    }

    // habiskan kali bagi
    while (adaKaliBagi(*eq) != -1){
        int op = adaKaliBagi(*eq);
        int init = op - 1;
        int end = op + 1;
        int res;

        if (eq->TabVal[op] == kali){
            res = eq->TabVal[init] * eq->TabVal[end];
        }
        else if ((eq->TabVal[op] == bagi && eq->TabVal[end] == 0) || (eq->TabVal[op] == bagi && eq->TabVal[end] > eq->TabVal[init])){
            res = -99999;
        }
        else if (eq->TabVal[op] == bagi){
            res = div(eq->TabVal[init],eq->TabVal[end]).quot;
        }

        solved(init, end, res, eq);
    }

    // sisa equation
    while (adaTambahKurang(*eq) != -1){
        int op = adaTambahKurang(*eq);
        int init = op - 1;
        int end = op + 1;
        int res;

        if (eq->TabVal[op] == tambah){
            res = eq->TabVal[init] + eq->TabVal[end];
        }
        if (eq->TabVal[op] == kurang){
            res = eq->TabVal[init] - eq->TabVal[end];
        }

        solved(init, end, res, eq);
    }

    return eq->TabVal[0];
}

void showEq(Eq eq){
    for(int i = 0; i < eq.LenVal; i++){
        if (eq.TabVal[i] == tambah){
            printf("+");
        }
        else if (eq.TabVal[i] == kurang){
            printf("-");
        }
        else if (eq.TabVal[i] == kali){
            printf("*");
        }
        else if (eq.TabVal[i] == bagi){
            printf("/");
        }
        else if (eq.TabVal[i] == left){
            printf("(");
        }
        else if (eq.TabVal[i] == right){
            printf(")");
        }
        else{
            printf("%d", eq.TabVal[i]);
        }
    }
    printf("\n");
}

boolean isSame(Eq eq1, Eq eq2){
    // kasus semua operasi sama, hanya 1 jenis operator di eq1 dan eq2
    boolean same = true;
    int i = 0;
    int j = 0;
    int op = -1;
    while (same && i < eq1.LenVal && j < eq2.LenVal){
        // lewati tanda kurung
        while (eq1.TabVal[i] == left || eq1.TabVal[i] == right){
            i++;
        }
        while (eq2.TabVal[j] == left || eq2.TabVal[j] == right){
            j++;
        }
        // catat operator
        if (op == -1 && isOp(eq1.TabVal[i]) && (eq1.TabVal[i] == eq2.TabVal[j])){
            op = eq1.TabVal[i];
        }
        if ((eq1.TabVal[i] != eq2.TabVal[j]) || (isOp(eq1.TabVal[i]) && isOp(eq2.TabVal[j]) && (eq1.TabVal[i] != op))){
            same  = false;
        }
        i++;
        j++;
    }
    return same;
}

boolean isSame1(Eq eq1, Eq eq2){
    if (eq1.LenVal != eq2.LenVal){
        return false;
    }
    else{
        boolean same = true;
        int i = 0;
        while(same && i < eq1.LenVal){
            if(eq1.TabVal[i] != eq2.TabVal[i]){
                same = false;
            }
            i++;
        }
        return same;
    }
}

boolean isSame2(Eq eq1, Eq eq2){
    // kasus semua operator setara, tidak perlu memvariasikan tanda kurung
    boolean same = true;
    int i = 0;
    int j = 0;
    int op = -1;
    while (same && i < eq1.LenVal && j < eq2.LenVal){
        // lewati tanda kurung dan angka
        while (eq1.TabVal[i] == left || eq1.TabVal[i] == right || !isOp(eq1.TabVal[i])){
            i++;
        }
        while (eq2.TabVal[j] == left || eq2.TabVal[j] == right || !isOp(eq2.TabVal[j])){
            j++;
        }
        // catat operator
        if (op == -1 && isOp(eq1.TabVal[i]) && (eq1.TabVal[i] == eq2.TabVal[j])){
            if (eq1.TabVal[i] == kali){
                op = 1;
            }
            if (eq1.TabVal[i] == tambah){
                op = 2;
            }
        }
        // if (!isOp(eq1.TabVal[i]) && !isOp(eq2.TabVal[j]) && (eq1.TabVal[i] != eq2.TabVal[j])){
        //     same = false;
        // }
        if (op == 1){
            if (eq1.TabVal[i] == tambah || eq1.TabVal[i] == kurang || eq2.TabVal[j] == tambah || eq2.TabVal[j] == kurang){
                same = false;
            }
        }
        if (op == 2){
            if (eq1.TabVal[i] == kali || eq1.TabVal[i] == bagi || eq2.TabVal[j] == kali || eq2.TabVal[j] == bagi){
                same = false;
            }
        }
        i++;
        j++;
    }
    return same;
}