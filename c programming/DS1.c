// #include<stdio.h>
// #include<conio.h>
// void addition(int n, int m, int a[n][m], int b[n][m]);

// int main(){
//     int n,m;
//     int a[n][m],b[n][m];

//     printf("enter row and column/n");
//     scanf("%d%d",&n,&m);
//     printf("enter element in first matrix");

//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }

//     printf("first matrix /n");

//         for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             printf("%d",a[i][j]);
//         }
//         printf("/n");
//     }

// printf("enetr element in second matrix");
//         for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             scanf("%d",&b[i][j]);
//         }
//     }
// printf("second matrix /n");
//         for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             printf("%d",b[i][j]);
//         }
//         printf("/n");
//     }
//     addition(n,m,a,b);
//     return 0;
// }
// void addition(int n, int m, int a[n][m], int b[n][m]){
//     int add[n][m],i,j;
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             add[i][j]=a[i][j]+b[i][j];
//         }
//     }
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<m;j++)
//         {
//             printf("Addition = %d/t",add[i][j]);
//         }
//         printf("/n");
//     }
// }

#include<stdio.h>
#include<conio.h>

void addition(int n, int m, int a[n][m], int b[n][m]);
void multiplication(int n, int m, int a[n][m], int b[n][m]);
void transpose(int n, int m, int a[n][m]);

int main(){
    int n, m;
    printf("Enter number of rows and columns: ");
    scanf("%d%d", &n, &m);

    int a[n][m], b[n][m];

    printf("Enter elements in first matrix:\n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("First matrix:\n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("Enter elements in second matrix:\n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Second matrix:\n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    addition(n, m, a, b);
    transpose(n,m,a);
    multiplication(n, m, a, b);
    return 0;
}

void addition(int n, int m, int a[n][m], int b[n][m]){
    int add[n][m];
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            add[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Addition:\n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            printf("%d\t", add[i][j]);
        }
        printf("\n");
    }
}

void transpose(int n, int m, int a[n][m]){
        int tns[n][m];
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            tns[i][j] = a[j][i];
        }
    }
    printf("Transpose:\n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            printf("%d\t", tns[i][j]);
        }
        printf("\n");
    }
}

void multiplication(int n, int m, int a[n][m], int b[n][m]){
    int mul[n][m];
        for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            mul[n][m]=0;
            for(int k=0; k<m; k++){
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("Multiplication:\n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
}
