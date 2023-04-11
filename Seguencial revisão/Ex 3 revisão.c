#include<stdio.h>


        int main()
        {
            int n1;  float n2,n3; double ende;
            
            char string[10],letra;
            
             
            

            printf("Digite um numero inteiro: \n");
            scanf("%d",&n1);
            system("Cls");
            
            printf("Digite 2 numeros reais: \n");
            scanf("%f%f",&n2,&n3);
            system("Cls");
            
            fflush(stdin);
            printf("Digite uma letra: ");
            scanf("%c",&letra);
            system("Cls");
            
            printf("Digite uma string: ");
            scanf("%s",string);
            system("Cls");
            
            
            printf("Digite um endereco: \n");
            scanf("%lf",&ende);
            system("Cls");
            
            
            printf("O numero inteiro que voce digitou foi : %d\n",n1);
            printf("Os 2 numeros reais que voce digitou foram  %0.1f e %0.1f \n",n2,n3);
            printf("A letra digitada foi : %c \n",letra);
            printf("A string digitada foi : %s\n",string);
            printf("o endereço de memoria e : %f \n",ende);
            return 0;
        }
        