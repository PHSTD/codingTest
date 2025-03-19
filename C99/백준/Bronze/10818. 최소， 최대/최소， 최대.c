#include <stdio.h>
#include <limits.h> 

int main() {
    int n = 0;
    scanf("%d", &n);

    int min = INT_MAX;
    int max = INT_MIN;
    int temp;
    for(int i = 0 ; i < n ; i++){
        scanf("%d", &temp);


        if (temp > max) {
            max = temp;
        }
        if (temp < min) {
            min =temp;
        }

    }

    printf("%d %d\n", min, max);

    return 0;
}