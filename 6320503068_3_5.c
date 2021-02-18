#include<stdio.h>

    void main(){

        int n ,prime[3]={0} ,i=0 ,j ,p=2 ,check=0;
        scanf("%d",&n);
        int nold=n;
        if(n>0 && n<10000)
        {
            while(n>0)
            {
                if(n%p==0)
                {
                    prime[i]=p;
                    n/=p;
                    check++;
                    i++;
                }
                p++;
                if(check==3)
                {
                    break;
                }
                if(p>n)
                {
                    break;
                }
            }
            if(prime[0]!=0 && prime[1]!=0 && prime[2]!=0)
            {
                printf("%d is a Lucky Number.",nold);
            }
            else
            {
                printf("%d is not a Lucky Number.",nold);
            }
        }

    }
