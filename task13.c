#include <stdio.h>

int fuctorial(int n){
    if (n == 1){
        return 1;
    }
    return n * fuctorial (n - 1);
}

int main(){

    int n;
    
    scanf("%d", &n);
    printf("fuctorial son: %d\n", fuctorial(n));

    return 0;

}


