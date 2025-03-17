#include <stdio.h>

int main() {

	for(int i = 1; ; i++) {
        int a = 0;
        int b = 0;
        scanf("%d %d", &a, &b);


        if(a == 0 && b == 0){
            break;
        }
        printf("%d\n", a + b);
	}

	return 0;
}