#include<stdio.h>
#define INF 999
int temp[10],k=0;
void Sort(int a[10][10],int id[10],int n){
    int i,j;
    for(i=1;i<=n;i++){
        if(id[i]==0){
            id[i]=-1;
            temp[++k]=i;
        
        for(j=1;j<=n;j++){
            if(a[i][j]==1 && id[j]!=-1){
                 id[j]--;
            }
         }
          i=0;
        
        }
    }

}
int main(){
    int i,j,a[10][10],id[10],n;
  printf("enter the number of vertices\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        id[i]=0;
    }
    printf("Enter graph Data\n");
     for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]==1){
                id[j]++;
            }       
        }
}
    
    Sort(a,id,n);
    if(k!=n){
        printf("Topological Ordering not possible!!\n");
    }else{
        printf("Topological ordering is:\n");
        for(i=1;i<=k;i++){
            printf("%d",temp[i]);
        }
    }
}