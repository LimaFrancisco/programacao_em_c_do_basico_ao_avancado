//O programa deve podir um numero real ao usuario e retornar esse valor na tela

#include <stdio.h>

int main(void){

    float num = 0;

    printf("Informe um numero real qualquer: \n");
    scanf("%f", &num);

    printf("O numero real informado eh: %f\n", num);

    return 0;
}
