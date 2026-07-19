#include<stdio.h>
#define INF 999

void warshal(int c[10][10],int n){
    int i,j,k;
    for(k=1;k<=n;k++){
        for(i=1;i<=n;i++){
          for(j=1;j<=n;j++){
            c[i][j]=c[i][j]|| (c[i][k] && c[k][j]);
        }
      }
    }
   
}

int main(){
    int n,i,j,c[10][10];
    printf("Enter number of vertices\n");
    scanf("%d",&n);
    printf("Enter graph data\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&c[i][j]);
        }
    }
    warshal(c,n);
    printf("\nShortest path is \n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
    printf("");
    return 0;
}