#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cmpfunc(const void * a, const void * b) {
  return (*(int*)a - *(int*)b);
}

double mean(int * items, int count) {
  int i;
  double sum = 0;
  for(i =0; i < count; i++) {
      sum += items[i];
  }
  return sum / count;
}

double median(int * items, int count) {
  int mid = ((double)count / 2.0) + .6;
  return (double)items[mid];
}
int main() {
  int nums[100];
  
  int i;
  for(i = 0; i < 100; i++) {
    nums[i] = 99999999;
  }
  
  int count = 0;
  double k;
  while (fscanf(stdin, "%lf", &k) == 1.) {
    nums[count] = k;
    count ++;
  }
  //void qsort(void *base, size_t nitems, size_t size, double (*compar)(const void *, const void*))
  qsort(nums, count, sizeof(int), cmpfunc );
  
  printf("Low:%d\n", nums[0]);
  printf("High:%d\n", nums[count - 1]);
  printf("Mean:%.2lf\n", mean(nums, count));
  printf("Median:%.2lf\n", median(nums, count));
  return 0;
}


