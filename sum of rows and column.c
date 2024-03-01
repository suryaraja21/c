#include <stdio.h>

main(){
    int r,c,i,j;
    printf("Enter the size of matrix");
    scanf("%d%d",&r,&c);
    int matrix[r][c];
    printf("\n Enter the values:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    int sum_r=0;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            sum_r+=matrix[i][j];
        }
        printf("The sum of row %d is : %d\n",i+1,sum_r);
        sum_r=0;
    }
    printf("\n\n\n\n");
    int sum_c=0;
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            sum_c+=matrix[j][i];
        }
        printf("The sum of column %d is : %d\n",i+1,sum_c);
        sum_c=0;
    }
}