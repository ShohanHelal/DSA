#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, result, i;

    for (i = 0; i < n; i++) {
        printf("%d ", a);
        result = a + b;
        a = b;
        b = result;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}

