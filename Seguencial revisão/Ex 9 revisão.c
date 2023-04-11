#include<stdio.h>   
   
    int main()
    {   
        char nome[50];
        float sal,totalvendas,valreceber;
        
        printf("digite o seu nome:");
         gets(nome);
          system("cls");
        printf("Digite o seu salario :");
         scanf("%f",&sal);
          system("cls");
        printf("Digite o total de vendas do mes :");
        scanf("%f",&totalvendas);
         system("cls");
       
        valreceber = totalvendas *0.15;

        printf("%s este mes voce recebere um total de %0.2f! ",nome,valreceber+sal);
        return 0;
    }
    