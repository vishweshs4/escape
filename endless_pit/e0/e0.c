#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
	int i;
	time_t var0 = time(NULL);
	srand(var0);
	
	int var1 = 0;
	char buf0[500];
	char buf1[500];
	
	for (i=0; i<50; i++) {
		int var2 = rand() % 100;
		printf("%d days without an incident.\n", i);
		sprintf(buf1, "%d", var2);
		scanf(" %10s", buf0);
		strtok(buf0, "\n");
		if (strcmp(buf1, buf0) != 0) {
			printf("Well that didn't take long.\n");
			printf("You should have used %s.\n", buf1);
			exit(0);
		}
	}
	printf("How very unpredictable. Level Cleared\n");
}