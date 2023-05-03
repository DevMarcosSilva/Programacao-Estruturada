#include<stdio.h>
#include<string.h>
 int main()
 {
    int mes,i;
    char opcao[3];
     
    do
   {
    printf("Informe o mes desejado: ");
    scanf("%d",&mes);
   
   if (mes<1 || mes>12)
   {
    printf("O NUMERO %d E INVALIDO DIGITE NOVAMENTE UM NUMERO ENTRE 1 E 12! \n",mes);
   }
   if (mes == 1)
    {   
        printf("o numero %d representa o mes de janeiro",mes);
        
    }else if (mes == 2)
    {
        printf("o numero %d representa o mes de Fevereiro",mes);
    }else if (mes == 3)
    {
        printf("o numero %d representa o mes de marco",mes);
    }else if (mes == 4)
    {
        printf("o numero %d representa o mes de abril",mes);
    }else if (mes == 5)
    {
        printf("o numero %d representa o mes de maio",mes);
    }else if (mes == 6)
    {
        printf("o numero %d representa o mes de junho",mes);
    }else if (mes == 7)
    {
        printf("o numero %d representa o mes de julho",mes);
    }else if (mes == 8)
    {
        printf("o numero %d representa o mes de agosto",mes);
    }else if (mes == 9)
    {
        printf("o numero %d representa o mes de setembro",mes);
    }else if (mes == 10)
    {
        printf("o numero %d representa o mes de outubro",mes);
    }else if (mes == 11)
    {
        printf("o numero %d representa o mes de novembro",mes);
    }else if (mes == 12)
    {
        printf("o numero %d representa o mes de dezembro",mes);
    }
    printf("\nDeseja rodar o programa mais um vez? Sim ou Nao.",mes);
    scanf("%s",&opcao);
    
   } while (strcmp(opcao,"sim")==0 && mes<1||mes>12);
    return 0;
 }
 