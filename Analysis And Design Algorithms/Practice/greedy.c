// #include<stdio.h>
// #include<conio.h>
// #define max 20
// int p[max],w[max],n,m;

// int max1(int a,int b){
//     return a>b?a:b;
// }

// int greedy(int i,int m){
//     if(i>n) return w[i]>m?0:p[i];
//     if(w[i]>m) return greedy(i+1,m);
//     return max1(greedy(i+1,m),greedy(i+1,m-w[i])+p[i]);
// }
// int main(){
//     int i;
//     printf("Enter number of objects\n");
//     scanf("%d",&n);
//     printf("Enter capacity \n");
//     scanf("%d",&m);
//     printf("Enter weight\n");
//     for(i=1;i<=n;i++){
//         scanf("%d",&w[i]);
//     }
//     printf("Enter profits\n");
//     for(i=1;i<=n;i++){
//         scanf("%d",&p[i]);
//     }
//     int profit=greedy(1,m);
//     printf("\n Max profit %d",profit);
//     return 0;
// }

// #include<stdio.h>
// #include<conio.h>
// #define max 20
// int p[max], w[max], n, m;

// int max1(int a, int b) {
//     return a > b ? a : b;
// }

// int greedy(int i, int m) {
//     if (i > n) return 0;  // FIXED: Base case - no more items
//     if (w[i] > m) return greedy(i + 1, m);  // Skip item if too heavy
//     // FIXED: Correct recursive call for including item
//     return max1(greedy(i + 1, m), p[i] + greedy(i + 1, m - w[i]));
// }

// int main() {
//     int i;
//     printf("Enter number of objects: ");
//     scanf("%d", &n);
//     printf("Enter capacity: ");
//     scanf("%d", &m);
    
//     printf("Enter weights:\n");
//     for (i = 1; i <= n; i++) {
//         scanf("%d", &w[i]);
//     }
    
//     printf("Enter profits:\n");
//     for (i = 1; i <= n; i++) {
//         scanf("%d", &p[i]);
//     }
    
//     int profit = greedy(1, m);
//     printf("\nMax profit: %d", profit);
//     return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>
// #define max 50
// int w[max],p[max],n,m;
// int max1(int a ,int b){
//     return a>b?a:b;
// }
// int greedy(int i,int m){
//     if(i==n) return w[i]>m? 0:p[i];
//     if(w[i]>m) return greedy(i+1,m);
//     return max1(greedy(i+1,m),greedy(i+1,m-w[i])+p[i]);
// }
// int main(){
//       int i;
//     printf("Enter number of objects: ");
//     scanf("%d", &n);
//     printf("Enter capacity: ");
//     scanf("%d", &m);
    
//     printf("Enter weights:\n");
//     for (i = 1; i <= n; i++) {
//         scanf("%d", &w[i]);
//     }
    
//     printf("Enter profits:\n");
//     for (i = 1; i <= n; i++) {
//         scanf("%d", &p[i]);
//     }
    
//     int profit = greedy(1, m);
//     printf("\nMax profit: %d", profit);
//     return 0;

// }