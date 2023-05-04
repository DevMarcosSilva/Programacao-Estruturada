#include<stdio.h>
#include<string.h>
    int main()
    {
        int op,n1,n2,soma,subtracao,multiplicacao,divisao;
        char opcao[3];
        do
        {
            printf("Escolha uma das operacoes matematicas abaixo:\n 1 - Soma\n 2 - Subtracao \n 3 - Multiplicacao \n 4 - Divisao \n");
            scanf("%d",&op);
            system("cls");
            
            if (op== 1)
            {
                printf(" ok vamos Somar!\n mas antes precisamos dos 2 valores a seram somados!\n");
                printf(" Digte os valores: ");
                scanf("%d%d",&n1,&n2);
                soma = n1+n2;
                printf("O resultado da soma entre %d + %d resulta em %d \n",n1,n2,soma);
            }else if (op==2)
            {
                printf(" ok vamos Subtrair!\n mas antes precisamos dos 2 valores a seram Subtraidos!\n");
                printf(" Digte os valores: ");
                scanf("%d%d",&n1,&n2);
                subtracao = n1-n2;
                printf("O resultado da Subtracao entre %d + %d resulta em %d \n",n1,n2,subtracao);
            }else if (op==3)
            {
                printf(" ok vamos Multiplicar!\n mas antes precisamos dos 2 valores a seram multiplicasdos!\n");
                printf(" Digte os valores: ");
                scanf("%d%d",&n1,&n2);
                multiplicacao = n1*n2;
                printf("O resultado da soma entre %d + %d resulta em %d \n",n1,n2,multiplicacao);
            }else if (op==4)
            {
                printf(" ok vamos Dividir!\n mas antes precisamos dos 2 valores a seram Divididos!\n");
                printf(" Digte os valores: ");
                scanf("%d%d",&n1,&n2);
                divisao = n1/n2;
                printf("O resultado da soma entre %d + %d resulta em %d \n",n1,n2,divisao);
            }else printf("OPERACAO INVALIDA!");
            printf("Deseja rodar o programa novamente?Sim ou Nao. ");
            scanf("%s",opcao);
            
           
            
            
            
        } while (strcmp(opcao,"Sim")==0);
        
        
        return 0;
    }
    