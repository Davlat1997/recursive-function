#include <stdio.h>


int func(int n, int m) {
   
    if (m == 0) {
        return 1;
    }

    return n * func(n, m - 1);
}

int main() {
    int n, m;

    scanf("%d %d", &n, &m);
  
    printf("%d: %d = %d\n", n, m, func(n, m));
   
   

    return 0;
}