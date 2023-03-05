//O programa deve pedir ao usuario tres valores inteiros e retornar na soma entre eles

#include <stdio.h>

int main(void){

    int num0, num1, num2;

    printf("Informe tres numeros inteiros quaisquer: \n");
    scanf("%d %d %d", &num0, &num1, &num2);

    printf("A soma entre os tres valores informados eh: %d\n", num0 + num1 + num2);

    return 0;
}
