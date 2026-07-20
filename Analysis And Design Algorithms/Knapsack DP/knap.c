#include<stdio.h>
#include<conio.h>
#define max 20
int p[max],w[max],n,m;

int max1(int a,int b){
    return a>b?a:b;
}

int greedy(int i,int m){
    if(i>n) return w[i]>m?0:p[i];
    if(w[i]>m) return greedy(i+1,m);
    return max1(greedy(i+1,m),greedy(i+1,m-w[i])+p[i]);
}
int main(){
    int i;
    printf("Enter number of objects\n");
    scanf("%d",&n);
    printf("Enter capacity \n");
    scanf("%d",&m);
    printf("Enter weight\n");
    for(i=1;i<=n;i++){
        scanf("%d",&w[i]);
    }
    printf("Enter profits\n");
    for(i=1;i<=n;i++){
        scanf("%d",&p[i]);
    }
    int profit=greedy(1,m);
    printf("\n Max profit %d",profit);
    return 0;
}

// #include<stdio.h>
// #include<conio.h>
//  int p[10],w[10],n,m,i,max_profit;
// int max1(int a ,int b){
//     return (a>b)? a:b;
// }
// int knap(int i,int m){
//     if(i==n){
//         return (w[i]>m)? 0:p[i];
//     }
//     if(w[i]>m){
//         return knap(i+1,m);
//     }
//     return max1(knap(i+1,m),knap(i+1,m-w[i])+p[i]);
// }
// int main(){
   

//     printf("enter number of objects\n");
//     scanf("%d",&n);
//     printf("Enter knapsack capacity\n");
//     scanf("%d",&m);
//     printf("\n Enter weight followed by profits\n");
//     for(i=1;i<=n;i++){
//         scanf("%d %d ",&w[i],&p[i]);
//     }
//     max_profit=knap(1,m);
//     printf("max profit is %d",max_profit);
//     return 0;

// }
