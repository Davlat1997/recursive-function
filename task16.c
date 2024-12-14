#include <stdio.h>

int yigindi(int n) {
    if (n < 10) {
    printf("%d", n); 
    printf("\n");
        return n;
    }
    printf("%d + ", n % 10); 
    return (n % 10) + yigindi(n / 10);
}

int main(){

    int n;
    
    scanf("%d", &n);
    printf("Yig'indi son: %d\n", yigindi(n));

    return 0;

}


