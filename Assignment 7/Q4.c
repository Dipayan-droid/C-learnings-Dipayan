#include <stdio.h>
int gcd(int a,int b){
    if (b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}
int lcm(int a,int b){
    return a*b/gcd(a,b);
}
int main(){
    printf("Enter two numbers: ");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("GCD: %d\n",gcd(a,b));
    printf("LCM: %d",lcm(a,b));
    return 0;
} 