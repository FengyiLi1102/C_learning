#include <stdio.h>
int main(){
    int a[6] = {1, 12, 23, 44};
    int i = 0;
    int KEY = 1;

    while (a[i] != KEY & i < 4){
        i += 1;
    }

    while (i < 4){
        a[i] = a[i+1];
        i += 1;
    }

    for (int i=0; i<3; i++){
        printf("%d ", a[i]);
    }
}