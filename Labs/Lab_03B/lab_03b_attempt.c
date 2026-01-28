/* 
LAB 3B – INCORRECT ATTEMPT (kept intentionally)

Mistakes:
- Used x[i] when x was not an array
- Misused scanf target
- Prompt text did not match program logic

Reason for keeping:
- Documents array vs scalar confusion
- Shows why indexing requires an array
*/


#include <stdio.h>
int main(void){
    int sum = 0;
    int x;
    for(int i=0;i<3;i++){
        printf("How many numbers do you want to add?");
        if(scanf("%d", &x[i])!=1){
            printf("Invalid input. Please type an integer for how many numbers you want.");
            return 1;
        }
        sum += x[i];
    }

}
