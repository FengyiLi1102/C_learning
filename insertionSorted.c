#include <stdio.h>
int main(){
    int a[6] = {14, 22, 40, 80};
    for (int i=0; i<5; i++){
        printf("%d \t", a[i]);
    }
    printf("\n");
    int KEY = 25;
    int i = 3;
    
    while (a[i] > KEY){
        a[i+1] = a[i];
        i = i - 1;
    }
    a[i+1] = KEY;
    
    for (int i=0; i<5; i++){
        printf("%d \t", a[i]);
    }
    return 0;
}