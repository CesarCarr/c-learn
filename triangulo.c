//Faça um algoritmo que 3 valores (A,B,C). Verificar se formam um triângulo,
//se sim retorna qual o tipo do triângulo e senão retornar a mensagem  não é um triângulo

#include<stdio.h>
#include<locale.h>
#include<windows.h>

main(){
    setlocale(LC_ALL,"Portuguese");
    float a,b,c=0;

    printf("A = ");
    scanf("%f",&a);
    printf("B = ");
    scanf("%f",&b);
    printf("C = ");
    scanf("%f",&c);

    if((a < b + c) && (b < a + c) && (c < b + a)){
        printf("É um triângulo\n");
        if((a == b) && (b == c)){
            printf("Triângulo Equilátero\n");
        }
        else{
            if((a != b) && (b != c) && (c != a)){
                printf("Triângulo Escaleno\n");
            }
            else {
                printf("Triângulo Isósceles\n");
            }
        }
    }
    else{
        printf("Não é triângulo\n");
    }
}

