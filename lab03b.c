#include <stdio.h>

int main(){

    /*DECLARAÇÃO DE VARIAVEIS*/
    char comando, aponta, auxx, auxy;
    int x , y, passo, raio;
    x = 0;
    y = 0;
    aponta = 'N';
    /*PEGA O VALOR DO RAIO*/
    scanf("%d", &raio);
    while (comando != 'X'){ /*APONTAR O ROBO PARA A DIREÇÃO INDICADA NA ENTRADA*/
        scanf("%c", &comando);
        
        if (aponta == 'N' && comando == 'R'){
            aponta = 'E';
        }
        else if (aponta == 'N' && comando == 'L'){
            aponta = 'W';
        }
        else if (aponta == 'E' && comando == 'R'){
            aponta = 'S';
        }
        else if (aponta == 'E' && comando == 'L'){
            aponta = 'N';
        }
        else if (aponta == 'S' && comando == 'R'){
            aponta = 'W';
        }
        else if (aponta == 'S' && comando == 'L'){
            aponta = 'E';
        }
        else if (aponta == 'W' && comando == 'R'){
            aponta = 'N';
        }
        else if  (aponta == 'W' && comando == 'L'){
            aponta = 'S';
        }
        else if (comando == 'F'){
            scanf("%d", &passo);
        }

        /*CÓDIGO RESPONSÁVEL POR SOMAR AS COORDENADAS*/
        if (comando == 'F' && ((x*x + y*y) <= raio*raio )){
            if (aponta == 'N'){
                y = y + passo;
            }
            else if (aponta == 'S' ){
                y = y - passo;
            }
            else if (aponta == 'E'){
                x = x + passo;
            }
            else if (aponta == 'W'){
                x = x - passo;
            }
        }
    }
    /*CÓDIGO RESPONSÁVEL POR MOSTRA A COORDENADA*/
    if ( x >=0){
        auxx = 'E';
    }
    else {
        auxx = 'W';
        x = -x;
    }
    if (y >= 0){
        auxy = 'N';
    }
    else {
        auxy = 'S';
        y = -y;
    }
    /*IMPRIME O VALOR*/

    printf ("%d%c %d%c", x, auxx, y, auxy);
    return 0;
}