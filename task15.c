#include <stdio.h>

void func(char d[], int i) {
    if (d[i] == '\0') { 
        return;
    }
    func(d, i + 1); 
    printf("%c", d[i]); 
}

int main() {
    char d[100];

  
    scanf("%s", d);

   
    printf("teskari matn: ");
    func(d, 0);

    return 0;
}