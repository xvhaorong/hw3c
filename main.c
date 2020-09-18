// Author: Haorong Xu hxx5086@psu.edu 
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int sum=0;
int digit_sum(int n){
  if(n>0){
    sum=sum+n%10;
    digit_sum(n/10);
  }
  return sum;
}

int main(void) {
  char*num=readline("Enter an int: ");
  int c=atoi(num);
  printf("sum of digits of %d is %d.\n", c, digit_sum(c));
  return 0;
}