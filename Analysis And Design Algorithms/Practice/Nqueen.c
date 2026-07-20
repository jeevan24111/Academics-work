#include<stdio.h>
#include<stdlib.h>
int place(int c[],int r){
    int i;
    for(i=0;i<r;i++){
        if(c[i]==c[r] || (abs(c[i]-c[r]))==abs(i-r)){
            return 0;
        }
    }
    return 1;
}
void display(int c[],int n){
    int i,j;
    char cb[20][20];
     
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cb[i][j]='-';
        }
    }

    for(i=0;i<n;i++){
        cb[i][c[i]]='Q';
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%c ",cb[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void Nqueen(int c[],int r,int n){
    if(r==n){
        display(c,n);
        return;
    }

    for(int i=0;i<n;i++){
         c[r]=i;

        if(place(c,r)){
            Nqueen(c,r+1,n);
        }
     }
}

int main(){
    int i,c[20],n;
    printf("enter nunmber of queen\n");
    scanf("%d",&n);

    if(n<=0){
        printf("invalid choice\n");
        return 0;
    }
    if(n==2||n==3){
        printf("n0o soultion exits\n");
        return 0;
    }else{
        printf("===============N QUEEEEEEENNNNN===========\n");
        printf("=====================================\n");
        Nqueen(c,0,n);
    }
    return 0;
}
       

// #include<stdio.h>
// #include<stdlib.h>

// int place(int c[], int r) {
//     int i;
//     for (i = 0; i < r; i++) {
//         // FIXED: Removed semicolon and corrected condition
//         if (c[i] == c[r] || abs(c[i] - c[r]) == abs(i - r)) {
//             return 0;  // Not a valid position
//         }
//     }
//     return 1;  // Valid position
// }

// void display(int c[], int n) {
//     int i, j;
//     char cb[20][20];
    
//     for (i = 0; i < n; i++) {
//         for (j = 0; j < n; j++) {
//             cb[i][j] = '-';
//         }
//     }
    
//     for (i = 0; i < n; i++) {
//         cb[i][c[i]] = 'Q';
//     }
    
//     for (i = 0; i < n; i++) {
//         for (j = 0; j < n; j++) {
//             printf("%c ", cb[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
// }

// void Nqueen(int c[], int r, int n) {
//     if (r == n) {
//         display(c, n);
//         return;
//     }
    
//     for (int i = 0; i < n; i++) {
//         c[r] = i;
//         if (place(c, r)) {
//             Nqueen(c, r + 1, n);
//         }
//     }
// }

// int main() {
//     int c[20], n;
//     printf("Enter number of queens: ");
//     scanf("%d", &n);
    
//     if (n <= 0) {
//         printf("Invalid choice\n");
//         return 0;
//     }
//     if (n == 2 || n == 3) {
//         printf("No solution exists for %d queens\n", n);
//         return 0;
//     }
    
//     printf("=============== N-QUEEN SOLUTIONS ===========\n");
//     printf("=============================================\n");
//     Nqueen(c, 0, n);
    
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// #include<conio.h>

// int place(int c[],int r){
//     int i;
//     for(i=0;i<r;i++){
//         if(c[i]==c[r] || abs(c[i]-c[r])==abs(i-r)){
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
//             printf("%c ",cb[i][j]);
//         }
//         printf("\n");
//     }
//         printf("\n");
// }
// void nQueen(int c[],int r,int n){
//     int i;
//     if(r==n){
//         display(c,n);
//         return ;
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
//     printf("enter number of queens\n");
//     scanf("%d",&n);
//     if(n<=0){
//         printf("Invalid queen enterd\n");
//         return 1;
//     }
//     if(n==2 || n==3){
//         printf("solutions doesn't exits\n");
//         return 1;
//     }
//     else{
//         nQueen(c,0,n);
//     }

// }