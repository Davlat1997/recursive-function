#include <stdio.h>


void func(int n) {
  
    if (n == 0) {
        return;
    }
    printf("Hello Code\n");

    func(n - 1);
    
}
    

int main() {
    int n;

   
   
    scanf("%d", &n);
    printf("\n");

   
    func(3);

    return 0;
}