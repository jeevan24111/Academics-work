#include<stdio.h>
#define max 10

int x[max],s[max],d;
void subofsum(int p,int k,int r){
    //p=current sum
    //k=current index
    //r=remaining sum
    int i;
    x[k]=1;
    if((p+s[k])==d){
        for(i=1;i<=k;i++)
            if(x[i]==1)
                printf("%d",s[i]);
                 printf("\n");   
    }else if(p+s[k]+s[k+1]<=d){
        subofsum(p+s[k],k+1,r-s[k]);
    }
    if((p+r-s[k]>=d) &&( p+s[k+1]<=d)){
        x[k]=0;
        subofsum(p,k+1,r-s[k]);
    }
}
int main(){
    int i,n,sum=0;
    printf("\nEnter the number of elements\n");
    scanf("%d",&n);
    printf("ENter the number in ascending order\n");
    for(i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+s[i];
    }
    printf("\nENter target Sum");
    scanf("%d",&d);

    if(sum<d|| s[1]>d)
        printf("Subset sum is not possible\n");
    else
        subofsum(0,1,sum);
    
    return 0;
}