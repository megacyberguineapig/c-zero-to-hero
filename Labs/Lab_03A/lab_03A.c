// This program takes 3 numbers and adds them together and prints the sum.//
// It also includes some error handling for input validation//
// This exercise is to practice arrays.//
// It's my intro to for loops too. //

#include <stdio.h>
int main(void){
    int sum = 0;
    int numbers[3];
    for(int i=0;i<3;i++){
        printf("Please enter a number: ");
        if(scanf("%d", &numbers[i])!=1){
            printf("Invalid input, please use an integer.\n");
            return 1;
        }
        sum += numbers[i];
    }
printf("Your sum is %d.\n", sum);
return 0;
}