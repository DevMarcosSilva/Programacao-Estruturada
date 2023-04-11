#include<stdio.h>

    int main(int argc, char const *argv[])
    {
        float Altura,ResM,ResF;
        char Sexo;

        printf("Informe sua altura : \n");
        scanf("%f",&Altura);
        fflush(stdin);
        system("cls");
        printf("Agora Informe o sexo (M) para Masculino e (F) para feminino : ");
        scanf("%c",&Sexo);
        system("cls");   

        if (Sexo == 'm'|| Sexo == 'M')
        {       
            ResM=(72.7*Altura)-58;
            printf("O seu peso ideal masculino e: %0.2f",ResM);
        }else if (Sexo == 'f'||Sexo == 'F')
        {
            ResF=(62.1*Altura)-44.7;
            printf("O seu peso ideal feminino e: %0.2f",ResF);
        }
        
        

        return 0;
    }
    