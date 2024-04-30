// Reverse Program
#include <stdio.h>
int main() {
    int i,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Reverse numbers:\n");
    for(i=n-1;i>=0;i--){
        printf("%d\n",a[i]);
    }
    return 0;
}
