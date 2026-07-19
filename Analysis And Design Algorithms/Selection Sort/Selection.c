#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define start 5000
#define step 5000
#define end 30000

void bubbleSort(int a[],int n){
    int i,j,pos,min,temp;
    for(i=0;i<n-1;i++){
        min=a[i];
        pos=i;
        for(j=i+1;j<n;j++){
            if(a[j]<min){
                min=a[j];
                pos=j;
            }
        }
       temp=a[i];
       a[i]=min;
       a[pos]=temp;
    }
}
int main(){
    // FILE *fp;
    // fp=fopen("quick.dat","w");
    // for(int n=start;n<=end;n+=step){
    //     int *a=(int *)malloc(n*sizeof(int));

    //     for(int i=0;i<n;i++){
    //         a[i]=rand();
    //     }

    //     clock_t start1=clock();
    //     bubbleSort(a,n);
    //     clock_t end1=clock();
    //     double time=(double)(end1-start1)/CLOCKS_PER_SEC;
    //     fprintf(fp,"%d %ls\n",n,time);
    //     printf("%d ->%ls sec\n",n,time);
    //     free(a);
    // }
    // fclose(fp);
    // printf("data stored in bubble.dat\n");
    // return 0;
    FILE *fp;
    fp=fopen("bubble.dat","w");
    for(int n=start;n<=end;n+=step){
        int *a=(int *)malloc(n*sizeof(int));
        for(int i=0;i<n;i++){
            a[i]=rand();
        }
       clock_t begin=clock();
        bubbleSort(a,n);
        clock_t end1=clock();
        double time=(double)(end1-begin)/CLOCKS_PER_SEC;
        fprintf(fp,"%d %lf\n",n,time);
        printf("%d ->%lf sec\n",n,time);
        free(a);
    }
    fclose(fp);
    printf("data stored in bubble.dat\n");
    return 0;
}
