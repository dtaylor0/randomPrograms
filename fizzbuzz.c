#include <stdio.h>
void fizzbuzz(int);
int main() {
    fizzbuzz(1);
    return 0;
}
void fizzbuzz(int i) {
    int isMultiple = 0;
    if(i%3 == 0) {
        printf("fizz");
        isMultiple = 1;
    }
    if(i%5 == 0) {
        printf("buzz");
        isMultiple = 1;
    }
    if(isMultiple) {
        printf("\n");
    } else {
        printf("%d\n", i);
    }
    if(i < 100) {
        return fizzbuzz(i+1);
    }
}
