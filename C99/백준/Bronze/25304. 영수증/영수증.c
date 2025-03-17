#include <stdio.h>

int main() {
    int amount = 0;
    scanf("%d", &amount);
    int count = 0;
    scanf("%d", &count);

    int total = 0;
    for(int i = 0; i < count ; i++){
        int a = 0;
        int b = 0;
        scanf("%d %d", &a, &b);

        total += a * b;
    }

    if(total == amount){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}
