// Fibonacci Number
#include <stdio.h>
int main() {
    int i,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int a[n];
    a[0]=0;
    a[1]=1;
    for(i=2;i<n;i++){
        a[i]=a[i-1]+a[i-2];
    }
    printf("First %d fibonacci numbers are: ",n);
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
