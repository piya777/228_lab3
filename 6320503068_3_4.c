#include<stdio.h>

    void main(){

        unsigned long long int x;
        scanf("%llu",&x);
        int i=2;
        if(x>=0 && x<=2000000000)
        {
            while(x!=0)
            {
                if(x%i==0)
                {
                    if(i==x)
                    {
                        printf("%d",i);
                        break;
                    }
                    x--;
                }
                else
                {
                    i++;
                }
            }

        }
    }
