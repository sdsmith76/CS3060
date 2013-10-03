#include<stdio.h>
#include<pthread.h>
int isPrime(int number) {
	int num = number;
	int i;
	if ( num < 2 || ( num > 2 && num % 2 == 0)) 
		return 0;
	for (i = 3; i * i <= num; i += 2) {
		if( num % i == 0) {
			return 0;
		}
	}
	return 1;
}

void * thread_func(void * properties) {
	return NULL;
}
struct props {
	int num;
	int result;
};

int main() {
	int count = 0;
	pthread_t threads[100];
	int k;
	struct props p;
	while(fscanf(stdin, "%d", &k) == 1) {
		p = malloc(sizeof(struct props));
		p.num = k;
		pthread_create(&threads[count], NULL, &thread_func, &p);  
		count++;
	}
	return 0;
}
