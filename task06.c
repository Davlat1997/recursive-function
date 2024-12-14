    #include <stdio.h>


int ekub(int a, int b) {
  
    if (b == 0) {
        return a;
    } else {
          return ekub(b, a % b);
    }
}

int main() {
    int a, b;

   
    printf("Ikkita butun son kiriting: ");
    scanf("%d %d", &a, &b);

   
    printf("EKUB(%d, %d) = %d\n", a, b, ekub(a, b));

    return 0;
}