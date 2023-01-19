#include <stdio.h>
#include "equation.c"

void combin1(int arr[4], int op[4]){
    // _ op _ op _ op _
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
                    showEq(eq);
                }
            }
        }
    }

}

void combin2(int arr[4], int op[4]){
    // ( _ op _ ) op ( _ op _ )
    Eq eq, eqs;
    eq.TabVal[0] = left;
    eq.TabVal[1] = arr[0];
    for(int i = 0; i < 4; i++){
        eq.TabVal[2] = op[i];
        eq.TabVal[3] = arr[1];
        eq.TabVal[4] = right;
        for(int j = 0; j < 4; j++){
            eq.TabVal[5] = op[j];
            eq.TabVal[6] = right;
            eq.TabVal[7] = arr[2];
            for(int k = 0; k < 4; k++){
                eq.TabVal[8] = op[k];
                eq.TabVal[9] = arr[3];
                eq.TabVal[10] = right;
                eq.LenVal = 11;
                eqs = eq;
                if (solveEq(&eqs) == 24){
                    showEq(eq);
                }
            }
        }
    }
}

void combin3(int arr[4], int op[4]){
    // ( _ op _ ) op _ op _
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
                    showEq(eq);
                }
            }
        }
    }
}

void combin4(int arr[4], int op[4]){
    // _ op ( _ op _ ) op _
    Eq eq, eqs;
    eq.TabVal[0] = arr[0];
    for(int i = 0; i < 4; i++){
        eq.TabVal[1] = op[i];
        eq.TabVal[2] = right;
        eq.TabVal[3] = arr[1];
        for(int j = 0; j < 4; j++){
            eq.TabVal[4] = op[j];
            eq.TabVal[5] = arr[2];
            eq.TabVal[6] = left;
            for(int k = 0; k < 4; k++){
                eq.TabVal[7] = op[k];
                eq.TabVal[8] = arr[3];
                eq.LenVal = 9;
                eqs = eq;
                if (solveEq(&eqs) == 24){
                    showEq(eq);
                }
            }
        }
    }
}

void combin5(int arr[4], int op[4]){
    // _ op _ op ( _ op _ )
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
                    showEq(eq);
                }
            }
        }
    }
}

void combin6(int arr[4], int op[4]){
    // ( _ op _ op _ ) op _
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
                    showEq(eq);
                }
            }
        }
    }
}

void combin7(int arr[4], int op[4]){
    // _ op ( _ op _ op _ )
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
                    showEq(eq);
                }
            }
        }
    }
}

void combin8(int arr[4], int op[4]){
    // (( _ op _ ) op _ ) op _
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
                    showEq(eq);
                }
            }
        }
    }
}

void combin9(int arr[4], int op[4]){
    // ( _ op ( _ op _ )) op _
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
                    showEq(eq);
                }
            }
        }
    }
}

void combin10(int arr[4], int op[4]){
    // _ op (( _ op _ ) op _ )
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
                    showEq(eq);
                }
            }
        }
    }
}

void combin11(int arr[4], int op[4]){
    // _ op ( _ op ( _ op _ ))
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
                    showEq(eq);
                }
            }
        }
    }
}

int main(){
    int op[4];
    op[0] = tambah;
    op[1] = kurang;
    op[2] = kali;
    op[3] = bagi;

    int arr[4];
    int temp;
    scanf("%d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3]);

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            
            combin1(arr,op);
            combin2(arr,op);
            combin3(arr,op);
            combin4(arr,op);
            combin5(arr,op);
            combin6(arr,op);
            combin7(arr,op);
            combin8(arr,op);
            combin9(arr,op);
            combin10(arr,op);
            combin11(arr,op);
        }
    }

    return 0;
}