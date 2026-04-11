#include <stdio.h>
int main(){
          //declaração de variaveis

    int mes, ano;
    printf("Digite um numero de 1 a 12 corespondente ao mes.\n");
    scanf("%d",&mes);
         // processamento 
    switch (mes)
    { 

        case 1:
                printf("Janeiro tem 31 dias\n");
                break;  
        case 2:
            printf("Digite o ano: ");
            scanf("%d", &ano);

            if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
            {
                printf("Fevereiro tem 29 dias (ano bissexto).\n");
            }
            else
            {
                printf("Fevereiro tem 28 dias.\n");
            }
            break;
        case 3:
                printf("Março tem 31 dias\n");
                break;
        case 4:
                printf("Abril tem 30 dias\n");
                break;
        case 5:
                printf("Maio tem 31 dias\n");
                break;
        case 6:
                printf("Junho tem 30 dias\n");  
                break;
        case 7:
                printf("Julho tem 31 dias\n");
                break;
        case 8:
                printf("Agosto tem 31 dias\n");
                break;
        case 9:
                printf("Setembro tem 30 dias\n");
                break;
        case 10:
                printf("Outubro tem 31 dias\n");
                break;
        case 11:
                printf("Novembro tem 30 dias\n");  
                break;
        case 12:
                printf("Dezembro tem 31 dias\n");
                break;
                
        default:
            printf("Mes invalido!\n");;        
    }
    return 0;
}