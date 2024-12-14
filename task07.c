#include <stdio.h>

int ekub(int a, int b) {
  
    if (b == 0) {
        return a;
    } else {
        
        return ekub(b, a % b);
    }
}


int ekuk(int a, int b) {
   
    return (a * b) / ekub(a, b);
}

int main() {
    int a, b;

  
    printf("Ikkita butun son kiriting: ");
    scanf("%d %d", &a, &b);

    printf("EKUK(%d, %d) = %d\n", a, b, ekuk(a, b));

    return 0;
}