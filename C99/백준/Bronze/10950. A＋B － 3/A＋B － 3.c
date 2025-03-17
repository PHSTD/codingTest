#include <stdio.h>

int main() {
    int num = 0;
    scanf("%d", &num);

    for(int i = 0; i < num ; i++){
        int a = 0;
        int b = 0;

        scanf("%d %d", &a, &b);


        printf("%d\n", a + b);
    }

    return 0;
}
