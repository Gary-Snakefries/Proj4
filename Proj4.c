#include <stdio.h>
#include <stdbool.h>

#define NUM_DIGITS 4
/* Jack Williamson - Fall 2023
   Programming Project #4     */

int main(void) {

printf("Project 4 - Jack Williamson\n");

int chimpID = 0, totalChimps = 0, totalTrials = 0, result;
int score1 = 0, score2 = 0, score3 = 0, score4 = 0, score5 = 0, score6 = 0, score7 = 0, score8 = 0;
int n, nonZeros;
bool containsErrors = 0;

scanf("%d", &chimpID);

printf(" id      Room A         Room B        Result      Comments\n");
printf("____  ____________   ___________      ________    __________\n");

/*Start of the main loop body that prints the scores.*/
while(chimpID != 0) {
	printf("%d", chimpID);

	scanf("%d%d%d%d%d%d%d%d", &score1, &score2, &score3, &score4, &score5, &score6, &score7, &score8);
	result = score1 + score2 + score3 + score4 + score5 + score6 + score7 + score8;
	printf("   %2d %2d %2d %2d   %2d %2d %2d %2d       ", score1, score2, score3, score4, score5, score6, score7, score8);

	if (score1 < 0 || score2 < 0 || score3 < 0 || score4 < 0 || score5 < 0 || score6 < 0 || score7 < 0 || score8 < 0) {
		printf("***       Invalid trial.\n");
		containsErrors = 1;
	}
	else if (result >= 1) {
		printf("%d", result);
		nonZeros = 0;
		if (score1 > 0) ++nonZeros;
		if (score2 > 0) ++nonZeros;
		if (score3 > 0) ++nonZeros;
		if (score4 > 0) ++nonZeros;
		if (score5 > 0) ++nonZeros;
		if (score6 > 0) ++nonZeros;
		if (score7 > 0) ++nonZeros;
		if (score8 > 0) ++nonZeros;
		++totalTrials;
		if (nonZeros > 5) printf("      More than 5 (%d).\n", nonZeros);
		else if (nonZeros < 5) printf("         Less than 5 (%d).\n", nonZeros);
		else printf("\n");
	}
	if (result == 0) printf("***       No attempts\n");

++totalChimps;
++n;
scanf("%d", &chimpID);
}

printf("\nTotal chimps: %d\n", totalChimps);
printf("Total trials: %d\n", totalTrials);
if (containsErrors) printf("(data errors were found)\n");
return 0;
}
