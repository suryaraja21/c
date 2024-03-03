#include <stdio.h>

main(){
    int n,i,fac=1,j;
    printf("Enter the nth term: ");
    scanf("%d",&n);
    for(i=1;i<n+1;i++){
    for(j=1;j<i;j++){
        fac+=fac*j;
        
    }
    printf("%d ",fac);
    fac=1;
    }
}