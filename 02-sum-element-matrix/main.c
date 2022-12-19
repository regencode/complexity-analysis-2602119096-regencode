#include <stdio.h>

int main(int* matrix){

    int total = 0;
    int M,N;

    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            total += matrix[M*i + j];
        }
    }

    return total;

} /* for constant complexity O(1), we have to create a lookup table that covers every possible combination of
 values of the matrix. */