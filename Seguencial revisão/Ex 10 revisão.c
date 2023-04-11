#include<stdio.h>
#include<math.h>

        int main()
        {
            double x1,x2,y1,y2,dist;

            printf("Digite os valores de x1, x2, y1, y2 :");
            scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);

            dist = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

            printf("A distancia entre p1 e p2 e %.4lf",dist);
            return 0;
        }
        