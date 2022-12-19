#include <stdio.h>

int main(){

    int n = 1;
    int total = 0;

    while(n <= 10){
        total += n;
        n++;
    }

    return total;
} //For constant complexity O(1), we can use the arithmetic sum formula