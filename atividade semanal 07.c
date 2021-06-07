#include <stdio.h>

int main () {

    int larguraInicial;
    int altura;
    int largura;
    scanf ("%i", &largura);
    scanf ("%i", &altura);

    larguraInicial = largura;

        while (largura > 0) {
            printf("#");
            largura--;
        
            if (largura == 0){
                while (altura > 1){
                    printf("\n");
                    altura--;
                    largura = larguraInicial;
                    break;
                }
            }
        }
    
    return 0;
}