#include <stdio.h>
int fact(int *num){
    if (*num == 0 || *num == 1) {
        return 1;
    }
    int x = *num-1;
    return *num * fact(&x);
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The factorial is %d", fact(&num));
    return 0;
}