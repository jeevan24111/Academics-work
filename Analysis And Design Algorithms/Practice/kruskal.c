#include<stdio.h>
#include<stdlib.h>
#define INF 999
#define max 100

int p[max],c[max][max],t[max][2];
int find(int v){
    while(p[v]){
        v=p[v];
    }
    return v;
}
void union1(int i,int j){
    p[j]=i;
}
void kruskal(int n){
    int i,j,k,u,v,res1,res2,min,sum=0;
    for(k=1;k<n;k++){
        min=INF;
        for(i=1;i<n-1;i++){
            for(j=1;j<=n;j++){
                if(i==j)continue;
                if(c[i][j]<min){
                    u=find(i);
                    v=find(j);
                    if(u!=v){
                        res1=i;
                        res2=j;
                        min=c[i][j];
                    }
                }
            }
        }
        union1(res1,find(res2));
        t[k][1]=res1;
        t[k][2]=res2;
        sum=sum+min;
    }
    printf("\n Total Cost IS %d",sum);
    printf("\nEdges of spanning tree is :\n");
    for(i=1;i<n;i++){
        printf("%d->%d\n",t[i][1],t[i][2]);
    }
}

int main(){
    int n,i,j;
    printf("enter the number of vertices\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        p[i]=0;
    }
    printf("Enter Graph data:\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&c[i][j]);
        }
    }
    kruskal(n);
    return 0;

}