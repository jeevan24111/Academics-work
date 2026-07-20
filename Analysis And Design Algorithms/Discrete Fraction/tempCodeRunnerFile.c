#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define max 100
int p[max],w[max],n,m,x[max];

void fraction(int p[],int w[],int n,int m){
    double ratio[max];
    int i,j;
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
    double currentWeight=0.0;
    double currentProfit=0.0;

    for(i=0;i<n;i++){
        if(w[i]+currentWeight<=m){
            x[i]=1;
            currentWeight+=w[i];
             currentProfit+=p[i];
        }else{
            x[i]=(m-currentWeight)/(double)w[i];
            currentProfit+=x[i]*p[i];
            break;
        }
    }
    printf("max profit is : %.2f\n",currentProfit);
     printf("solution vector is : ");
    for(i=1;i<=n;i++){
       printf("%d ",x[i]);
    }
}

int main(){
    int i;
    printf("enter number of obecjts : ");
    scanf("%d",&n);
    printf("enter number of capacity : ");
    scanf("%d",&m);
      printf("weights\n");
     for(i=1;i<=n;i++){
        scanf("%d",&w[i]);
     }
     printf("profits\n");
     for(i=1;i<=n;i++){
        scanf("%d",&p[i]);
     }
     fraction(p,w,n,m);
     return 0;
}