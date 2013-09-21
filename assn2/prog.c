#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cmpfunc(const void * a, const void * b) {
  return (*(int*)a - *(int*)b);
}
int main() {
  int nums[100];
  
  int i;
  for(i = 0; i < 100; i++) {
    nums[i] = 99999999;
  }
  
  int count = 0;
  int k;
  while (fscanf(stdin, "%d", &k) == 1.) {
    nums[count] = k;
    count ++;
  }
  //void qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void*))
  qsort(nums, count, sizeof(int), cmpfunc );
  
  printf("smallest: %d\n", nums[0]);
  printf("largest: %d\n", nums[count - 1]);
  
  return 0;
}
