#include <stdio.h>
int main(){
    int a[6] = {2, 12, 45, 46, 55};
    int b[6] = {13, 25, 66, 89, 100};
    int c[10];
    int i = 0;
    int j = 0;
    int k = 0;

    while (i<5 & j<5){
        if (a[i] < b[j]){
            c[k] = a[i];
            i += 1;
        }else{
            c[k] = b[j];
            j += 1;
        }
        k += 1;
    }

    while (i < 5){
        c[k] = a[i];
        i += 1;
        k += 1;
    }

    while (j < 5){
        c[k] = b[j];
        j += 1;
        k += 1;
    }
    for (int i=0; i<10; i++){
        printf("%d ", c[i]);
    }
    return 0;
} 