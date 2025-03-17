#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    return gcd(b, a % b);
}

int* solution(int numer1, int denom1, int numer2, int denom2) {
    int n1 = numer1 * denom2+ numer2 * denom1;
    int n2 = denom1 * denom2;

    int divisor = gcd(n1, n2);

    n1 /= divisor;
    n2 /= divisor;

    int* answer = (int*)malloc(sizeof(int) * 2);
    answer[0]  = n1;
    answer[1] = n2;
    return answer;
}