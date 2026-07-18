#include<stdio.h>
#define INF 999
#define MAX 100

int p[MAX],c[MAX][MAX],t[MAX][2];
int find(int v){
    while(p[v]){
        v=p[v];
    }
    return v;
}
void Union1(int i,int j){
    p[j]=i;
}
void Kruskal(int n){
    int i,j,k,res1,res2,min,u,v,sum=0;

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
     
        Union1(res1,find(res2));
        t[k][1]=res1;
        t[k][2]=res2;
        sum=sum+min;
    }
    printf("Edges of Spanning Tree are:\n");
    for(i=1;i<n;i++){
        printf("%d -> %d \n",t[i][1],t[i][2]);
    }
      printf("Cost of Spanning Tree is=%d",sum);
}

int main(){
    int i,j,n;

    printf("Enter the number of Vertices\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        p[i]=0;
    }
    printf("Enter Graph Data\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&c[i][j]);
        }
    }

    Kruskal(n);
    return 0;
}

