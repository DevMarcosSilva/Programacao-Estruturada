#include<stdio.h>
#include<math.h>
    int main()
    {
        const PI =  3.14159;
        float area,volume,raio;

        printf("Informe o valor do raio: ");
        scanf("%f",&raio);
        system("cls");

        volume = (4/3.0)*PI*pow(raio,3);
        area = 4*PI*pow(raio,2);

        printf("A area da superficie e de : %0.4f \ne seu volume corresponde a : %0.4f",area,volume);
    
        return 0;
    }
    