#include<stdio.h>

    void main(){
        int num[5][4] ,i ,j ,one=0 ,two=0 ,three=0 ,four=0 ,check=0 ,sum[5]={0};
        for( i=0 ; i<5 ; i++ )
        {
            scanf("%d %d %d %d",&num[i][0] ,&num[i][1] ,&num[i][2] ,&num[i][3]);
            if(num[i][0]>5 || num[i][1]>5 || num[i][2]>5 || num[i][3]>5
               || num[i][0]<1 || num[i][1]<1 || num[i][2]<1 || num[i][3]<1)
            {

                check++;
                break;

            }
            else
            {
                sum[i] = sum[i] + num[i][0] + num[i][1] + num[i][2] + num[i][3];
            }
        }
        if(check==0)
        {
            if(sum[0]>sum[1] && sum[0]>sum[2] && sum[0]>sum[3])
            {
                printf("1 %d",sum[0]);
            }
            else if(sum[1]>sum[0] && sum[1]>sum[2] && sum[0]>sum[3])
            {
                printf("2 %d",sum[1]);
            }
            else if(sum[2]>sum[0] && sum[2]>sum[1] && sum[2]>sum[3])
            {
                printf("3 %d",sum[2]);
            }
            else if(sum[3]>sum[0] && sum[3]>sum[1] && sum[3]>sum[2])
            {
                printf("4 %d",sum[3]);
            }
        }

    }
