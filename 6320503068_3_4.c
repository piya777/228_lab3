#include<stdio.h>

    void main(){

        unsigned long long int x;
        scanf("%llu",&x);
        int i=x;
        if(x>=0 && x<=2000000000)
        {
            while(i>=2)
            {
                if(i%2!=0)
                {
                    printf("%d",i);
                    break;
                }
                else
                {
                    i--;
                }
            }

        }
    }
