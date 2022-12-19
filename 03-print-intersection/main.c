#include <stdio.h>

int main(int* x, int* y){

    for(int i = 0; i < sizeof(x)/sizeof(int) ; i++){
        for(int j = 0; j < sizeof(y)/sizeof(int); j++){
            if(x[i] == y[j]){
                printf("%d ", &x[i]);
                break;
            }
        }
    }
}