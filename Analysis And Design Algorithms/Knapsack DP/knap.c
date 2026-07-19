#include<stdio.h>
#include<conio.h>
 int p[10],w[10],n,m,i,max_profit;
int max(int a ,int b){
    return (a>b)? a:b;
}
int knap(int i,int m){
    if(i==n){
        return (w[i]>m)? 0:p[i];
    }
    if(w[i]>m){
        return knap(i+1,m);
    }
    return max(knap(i+1,m),knap(i+1,m-w[i]+p[i]));
}
int main(){
   

    printf("enter number of objects\n");
    scanf("%d",&n);
    printf("Enter knapsack capacity\n");
    scanf("%d",&m);
    printf("\n Enter weight followed by profits\n");
    for(i=1;i<=n;i++){
        scanf("%d %d ",&w[i],&p[i]);
    }
    max_profit=knap(1,m);
    printf("max profit is %d",max_profit);
    return 0;

}