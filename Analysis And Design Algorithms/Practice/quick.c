#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define start 5000
#define step 5000
#define end 30000
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int fn(int a[],int low,int high){
    int pivot=a[low];
    int i=low;
    int j=high;
    while(i<j){
        while(i<=high && a[i]<=pivot){
            i++;
        }
        while(j>=low && a[j]>pivot){
            j--;
        }
        if(i<j){
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[low],&a[j]);
    return j;
}
void quickSort(int a[],int low,int high){
    if(low<high){
        int s=fn(a,low,high);
        quickSort(a,low,s-1);
        quickSort(a,s+1,high);
    }
}


int main(){
    FILE *fp;
    fp=fopen("quick1.dat","w");
    for(int n=start;n<=end;n+=step){
        int *a=(int *)malloc(n*(sizeof(int)));

        for(int i=0;i<n;i++){
            a[i]=rand();
        }

        clock_t start1=clock();
        quickSort(a,0,n-1);
        clock_t end1=clock();
        double time=(double)(end1-start1)/CLOCKS_PER_SEC;
        fprintf(fp,"%d  %lf\n",n,time);
        printf("%d ->%lf sec\n ",n,time);
        free(a);
    }
    fclose(fp);
    printf("data stored in quick1.dat");
    
}