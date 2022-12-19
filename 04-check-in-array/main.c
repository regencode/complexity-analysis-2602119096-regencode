#include <stdio.h>

int check(int* x, int* y, int k){

    for(int i = 0; i < sizeof(x)/sizeof(int) ; i++){
        if(x[i] == k){
            for(i = 0; i < sizeof(y)/sizeof(int); i++){
                if(y[i] == k){
                    return 1;
                }
            }
        }
    }
    return 0;
}