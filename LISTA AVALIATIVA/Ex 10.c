#include<stdio.h>

    int main()
    {
        int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,media;

        printf("Insira 10 numeros inteiros: \n");
        scanf("%d%d%d%d%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10);

        media=(n1+n2+n3+n4+n5+n6+n7+n8+n9+n10)/10;

        printf("A media dos numeros digitados e : %d",media);
        return 0;
    }
    