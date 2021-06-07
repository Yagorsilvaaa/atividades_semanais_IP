#include<stdio.h>

double cor (char indentificador){
    switch (indentificador){
    case 1:
        printf("verde");
        break;
    case 2:
        printf("amarelo");
        break;
    case 3:
        printf("azul");
        break;
    case 4:
        printf("branco");
        break;
    default:
        printf("valor invalido");
        break;
    }
}

void conjecturaDeCollatz(int n){
    printf("\nImprimindo sequencia iniciando em %i\n", n);
    while (n>1){
        if (n % 2 == 0) n = n/2;
        else n = 3*n + 1;
        printf("%i\n",n);
    }
}


int main(){
    char resposta;
    scanf("%i", &resposta);
    cor(resposta);
    /*conjecturaDeCollatz(67);*/
    return 0; 
}