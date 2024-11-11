//Lucas Costa Guimarães
//dificuldade em trabalhar com a lógica de fibonacci na função recursiva
#include <stdio.h>

int fibonacci(int n) {
    int a = 0, b = 1, next;
    if (n == 0) {
        return 0; 
    } else if (n == 1) {
        return 1;
    } else {
        
        for (int i = 2; i <= n; i++) {
            next = a + b; 
            a = b;        
            b = next;     
        }
        return b; 
    }
}

int main() {
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("O %d-esimo termo da serie de Fibonacci eh: %d\n", n, fibonacci(n));

    return 0;
}
