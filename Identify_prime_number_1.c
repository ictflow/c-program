// Identify prime number
#include <stdio.h>
int main() {
    int i,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
            printf("%d is not a prime number",n);
            break;
        }
    }
    if(i==n){
        printf("%d is a prime number",n);
    }
    return 0;
}
