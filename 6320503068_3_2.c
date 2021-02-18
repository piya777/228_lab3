#include<stdio.h>
    void main(){

        int n ,i ,a ,p ,time[48]={0} ,check=0 ,max=0 ,primetime;
        scanf("%d",&n);
        if(n>=1 && n<10000)
        {
            for( i=0 ; i<n ; i++ )
            {
                scanf("%d %d",&p ,&a);
                if(p>=1 && p<48 &&  a>=1 && a<50000)
                {
                    time[p-1]+=a;
                }
                else
                {
                    check++;
                    break;
                }
            }
            if(check==0)
            {
                for( i=0 ; i<n ; i++ )
                {
                    if(max<time[i])
                    {
                        primetime = i+1;
                        max=time[i];
                    }
                }
                printf("%d %d",primetime ,max);
            }
        }

    }
