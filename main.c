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
int main(void){
    printf ("\n\n ::::::::: Hello World :::::::::\n");
    printf("\n\n digite dois numeros inteiros: ");
    int x, y;
    scanf ("%d %d", &x, &y);
    
    somatoria(x, y);

    return 0;
}