#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cmpfunc(const void * a, const void * b) {
  return (*(int*)a - *(int*)b);
}

int mean(int * items, int count) {
  int i;
  int sum = 0;
  for(i =0; i < count; i++) {
      sum += items[i];
  }
  return sum / count;
}

int median(int * items, int count) {
  int mid = ((float)count / 2.0) + .6;
  printf("mid %d\n", mid);
  return items[mid];
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
  printf("mean: %d\n", mean(nums, count));
  printf("median: %d\n", median(nums, count));
  return 0;
}


