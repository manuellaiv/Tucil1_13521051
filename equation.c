#include <stdio.h>
#include "equation.h"
#include "boolean.h"

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
        int end = init;
        int res;
        boolean found = false;
        while (!found && end < eq->LenVal){
            if (eq->TabVal[end] == right){
                found = true;
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
        if (eq->TabVal[op] == bagi && eq->TabVal[end] != 0){
            res = eq->TabVal[init] / eq->TabVal[end];
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