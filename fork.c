#import <stdio.h>

#define MAX_CHILD_FORKS 1000

int main(void) {
	printf("Running performance test.  \r\n");

	int i = 0;

	for(i=0; i<MAX_CHILD_FORKS; i++) {
		fork();
		printf("Launched %d\r\n",i);
	}
}