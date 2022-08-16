#include<stdio.h>
int a[10][10],r[10][10][10];

void warshall(int n){
    int k=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            r[k][i][j]=a[i][j];
    for(k=1;k<=n;k++)
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                r[k][i][j]=r[k-1][i][j] || (r[k-1][i][k] && r[k-1][k][j]);
}

int main(){
    int n;
    printf("Enter no of vertices: \n");
    scanf("%d",&n);
     printf("Enter adjacency matrix: \n");
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
           scanf("%d",&a[i][j]);
    warshall(n);
    printf("Transitive Closure:\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d ", r[n][i][j]);
               
        }
          printf("\n");
        
    }
}
