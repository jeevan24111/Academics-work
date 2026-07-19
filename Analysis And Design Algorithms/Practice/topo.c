#include<stdio.h>
int temp[10],k=0;

void sort(int a[10][10],int id[10],int n){
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
    int n,i,j,a[10][10],id[10];
    k=0;
    printf("\nEnter number of vertcies\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        id[i]=0;
    }
    printf("\n enter graph data\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]==1){
                id[j]++;
            }
        }
    }
    sort(a,id,n);
    if(k!=n){
        printf("topological sort is not enough\n");
    }else{
         printf("Topological sort is: ");
        for(i=1;i<=k;i++){
            printf("%d",temp[i]);
        }
    }
}
// // }
// #include<stdio.h>
// int temp[10], k = 0;

// void sort(int a[10][10], int id[10], int n){
//     int i,j;
//     for(i=1;i<=n;i++){
//         if(id[i]==0){
//             id[i]=-1;
//             temp[++k]=i;
//             for(j=1;j<=n;j++){
//                 if(a[i][j]==1 && id[j]!=-1){
//                     id[j]--;  // FIXED: Changed id[i]-- to id[j]--
//                 }
//             }
//             i=0;  // This resets the loop to check from beginning
//         }
//     }
// }

// int main(){
//     int n,i,j,a[10][10],id[10];
//     k = 0;  // FIXED: Reset k to 0
    
//     printf("\nEnter number of vertices\n");
//     scanf("%d",&n);
    
//     for(i=1;i<=n;i++){
//         id[i]=0;
//     }
    
//     printf("\nEnter graph data (adjacency matrix):\n");
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n;j++){
//             scanf("%d",&a[i][j]);
//             if(a[i][j]==1){
//                 id[j]++;  // FIXED: Changed id[i]++ to id[j]++
//             }
//         }
//     }
    
//     sort(a,id,n);
    
//     if(k!=n){
//         printf("Topological sort is not possible (cycle detected)\n");
//     }else{
//         printf("Topological sort is: ");
//         for(i=1;i<=k;i++){
//             printf("%d ",temp[i]);
//         }
//         printf("\n");
//     }
//     return 0;
// }