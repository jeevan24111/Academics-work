#include<stdio.h>
#define INF 999
#define max 20


void floyd(int p[max][max],int n){
    int i,k,j;

    for( k=1;k<=n;k++){
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                if(p[i][k]+p[k][j]<p[i][j]){
                    p[i][j]=p[i][k]+p[k][j];
                }
            }
        }
    }

}
int main(){
    int i,j,n,c[max][max];
    printf("enter the number of vertices\n");
    scanf("%d",&n);
    printf("\n Enter Graph Data\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&c[i][j]);
        }
    }
    floyd(c,n);

    printf("Shortest path Matrix Is\n");
      for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d ",c[i][j]);
        }
        printf(" \n");
    }
}