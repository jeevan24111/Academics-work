#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define start 5000
#define step 5000
#define end 30000



void merge(int a[],int low,int mid,int high){
    int i,k,j;
    i=k=low;
    j=mid+1;
    int b[50000];
    while(i<=mid && j<=high){
        if(a[i]<a[j]){
            b[k++]=a[i++];
        }else{
            b[k++]=a[j++];
        }
    }
    while(i<=mid){
        b[k++]=a[i++];
    }
    while(j<=high){
        b[k++]=a[j++];
    }
    for(i=low;i<k;i++){
        a[i]=b[i];
    }
}

void mergeSort(int a[],int low,int high){
    if(low<high){
        int mid=(low+high)/2;
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high); 
        merge(a,low,mid,high);
    }
}

int main(){
    FILE *fp;
    fp=fopen("merge.dat","w");
    for(int n=start;n<=end;n+=step){
        int *a=(int *)malloc(n*sizeof(int));
        for(int i=0;i<n;i++){
            a[i]=rand()%10000;
        }
       clock_t begin=clock();
        mergeSort(a,0,n-1);
        clock_t end1=clock();
        double time=(double)(end1-begin)/CLOCKS_PER_SEC;
        fprintf(fp,"%d %lf\n",n,time);
        printf("%d ->%lf sec\n",n,time);
        free(a);
    }
    fclose(fp);
    printf("data stored in merge.dat\n");
    return 0;
}