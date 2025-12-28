/* Include guard: */
#ifndef STRING_INVERTER_C
#define STRING_INVERTER_C

/* Importations: */
#include <stdio.h>


/* Main code: */
int main()
{
	/* Test 1 version variables: */
	#define STRING_INVERTER_FULL_VERSION 100.0L /* Test 1 full version variable.  */
	#define STRING_INVERTER_MAJOR_VERSION 1.0L  /* Test 1 major version variable. */
	#define STRING_INVERTER_MINOR_VERSION 0.0L  /* Test 1 minor version variable. */
	#define STRING_INVERTER_PATCH_VERSION 0.0L  /* Test 1 patch version variable. */

	/* Local variables: */
	int character = 0;                          /* Stored character variable.     */
	char string[131072] = "";                   /* Text string variable.          */

	/* Main commands: */
	fputs("Type a text: ", stdout);
	fgets(string, sizeof(string), stdin);

	for(character = sizeof(string) - 1; character >= 0; --character)
	{
		printf("%c", string[character]);
	}

	return 0;
}

/* End code: */
#endif
