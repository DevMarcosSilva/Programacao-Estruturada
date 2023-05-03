#include<stdio.h>
#include<string.h>  
    int main(int argc, char const *argv[])
    {
        int ddd;
        char opcao[3];
    
    do
    {
       printf("Informe o DDD!\n 61 - Brasilia\n 71 - Salvador\n 11 - Sao Paulo\n 21 - Rio de Janeiro\n 32 - Juiz de Fora\n 19 - Campinas\n 27 - Vitoria\n 31 - Belo Horizonte\n");
       scanf("%d",&ddd);

       switch (ddd)
       {
      case 61:    
          printf("o DDD %d representa Brasilia ",ddd);
        break;
    case 71:
         printf("o DDD %d representa Salvador ",ddd);
        break;
    case 11:
        printf("o DDD %d representa Sao Paulo ",ddd);
        break;
     case 21:
        printf("o DDD %d representa Rio de Janeiro ",ddd);
        break;
     case 32:
        printf("o DDD %d representa Juiz de Fora ",ddd);
        break;
    case 19: 
        printf("o DDD %d representa Campinas ",ddd);
        break;
    case 27: 
        printf("o DDD %d representa Vitoria ",ddd);
        break;
    case 31:
        printf("o DDD %d representa Belo Horizonte  ",ddd);
        break;
       
    default: printf("DDD INVALIDO!");
        break;
    }
        printf("\nDeseja rodar o programa novamente? Sim ou Nao.");
        scanf("%s",opcao);
       
    } while (strcmp(opcao,"sim")==0||strcmp(opcao,"Sim")==0);
     
       
        
        return 0;
    }
    