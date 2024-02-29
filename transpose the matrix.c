#include <stdio.h>
main(){
    int r,c,i,j;
    printf("Enter the size of rows and column of the matrix");
    scanf("%d%d",&r,&c);
    int matrix[r][c];
    printf("\n Enter the values:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d ",matrix[j][i]);
        }
        printf("\n");
    }
}
