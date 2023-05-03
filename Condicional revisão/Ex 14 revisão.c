#include<stdio.h>
#include<string.h>

int main()
{
    int opcao;
    char opcao2[3];
    

    do
    {
        printf("Informe o numero desejado: ");
        scanf("%d",&opcao);
            
    switch (opcao)
    {
    case 1:
         printf("o numero %d representa o mes de janeiro",opcao);
        break;
    case 2:
        printf("o numero %d representa o mes de Fevereiro",opcao);
        break;
     case 3:
        printf("o numero %d representa o mes de marco",opcao);
        break;
     case 4:
        printf("o numero %d representa o mes de abril",opcao);
        break;
    case 5: 
        printf("o numero %d representa o mes de maio",opcao);
        break;
    case 6: 
        printf("o numero %d representa o mes de junho",opcao);
        break;
    case 7: 
        printf("o numero %d representa o mes de julho",opcao);
        break;
    case 8: 
        printf("o numero %d representa o mes de agosto",opcao);
        break;
    case 9: 
        printf("o numero %d representa o mes de setembro",opcao);
        break;
    case 10: 
        printf("o numero %d representa o mes de outubro",opcao);
        break;
    case 11: 
        printf("o numero %d representa o mes de novembro",opcao);
        break;
    case 12: 
        printf("o numero %d representa o mes de dezembro",opcao);
        break;
        
    default: printf("NUMERO INVALIDO!");
        break;
    }   
        printf("\nDeseja rodar o programa mais um vez? Sim ou Nao.");
        scanf("%s",opcao2);
        
    } while (strcmp(opcao2,"sim")==0);
    
    
    return 0;
}
