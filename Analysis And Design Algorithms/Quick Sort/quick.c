#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define start 5000
#define step 5000
#define end 30000

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int Fn(int a[],int left,int right){
    int pivot=a[left];
    int i=left;
    int j=right;

    while(i<j){
       while(i<=right && a[i]<=pivot){
        i++;
       }
       while(i>=left && a[j]>pivot){
        j--;
       }

        if(i<j){
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[left],&a[j]);
    return j;

}
void quicksort(int a[],int left,int right){
    if(left<right){
        int s=Fn(a,left,right);
        quicksort(a,left,s-1);
        quicksort(a,s+1,right);
    }
}


int main(){
     FILE *fp;
    fp=fopen("quick.dat","w");
    for(int n=start;n<=end;n+=step){
        int *a=(int *)malloc(n*sizeof(int));
        for(int i=0;i<n;i++){
            a[i]=rand();
        }
       clock_t begin=clock();
        quicksort(a,0,n-1);
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

