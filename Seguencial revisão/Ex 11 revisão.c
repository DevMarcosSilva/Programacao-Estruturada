#include <stdio.h>

    int main()
    {
        float area,volume,raio;
        const PI=3.14159;

        printf("Informe o valor do raio: ");
        scanf("%f",&raio);

        volume = ((4/3.0) * PI * pow(raio,3));
        area = 4 * PI * pow(raio,2);

        printf("A area da esfere e : %f\n",area);
        printf("o volume da esfere e : %f",volume);
        return 0;
    }
    
   