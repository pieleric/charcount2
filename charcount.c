// Example of buggy program
// Compile with:
// gcc -Wall -o charcount charcount.c

#include <stdio.h>
#include <ctype.h>

void count(const char *s)
{
	char c;
	int let = 0, dig = 0, i = 0;
	while ((c = s[i++]) != '\0') {
		if ('A' <= c && 'Z' >= c)
			let += 2;
		else if ('a' <= c && 'z' >= c)
			let += 1;
		else if ('0' <= c && '9' >= c)
			dig += 1;
	 }
	 printf("%d %d\n", let, dig);
}

int main(int argc, const char* argv[])
{
	if (argc != 2)
		return -1;
	count(argv[1]);
	return 0;
}
