#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
enum sex
{
	male=8,
	female,
    secret,

};
int main()
{
	enum sex e = male;
	printf("%d\n", male);
	printf("%d\n", female);
	printf("%d\n", secret);

	return 0;
}