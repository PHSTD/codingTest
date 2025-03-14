#include <stdio.h>

int main() {
    int x, y = 0;
    scanf("%d %d", &x, &y);

    if((x >= 0) && (y >= 0)){
        if((x == 0) && (y == 0)){
            printf("");
        }else {
            printf("1");
        }
    }else if ((x >= 0) && (y < 0)) {
        printf("4");
    }
    else if ((x < 0 ) && (y < 0)){
        printf("3");
    }else if ((x < 0) && (y >= 0)) {
        printf("2");
    }

    return 0;
}