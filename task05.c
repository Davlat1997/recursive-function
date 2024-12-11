#include <stdio.h>

void func(int n, int m) {
    if (n <= m) {
        printf("start: %d \n", n);
        if (n < m) {
            func(n + 1, m);
        }
    
    } else {
        printf("start: %d \n", n);
        if (n > m) {
            func(n - 1, m);
        }
       
    }
}

int main() {
 
    func(1, 5);
    printf("\n");
    func(5, 1);

    return 0;
}