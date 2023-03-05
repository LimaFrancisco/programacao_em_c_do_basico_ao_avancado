//O programa deve pedir do usuario um numero real e retornar o quadrado desse valor

#include <stdio.h>

int main(void){

    float num = 0;

    printf("Informe um numero real qualquer: \n");
    scanf("%f", &num);

    printf("O numero inteiro informado eh: %f\n", num * num);

    return 0;
}
