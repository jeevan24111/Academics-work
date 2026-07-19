#include<stdio.h>
#include<conio.h>
#define max 50
int p[max],w[max],x[max];
int i,m,n;

 void fraction1(int p[],int  w[],int n,int m){
      double ratio[max];
      int j;
      for(i=1;i<=n;i++){
        ratio[i]=(double)p[i]/w[i];
      }

      for(i=1;i<n-1;i++){
        for(j=i+1;j<n;j++){
           if(ratio[i]<ratio[j]){
            int temp=ratio[i];
            ratio[i]=ratio[j];
            ratio[j]=temp;


            int temp2=p[i];
            p[i]=p[j];
            p[j]=temp2;

            temp2=w[i];
            w[i]=w[j];
            w[j]=temp2;
           }
        }
      }
    //   double currentweight=0;
    //   double currentProfit=0;
    //   for(i=0;i<n;i++){
    //     if(w[i]+currentweight<=m){
    //         x[i]=1;
    //       currentProfit+=p[i];
    //       currentweight+=w[i];
    //     }else{
    //         x[i]=(m-currentweight)/(double)w[i];
    //         currentProfit+=x[i]*p[i];
    //         break;
    //     }
    //   }
    //   printf("optimal solution is  %.2f\n ",currentProfit);
    //   printf("solution vector is\n");
    //   for(i=1;i<=n;i++){
    //     printf(" %d",x[i]);
    //   }

    double currentWeight=0.0;
    double maxProfit=0.0;
    for(i=0;i<n;i++){
        if(w[i]+currentWeight<=m){
            x[i]=1;
            currentWeight+=w[i];
            maxProfit+=p[i];
        }else{
            x[i]=(m-currentWeight)/(double)w[i];
            maxProfit+=x[i]*p[i];
            break;
        }
    }

    printf("\n optimal soltuin is %.2f\n",maxProfit);
    printf("Solution vector is\n");
    for(i=1;i<=n;i++){
        printf("%d ",x[i]);
    }
 }
int main(){
     int i ,j;
     printf("Enter number of objects");
     scanf("%d",&n);
     printf("Enter capacity \n");
     scanf("%d",&m);
     printf("weights\n");
     for(i=1;i<=n;i++){
        scanf("%d",&w[i]);
     }
     printf("profits\n");
     for(i=1;i<=n;i++){
        scanf("%d",&p[i]);
     }
     fraction1(p,w,n,m);
     return 0;
}