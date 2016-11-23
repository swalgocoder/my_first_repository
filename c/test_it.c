#include <stdio.h>
//#include <string.h>
// Function declarations
// typedef __w64 unsigned int size_t
//size_t strlen(const char *);
//char *strrev(char *);
//char *itoa(int, char *, int);
//int main() {
//	int num = 123;
//	char buf[5];
//	itoa(num, buf, 10);
//	printf("%s\n", buf);
//	return 0;
//}

int itoa(int n, char s[])
{
	static char digits[] = "0123456789abcdefghijklmnopqrstuvwxyz";
	int i=0, sign;
    
	if ((sign = n) < 0)
		n = -n;
	do {
		s[i++] = digits[n % 10];
	} while ((n /= 10) > 0);
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	return (i);
}

int my_number(int n)
{
char buffer[5];

itoa(n, buffer);
	
	printf("%d", i);
}
