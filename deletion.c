#include <stdio.h>
int main(){
    int a[6] = {12, 14, 22, 50};
    int P = 3;
    int i = P;
    int KEY = a[P];

    while (i < 3){
        a[i] = a[i+1];
        i ++;
    }
    for (int i=0; i<3; i++){
        printf("%d ", a[i]);
    }
    return 0;
}