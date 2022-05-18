/*
 * Recursively computes greatest common divisors.
 * CSC 225, Assignment 6
 * Given code, Spring '21
 * TODO: Complete this file.
 */
#include <stdio.h>
#include "gcd.h"

int main(void) {
	int n1;
	int n2;
	int result;
	printf("Enter two positive integers: ");
	scanf("%d", &n1);
	scanf("%d", &n2);
	result = gcd(n1, n2);
	printf("gcd(%d, %d) = %d", n1, n2, result);
	return 0;
}
