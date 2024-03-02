#include <stdio.h>

main(){
    int r,c,i,j,count=0;
    printf("Enter the size of matrix");
    scanf("%d%d",&r,&c);
    int matrix[r][c];
    printf("\n Enter the values:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if (i==j){
                count+=matrix[i][j];
            }
        }
    }
    printf("The sum of diagonal is: %d",count);
}