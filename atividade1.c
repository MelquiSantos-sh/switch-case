#include <stdio.h>
#include <ctype.h>

int main(){
           //entrada de dados 
char categoria;
          // declaraçao de variaveis 

printf("Digite uma a letra da categoria para encontramos o veiculo que e permitido dirigir.\n");
printf("Digite apenas a letra corespondente a categoria.\n");
    scanf("%c",&categoria);
categoria = toupper(categoria); // converte para maiúscula
switch (categoria)    
        // processamento
{

    case 'A':
              printf("Moto.\n");
              break;
    case 'B':
              printf("Carro.\n");
              break;
    case 'C':
              printf("Caminhão.\n");
              break;
    case 'D':
              printf("Ônibus.\n");
              break;
    case 'E':
              printf("Carreta.\n");
              break;
         //saidas
              
    default:
             printf("Essa letra nao coresponde a nenhuma categoria!\n");
             printf("Você pode nao pode dirigir!!!");
    
}





    return 0;
}
