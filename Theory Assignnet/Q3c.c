#include <stdio.h>
#include <math.h>

int main() {
    double machine_cost = 6000.0;
    double salvage_value = 2000.0;
    double annual_earning = 1000.0;
    double alternative_rate = 0.09; 
    int years = 0;
    
    while (1) {
        
        double pw_machine = 0.0;
        for (int i = 1; i <= years; i++) {
            pw_machine += annual_earning / pow(1 + alternative_rate, i);
        }
        
        pw_machine += salvage_value / pow(1 + alternative_rate, years);
        
        
        if (pw_machine >= machine_cost) {
            break;
        }
        years++;
    }

    printf("The minimum life of the machine to make it a better investment is: %d years\n", years);
    return 0;
}
