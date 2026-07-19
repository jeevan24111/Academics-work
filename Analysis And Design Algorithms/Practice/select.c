#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define start 5000
#define step 5000
#define end 30000

void selectSort(int a[],int n){
    int i,j,min,pos;
    for(i=0;i<n-1;i++){
        min=a[i];
        pos=i;
        for(j=i+1;j<n;j++){
            if(a[j]<min){
                min=a[j];
                pos=j;
            }
        }
     int temp=a[i];
    a[i]=min;
    a[pos]=temp;
    }
  
}
int main(){
    FILE *fp;
    fp=fopen("bubble.dat","w");
    for(int n=start;n<=end;n+=step){
        int *a=(int *)malloc(n*(sizeof(int)));

        for(int i=0;i<n;i++){
            a[i]=rand();
        }

        clock_t start1=clock();
        selectSort(a,n);
        clock_t end1=clock();
        double time=(double)(end1-start1)/CLOCKS_PER_SEC;
        fprintf(fp,"%d  %lf\n",n,time);
        printf("%d ->%lf sec\n ",n,time);
        free(a);
    }
    fclose(fp);
    printf("data stored in bubble.dat");
    
}