#include<stdio.h>
#define max 20
int s[max],x[max],d,n;

void subset(int p,int k,int r){
     int i;
    x[k]=1;
    if((p+s[k])==d){
        for( i=1;i<=k;i++){
            if(x[i]==1){
                printf("%d",s[i]);
            }
        }
        printf("\n");
    }else if(k<n && p+s[k]+s[k+1]<=d){
        subset(p+s[k],k+1,r-s[k]);
    }
    if(k<n && p+r-s[k]>=d && p+s[k+1]<=d){
          x[k]=0;
          subset(p,k+1,r-s[k]);
    }
}
int main(){
  int i,sum=0;
    printf("enter number of elements \n");
    scanf("%d",&n);
    printf("enter elements in ascending order\n");
    for(i=1;i<=n;i++){
      scanf("%d",&s[i]);
    }
    printf("enter target subset sum\n");
    scanf("%d",&d);
    for(i=1;i<=n;i++){
        sum+=s[i];
    }
    if(sum<d ||s[1]>d){
        printf("No Subset exits\n");
    }else{
        subset(0,1,sum);
    }
    return 0;
}


#include<stdio.h>
#define max 20
int s[max], x[max], d, n;  // Made n global

void subset(int p, int k, int r) {
    int i;
    
    // Include s[k] in subset
    x[k] = 1;
    if ((p + s[k]) == d) {
        for (i = 1; i <= k; i++) {
            if (x[i] == 1) {
                printf("%d ", s[i]);  // Added space for better output
            }
        }
        printf("\n");
    } 
    else if (k < n && (p + s[k] + s[k + 1]) <= d) {  // Added k < n check
        subset(p + s[k], k + 1, r - s[k]);
    }
    
    // Exclude s[k] from subset
    if (k < n && (p + r - s[k] >= d) && (p + s[k + 1] <= d)) {  // Added k < n check
        x[k] = 0;
        subset(p, k + 1, r - s[k]);
    }
}

int main() {
    int i, sum = 0;
    
    printf("Enter number of elements: \n");
    scanf("%d", &n);
    
    printf("Enter elements in ascending order: \n");
    for (i = 1; i <= n; i++) {  // FIXED: Changed from i=0 to i=1
        scanf("%d", &s[i]);
    }
    
    printf("Enter target subset sum: \n");
    scanf("%d", &d);
    
    for (i = 1; i <= n; i++) {
        sum += s[i];
    }
    
    if (sum < d || s[1] > d) {
        printf("No Subset exists\n");
    } else {
        subset(0, 1, sum);
    }
    return 0;
}


// #include<stdio.h>
// #include<stdlib.h>
// #include<conio.h>
// #define max 50

// int x[max],s[max],d,n;
// void subset(int p,int k, int r){
//     int i;
//     x[k]=1;
//     if((p+s[k])==d){
//         for(i=1;i<=k;i++){
//             if(x[i]==1){
//                 printf("%d ",s[i]);
//             }
//         }
//         printf("\n");
//     }else if(p+s[k]+s[k+1]<=d){
//         subset(p+s[k],k+1,r-s[k]);
//     }
//     if((p+r-s[k])>=d && (p+s[k+1])<=d){
//         x[k]=0;
//         subset(p,k+1,r-s[k]);
//     }
// }

// int main(){
//     int i,sum=0;
//     printf("enter number of elements\n");
//     scanf("%d",&n);
//     printf("enter elements in ascending order\n");
//     for(i=1;i<=n;i++){
//         scanf("%d",&s[i]);
//     }
//     printf("enter target subset sum\n");
//     scanf("%d",&d);
//     for(i=1;i<=n;i++){
//         sum+=s[i];
//     }
//     if(sum<d || s[1]>d){
//         printf("No Solution exits \n");
//     }else{
//         subset(0,1,sum);
//     }
//     return 0;
// }
