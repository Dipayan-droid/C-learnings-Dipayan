#include <stdio.h>
int A(int m, int n) {
    if (m == 0)
        return n + 1;
    else if (n == 0)
        return A(m - 1, 1);
    else
        return A(m - 1, A(m, n - 1));
}
int main() {
    int m, n;
    printf("Enter two numbers: ");
    scanf("%d%d", &m, &n);
    printf("Ackermann(%d, %d) = %d\n", m, n, A(m, n));
    return 0;
}
