#include<stdio.h>
#define INF 999

void dijkstra(int c[10][10],int n,int s,int d[10]){
    int i,j,u,v[10],min;

    for(i=1;i<=n;i++){
        d[i]=c[s][i];
        v[i]=0;
    }
    v[s]=1;
    for(i=1;i<=n;i++){
        min=INF;
        for(j=1;j<=n;j++){
            if(v[j]==0 && d[j]<min){
                min=d[j];
                u=j;
            }
        }
        v[u]=1;

         for(j=1;j<=n;j++){
            if(v[j]==0 && (d[u]+c[u][j]<d[j])){
                d[j]=d[u]+c[u][j];
            }
        }
    }
}
int main(){
    int i,j,n,c[10][10],s,d[10];
    
    printf("Enter the number of Vertices\n");
    scanf("%d",&n);

     printf("Enter Graph Data\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&c[i][j]);
        }
    }
    printf("Enter the source node\n");
    scanf("%d",&s);
    dijkstra(c,n,s,d);

    for(i=1;i<=n;i++){
        printf("\nShortest distance from %d to %d is %d",s,i,d[i]);
    }
}