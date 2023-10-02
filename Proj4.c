#include <stdio.h>
#define NUM_DIGITS 4
/* Jack Williamson - Fall 2023
   Programming Project #4     */

int main(void) {

printf("Project 4 - Jack Williamson\n");

int chimpID = 0, totalChimps = 0, totalTrials = 0, result;
int score1 = 0, score2 = 0, score3 = 0, score4 = 0, score5 = 0, score6 = 0, score7 = 0, score8 = 0;
int n;

scanf("%d", &chimpID);

printf(" id      Room A       Room B        Result      Comments\n");
printf("____    ________     ________      ________    __________\n");

/*Start of the main loop body that prints the scores.*/
while(chimpID != 0) {
	printf("%d", chimpID);

	scanf("%d%d%d%d%d%d%d%d", &score1, &score2, &score3, &score4, &score5, &score6, &score7, &score8);
	result = score1 + score2 + score3 + score4 + score5 + score6 + score7 + score8;
	printf("   %2d %2d %2d %2d %2d %2d %2d %2d       ", score1, score2, score3, score4, score5, score6, score7, score8);
	
	if (score1 < 0 || score2 < 0 || score3 < 0 || score4 < 0 || score5 < 0 || score6 < 0 || score7 < 0 || score8 < 0) {
		printf("***       Invalid trial.\n");
	}
	else if (result >= 1) {
		printf("%d\n", result);
		++totalTrials;
	}
	if (result == 0) printf("***       No attempts\n");

++totalChimps;
++n;
scanf("%d", &chimpID);
}

printf("\nTotal chimps: %d\n", totalChimps);
printf("Total trials: %d\n", totalTrials);

return 0;
}
