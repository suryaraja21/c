#include <stdio.h>

main(){
    int i,j,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<n+1;i++){
        for(j=0;j<i;j++)
        printf("*");
        printf("\n");
    }
    
}