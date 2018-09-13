#include <stdio.h>

void problem1(); //233168
void problem5(); //232792560
void problem6(); //25164150

int main(){
        // Problem 1
        problem1();

        // Problem 5
        problem5();

        // Problem 6
        problem6();

        return 0;
}

void problem1(){
        int sum;
        int i;
        for (i  = 0; i  < 1000; i++) {
                if (i  % 3 == 0 || i  % 5 == 0)
                        sum += i;
        }
        printf("Problem 1:\nSum of all natural multiples of 3 and 5 below 1000 = %d\n", sum);
}

void problem5(){
        // Problem 5
        int num = 20;
        while (1) {
                if ( num % 11 == 0 && num % 12 == 0 && num % 13 == 0 && num % 14 == 0 && num % 15 == 0 &&
                     num % 16 == 0 && num % 17 == 0 && num % 17 == 0 && num % 18 == 0 && num % 19 == 0 && num % 20 == 0 ) {
                        printf("Problem 2:\nSmallest number divisible by 1 through 20 = %d", num);
                        break;
                }
                else{
                        num++;
                }
        }
}

void problem6(){
        int squared = 0;
        int sum = 0;
        int i;
        for (i = 1; i <= 100; i++) {
                squared += i * i;
                sum += i;
        }
        printf("\nProblem 6:" );
        printf("\nSolution = %d\n", sum*sum - squared);
}
