#include<stdio.h>
// #define MAX 100
#define INF 999


int prims(int c[10][10],int n,int s){
    int i,j,k,u,d[10],ver[10],v[10],min,sum=0;

    for(i=1;i<=n;i++){
        ver[i]=s;
        d[i]=c[s][i];
        v[i]=0;      
    }
     v[s]=1;

        for(i=1;i<=n-1;i++){
            min=INF;
            for(j=1;j<=n;j++)
                if(v[j]==0 && d[j]<min){
                    min=d[j];
                    u=j;
                }
        
                v[u]=1;
              sum=+sum+d[u];
             printf("%d -> %d sum is = %d",ver[u],u,sum);
    

            for(j=1;j<=n;j++){
                if(v[j]==0 && c[u][j]<d[j]){
                    d[j]=c[u][j];
                    ver[j]=u;
                }
            }

        }
       
      return sum;
}
int main(){
    int i,j,n,c[10][10],s,res;

    printf("enter the number of vertices\n");
    scanf("%d",&n);

    printf("Enter Graph Data\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&c[i][j]);
        }
    }
    printf("Enter the source node\n");
    scanf("%d",&s);
    res=prims(c,n,s);
    printf("\nTotal Cost is %d ",res);
   
    return 0;
}
