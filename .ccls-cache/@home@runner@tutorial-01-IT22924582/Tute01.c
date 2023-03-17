/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two mark
#include<stdio.h>
int main (){
  //variable declaration 
  int mark1,mark2;
  float avg;
  //get keyboard inputs
  printf("Enter mark1:");
  scanf("%d",&mark1);
  printf("Enter mark2:");
  scanf("%d",&mark2);

  //calculation 
  avg=mark1+mark2/2;

  printf("avg=%.2f",avg );
}