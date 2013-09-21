#include<stdio.h>
#include<string.h>
int cmpfunc(const void * a, const void * b) {
  return (*(int*)a - *(int*)b);
}
int main() {
  
  printf("hello World%d\n\n", 14);
  return 0;
}
