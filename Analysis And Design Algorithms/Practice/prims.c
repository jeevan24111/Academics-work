#include<stdio.h>
#define INF 999
#define max 100
int prims(int c[10][10],int s,int n){
    int i,j,k,sum=0,min,v[10],ver[10],d[10],u;
    for(i=1;i<=n;i++){
        ver[i]=s;
        d[i]=c[s][i];
        v[i]=0;
    }
    v[s]=1;
    for(i=1;i<n-1;i++){
        min=INF;
        for(j=1;j<=n;j++){
            if(v[j]==0 && d[j]<min){
                min=d[j];
                u=j;
            }
        
        v[u]=1;
        sum=sum+d[u];
        printf("cost from %d to %d is %d\n",ver[u],u,sum);
        }
        for(j=1;j<=n;j++)
            if(v[j]==0 && c[u][j]<d[j]){
                d[j]=c[u][j];
                ver[j]=u;
            }
        
    }
    return sum;
}
int main(){

    int i,j,n,s,c[10][10],max_profit;
    printf("Enter Number of vertices\n");
    scanf("%d",&n);
    printf("Enter Graph Data\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&c[i][j]);
        }
    }
    printf("Enter Source Node\n");
    scanf("%d",&s);
    max_profit=prims(c,s,n);
    printf("Total cost is %d :",max_profit);
    return 0;
}