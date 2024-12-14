#include <stdio.h>

// N sonining M-darajasini hisoblash (rekursiyasiz)
int func(int n, int m) {
    int result = 1;
    for (int i = 0; i < m; i++) {
        result *= n;
    }
    return result;
}

int main() {
    int n, m;

 

    scanf("%d %d", &n, &m);

    
    printf("%d : %d = %d\n", n, m, func(n, m));

    return 0;
}