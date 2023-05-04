#include<stdio.h>
    int main(int argc, char const *argv[])
    {   
        int i;
        for ( i = 10; i >= 0; i--)
        {   
            printf("  %d ",i);
            sleep(1);
            system("cls");
            
        }printf("FIM!");
        
        return 0;
    }
    