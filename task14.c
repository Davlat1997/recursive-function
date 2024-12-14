#include <stdio.h>


void func(int n, int i) {
    if (i > 9) { 
        return;
    }
    printf("%d x %d = %d\n", n, i, n * i); 
    func(n, i + 1); 
}

int main() {
    int n;

    scanf("%d", &n);
    func(n, 1);

    return 0;
}