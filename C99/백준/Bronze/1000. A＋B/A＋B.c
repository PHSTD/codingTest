#include <stdio.h>

int add (int a, int b){
    return a+b;
}
int main() {
    int a = 0;
    int b = 0;
   scanf("%d %d", &a, &b);
    printf("%d", add(a, b));

    return 0;
}
