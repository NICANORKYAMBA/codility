#include "BinaryGap.h"

/**
 * main - Entry point
 *
 * Return: void
 */

int main(void)
{
	int N = 1041;
	int M = 34;
	int X = 10;
	int G = -30;
	int J = 200;

	printf("The length of the longest binary gap for %d is %d", N, solution(N));
	printf("\nThe length of the longest binary gap for %d is %d", M, solution(M));
	printf("\nThe length of the longest binary gap for %d is %d", X, solution(X));
	printf("\nThe length of the longest binary gap for %d is %d", G, solution(G));
	printf("\nThe length of the longest binary gap for %d is %d", J, solution(J));

	return (0);
}
