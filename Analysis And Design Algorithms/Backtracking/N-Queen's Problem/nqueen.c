// #include<stdio.h>
// #include<stdlib.h>
// #define max 10

// int place(int c[],int r){
//     int i;
//     for(i=0;i<r;i++){
//         if(c[i]==c[r]||(abs(c[i]-c[r]))==abs(i-r)){
//             return 0;
//         }
//     }
//     return 1;
// }

// void display(int c[],int n){
//     int i,j;
//     char cb[20][20];
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             cb[i][j]='-';
//         }
//     }

//     for(i=0;i<n;i++){
//         cb[i][c[i]]='Q';
//     }

//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             printf("%c",cb[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
// }
// void nQueen(int c[],int r,int n){
//     int i;
//     if(r==n){
//         display(c,n);
//         return;
//     }

//     for(i=0;i<n;i++){
//         c[r]=i;
//         if(place(c,r)){
//             nQueen(c,r+1,n);
//         }
//     }

// }
// int main(){
//     int n,c[20];
//     printf("\n============N-Queen==========\n");
//     printf("ENter the number of queens\n");
//     scanf("%d",&n);
//     if(n==2 || n==3){
//         printf("\n No solution  exits for %d queen\n",n);
//         return 0;
//     }

//     printf("\nplacing %d queen on %d x %dc chessboard\n",n,n,n);
//     printf("\n====================================================\n");
//     nQueen(c,0,n);

//     return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>
// #define max 10

// int check(int c[],int r){
//     int i;
//     for(i=0;i<r;i++){
//         if(c[i]==c[r]||(abs(c[i]-c[r]))==abs(i-r)){
//             return 0;
//         }
//     }
//     return 1;
// }

// int check(int c[],int r){
//     int i;
//     for(i=0;i<r;i++){
//         if(c[i]==c[r]|| (abs(c[i]-c[r]))==abs(i-r)){
//             return 0;
//         }
//     }
//     return 1;
// }

// void display(int c[],int n){
//     int i,j;
//     char cb[20][20];
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             cb[i][j]='-';
//         }
//     }
//     for(i=0;i<n;i++){
//         cb[i][c[i]]='Q';
//     }

//      for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//            printf("%c",cb[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
// }

// void nQueen(int c[],int r,int n){
//     if(r==n){
//         display(c,n);
//         return;
//     }

//     int i;
//     for(i=0;i<n;i++){
//         c[r]=i;
//         if(check(c,r)){
//             nQueen(c,r+1,n);
//         }
//     }
// }
// int main(){
//     int n,c[20];
//     printf("enter the number of queens\n");
//     scanf("%d",&n);

//     if(n==2 || n==3){
//         printf("no Solutions exits \n");
//         return 0;
//     }

//         printf("\nplacing %d queen on %d x %dc chessboard\n",n,n,n);
//         printf("\n====================================================\n");
//         nQueen(c,0,n);
// }
