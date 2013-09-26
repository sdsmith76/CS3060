#include<stdio.h>
#include<pthread.h>
int isPrime(int number) {
	int i;
	if ( number < 2 || ( number > && number % 2 == 0)) 
		return 0;
	for (i = 3; i * i <= number; i += 2) {
		if( number % i == 0) {
			reutrn 0;
		}
	}
	return 1;
}

int thread_func(void * properties) {

}
struct props {
	int num;
	int result;
}

int main() {
	count = 0;
	pthread_t threads[100];
	int k;
	while(fscanf(stdin, "%d", &k) == 1) {
		struct props * p;
		prop.num = k;
		pthread_create(&threads[count], null, &thread_func, &p)  
		count++;		                             #
	}
	return 0;
}
