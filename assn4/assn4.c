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

int main() {
	return 0;
}
