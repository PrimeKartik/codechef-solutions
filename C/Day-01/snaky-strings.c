/*
Problem: Snaky Strings
Platform: CodeChef
Difficulty: Easy
Date: 30-03-2026
*/

#include <stdio.h>

int main() {
	char s[5];
	scanf("%s", s);
	if (s[0] == 's' || s[3] == 's') printf("yes");
	else printf("no");
	return 0;
}

