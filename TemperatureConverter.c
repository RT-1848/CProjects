#include <stdio.h>

int main() {
    char start, target;
    float tempvalue;
    float calculate = 0;
    
    printf("Enter starting temperature scale (F/C/K): ");
    scanf("%c", &start);
    printf("Enter target temperature scale (F/C/K): ");
    scanf("\n%c", &target);
    printf("Enter temperature value: ");
    scanf("\n%f", &tempvalue);
  
    if (start == 'F' || start == 'f'){
        if (target == 'C' || target == 'c'){
            calculate = (tempvalue - 32.0) * (5.0/9.0);
            printf("%0.2f°F is equivalent to %0.2f°C\n", tempvalue, calculate);
        }
        else if (target == 'K' || target == 'k') {
            calculate = (tempvalue - 32.0) * (5.0/9.0) + 273.15;
            printf("%0.2f°F is equivalent to %0.2f°K\n", tempvalue, calculate);
        }
    }
    else if (start == 'C' || start == 'c'){
        if (target == 'F' || target == 'f'){
            calculate = (tempvalue * (9.0/5.0)) + 32;
            printf("%0.2f°C is equivalent to %0.2f°F\n", tempvalue, calculate);
        }
        else if (target == 'K' || target == 'k') {
            calculate = 273.15 + tempvalue;
            printf("%0.2f°C is equivalent to %0.2f°K\n", tempvalue, calculate);
        }
    }
    else if (start == 'K' || start == 'k'){
        if (target == 'F' || target == 'f'){
            calculate = (tempvalue - 273.15) * (9.0/5.0) + 32;
            printf("%0.2f°K is equivalent to %0.2f°F\n", tempvalue, calculate);
        }
        else if (target == 'C' || target == 'c'){
            calculate = tempvalue - 273.15;
            printf("%0.2f°K is equivalent to %0.2f°C\n", tempvalue, calculate);
        }
    }
    return 0;
}
