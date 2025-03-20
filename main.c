#include <stdio.h>
#include <math.h>

void somatoria (int x,  int y){
    int i;
    long int soma = 0;
    for (i = x; i <= y; i++){
        soma += i;
    }
    printf ("\n\nSoma de %d a %d = %ld\n", x, y, soma);
}

long int somatoriaRecursiva (int x, int y){
    if (x == y){
        return x;
    }
    return x + somatoriaRecursiva(x + 1, y);
}

long int produtoriaRecursiva(int x, int y){
    if (x == y){
        return x;
    }
    return x * produtoriaRecursiva(x + 1, y);
}

int main(void){
    printf ("\n\n ::::::::: Hello World :::::::::\n");
    printf("\n\n digite dois numeros inteiros: ");
    int x, y;
    scanf ("%d %d", &x, &y);
    
    printf ("\n\nSoma de %d a %d = %ld\n", x, y, somatoriaRecursiva(x, y));
    printf ("\n\nProduto de %d a %d = %ld\n", x, y, produtoriaRecursiva(x, y));
    somatoria(x, y);

    return 0;
}