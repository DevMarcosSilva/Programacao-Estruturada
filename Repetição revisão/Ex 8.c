#include<stdio.h>
    int main(int argc, char const *argv[])
    {
        int num,media,i,cont;
        
        for ( i = 0; i < 10; i++)
        {
            printf("informe o numero %d ",i+1);
            scanf("%d",&num);
            cont=num+=cont;
            
        }media= cont/10;
        printf("a media e  %d ",media);
        
        return 0;
    }
    