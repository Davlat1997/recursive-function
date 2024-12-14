#include <stdio.h>


void func(int n, int c) {
    if (c >= n) {
        return;
    }

    if (c % 2 == 0) {
        printf("%d ", c); 
    }

    func(n, c + 1); 
}

int main() {
    int n;

 

    scanf("%d", &n);

  
    printf("sonlar: ");
    func(n, 1);

    return 0;
}