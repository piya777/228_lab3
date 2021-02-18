#include<stdio.h>

    void main(){

        int k,j,i=2,check=0;
        scanf("%d",&k);
        while(1)
        {
            if(k%i==0)
            {
                printf("%d\n",i);
                k=k/i;
            }
            else
            {
                i++;
            }
            if(k==0)
            {
                check++;
            }
            if(check==2)
            {
                printf("0");
                break;
            }
        }

    }
