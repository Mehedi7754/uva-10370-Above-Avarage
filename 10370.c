#include<stdio.h>
int main()
{
    int a[1000],i,j;
    double avg,n,t,sum,count,per;
    scanf("%lf",&t);
    for(j=0;j<t;j++){
        sum=0;
        count=0;
        scanf("%lf",&n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            sum=sum+a[i];
        }
        avg=sum/n;
        for(i=0;i<n;i++){
           if(a[i]>avg){
            count++;
           }
        }
        per=(count*100)/n;
        printf("%.3lf%%\n",per);
    }

    return 0;
}
