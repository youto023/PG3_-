#include<stdio.h>
int Recursive(int n) {
    if (n <= 1) {
        return 100;
    }
    return (Recursive(n - 1) * 2) - 50;
}

int main() {
    int n = 10;
    int wages = 1072;
    int result;

    for (int i = 1; i < 11; i++) {
        result = Recursive(i);
        printf("一般的な時給 : %d\n", wages);
        printf("再帰的な給料 : %d\n\n", result);
        wages += 1072;
    }
    return(0);
}