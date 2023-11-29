#include <stdio.h>

int main() {
    
    int evenSumArray[1], oddSumArray[1];
    
    
    int evenSum = 0, oddSum = 0;

    
    for (int i = 1; i <= 10; ++i) {
        
        if (i % 2 == 0) {
            
            evenSum += i;
        } else {
            
            oddSum += i;
        }
    }

    
    evenSumArray[0] = evenSum;
    oddSumArray[0] = oddSum;

    
    printf("Sum of even numbers: %d\n", evenSumArray[0]);
    printf("Sum of odd numbers: %d\n", oddSumArray[0]);

    return 0;
}