#include <stdio.h>
int main(){
    int a[6] = {14, 22, 70, 80};
    int i = 3;
    int P = 2;
    int KEY = 90;
    while (i>P){
        a[i+1] = a[i];
        i = i - 1;
    }
    a[i] = KEY;
    for (int i=0; i<6; i++){
        printf("%d \t", a[i]);
    }
    return 0;
}