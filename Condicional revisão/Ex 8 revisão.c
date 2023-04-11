#include<stdio.h>



    int main()
    {   
        char estado[2];
        float produto,taxa;
        
        printf("Informe o valor do produto: ");
        scanf("%f",&produto);
        system("cls");
        fflush(stdin);
        printf("Agora informe o estado!\n MG-Minas Gerais\n SP-Sao Paulo\n RJ-Rio de Janeiro\n MS-Mato Grosso do Sul\n");
        scanf("%s",estado);
        system("cls");
       
       
         if (strcmp(estado,"MG")==0 || strcmp(estado,"mg")==0)
        {   
            taxa = produto * 0.07; 
            printf("O valor final a ser pago incluindo as taxas de Minas Gerais e de R$ %0.2f",taxa+produto);
        }else if (strcmp(estado,"SP")==0 || strcmp(estado,"sp")==0)
        {
            taxa = produto * 0.12; 
            printf("O valor final a ser pago incluindo as taxas de Sao Paulos e de  R$ %0.2f",taxa+produto);
        }else if (strcmp(estado,"RJ")==0 || strcmp(estado,"rj")==0)
        {
            taxa = produto * 0.15; 
            printf("O valor final a ser pago incluindo as taxas de Rio de Janeiro e de  R$ %0.2f",taxa+produto);
        }else if (strcmp(estado,"MS")==0 || strcmp(estado,"ms")==0)
        {
            taxa = produto * 0.08; 
            printf("O valor final a ser pago incluindo as taxas de Mato Grosso do Sul e de  R$ %0.2f",taxa+produto);
        }else
            printf("ESTADO INCORRETO!");
        
        return 0;
        
        
    
    }
    