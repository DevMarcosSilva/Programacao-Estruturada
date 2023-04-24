#include<stdio.h>
#include<math.h>
    int main()
    {
        float x1,x2,y1,y2,distancia;

        printf("Informe oS valores de X1, X2, Y1 e Y2 ");
        scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
        system("cls");

        distancia = sqrt(pow((x2-x1),2) + pow((y2-y1),2));

        printf("A distancia entre os 4 pontos e de : %0.4f",distancia);
        return 0;
    }
    