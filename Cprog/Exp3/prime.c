#include <stdio.h>
#include <math.h>
int main(){
    int n, flag = 0;
    printf("Enter an Integer : ");
    scanf("%d", &n);
    int k = sqrt(n);
    for (int i = 2; i <= k; i++){
        if (n % i == 0){
            printf("Number is Not Prime");
            flag = 1;
            break;
        }
    }
    if (flag == 0){
        printf("Number is a Prime Number");
    }
}
