#include<stdio.h>
#include<pthread.h>

void * printxs (void * unused) {
	while(1)
		fputc('x', stderr);
	return NULL;
}

int main() {
	pthread_t x_thread;
	pthread_create(&x_thread, NULL, &printxs, NULL);

	while(1)
		fputc('o', stderr);
	return 0;
}
