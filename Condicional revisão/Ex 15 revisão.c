#include<stdio.h>
#include<string.h>

    int main()
    {   int dia;
        char opcao[3];
        
        do
    {   printf("Informe o dia da semana de 1 a 7 : ");
        scanf("%d",&dia);
        
        switch (dia)
    {
    case 1:    
          printf("o numero %d representa Domingo ",dia);
        break;
    case 2:
         printf("o numero %d representa Segunda-feira ",dia);
        break;
    case 3:
        printf("o numero %d representa Terca-feira ",dia);
        break;
     case 4:
        printf("o numero %d representa Quarta-feira ",dia);
        break;
     case 5:
        printf("o numero %d representa Quinta-feira ",dia);
        break;
    case 6: 
        printf("o numero %d representa Sexta-feira ",dia);
        break;
    case 7: 
        printf("o numero %d representa Sabado ",dia);
        break;
    
    default: printf("NUMERO INVALIDO!");
        break;
    }
        printf("\nDeseja rodar o programa novamente? Sim ou Nao.");
        scanf("%s",opcao);
    
    } while (strcmp(opcao,"sim")==0);
        
       
    }