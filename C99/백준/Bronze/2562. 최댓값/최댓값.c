#include <stdio.h>

int main(void) {
    int max = 0;
    int index = 0;
    int num;
    
    for (int i = 1; i <= 9; i++) {
        scanf("%d", &num);
        if (num > max) {
            max = num;
            index = i;
        }
    }
    
    printf("%d\n%d\n", max, index);
    return 0;
}