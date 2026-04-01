#include <stdio.h>

int main(){
          //declaração de variaveis

    int dia;
    printf("Digite um numero de 1 a 7 corespondente ao dia da semana.\n");
    scanf("%d",&dia);
         // processamento 
    switch (dia)
    { 

        case 1:
                    printf("Domingo\n");
                    break;
        case 2:
                    printf("Segunda\n");
                    break;
        case 3:
                    printf("Terça-Feira\n");
                    break;
        case 4:
                    printf("Quarta-Feira\n");
                    break;
        case 5:
                    printf("Qunita-Feira\n");
                    break;
        case 6:
                    printf("Sexta-feira\n");
                    break;
        case 7:
                    printf("Sabado\n");
                    break;


        default:    
                    printf("Esse numero nao coresponde a nenhum dia da semana.\n");

    }


    return 0;
}