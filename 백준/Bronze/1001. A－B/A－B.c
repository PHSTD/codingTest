#include <stdio.h>

int sub(int a, int b){
    return a-b;
}
int main() {
    int a = 0;
    int b = 0;
   scanf("%d %d", &a, &b);
    printf("%d", sub(a, b));

    return 0;
}
