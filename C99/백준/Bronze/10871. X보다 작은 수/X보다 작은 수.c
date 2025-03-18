#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);

    int* arr = (int*)malloc(sizeof(int) * a);
    if (arr == NULL) {
        return 1;
    }

    int j = 0;  
    for(int i = 0; i < a; i++){
        int z = 0;
        scanf("%d", &z);

        if(z < b){
            arr[j++] = z;
        }
    }

    for(int i = 0; i < j; i++){
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
