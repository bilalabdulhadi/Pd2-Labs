#include <stdio.h>


void function(int n){
    if(n == 0)
        return;
    printf("%d ",n);
    function(n-1);
}
void main(){
    function(7);
}

