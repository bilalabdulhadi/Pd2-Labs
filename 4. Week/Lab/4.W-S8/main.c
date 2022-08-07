#include <stdio.h>

int sum_digits(int n);

void main(){
 int n = -1201;
 int ans = sum_digits(n);
 printf("%d",ans);
}

int sum_digits(int n){
    if(n == 0)
        return 0;
    return n % 10 + sum_digits(n/10);
}