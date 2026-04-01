#include <stdio.h>

int main(){
          //declaração de variaveis

    int mes;
    printf("Digite um numero de 1 a 12 corespondente ao mes e o semestre.\n");
    scanf("%d",&mes);
         // processamento 
    switch (mes)
    { 

        case 1:
        case 2:
        case 3:
                printf("1° Trimestre\n");
                printf("Janeiro/Fevereiro/Março\n");
                break;

        case 4:
        case 5:
        case 6:
                printf("2° Trimestre\n");
                printf("Abril/Maio/Junho\n");
                break;

        case 7:
        case 8:
        case 9:
                printf("3° Trimestre\n");
                printf("Julho/Agosto/Setembro\n");
                break;
        case 10:
        case 11:
        case 12:
                printf("4° Trimestre\n");
                printf("Outubro/Novembro/Dezembro\n");
                break;


        default:    
                    printf("Esse numero nao coresponde a nenhum mes ou trimestre.\n");

    }


    return 0;
}
