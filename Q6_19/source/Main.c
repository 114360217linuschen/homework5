#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(0));
	int dice1 = 0;
	int dice2 = 0;
	int total[13] = {0};
	for (int i = 0; i < 36000;i++) {
		dice1 = rand() % 6 + 1;
		dice2 = rand() % 6 + 1;
		for (int j = 2; j < 13; j++) {
			if (dice1 + dice2 == j) {
				total[j]++;
			}
		}
	}
	for (int i = 2; i < 13; i++) {
		printf("%d = %d ,%.2f%%\n",i,total[i], total[i]/36000.0*100);
	}
	return 0;
}