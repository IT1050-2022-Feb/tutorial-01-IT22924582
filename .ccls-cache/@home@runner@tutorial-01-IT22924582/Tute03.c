/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */
//calculate the sum of the numbers 1 to n
#include <stdio.h>
int main() {
  //variable declartion 
    int n,i,sum=0;
  //get the keyboard inputs
  printf("Enter number:");
  scanf("%d",&n);
  //loop
for(i=1; i<=n; i++){
  sum=sum+i;
}
printf("the sum of the %d is: %d",n,sum);
return 0;
  }