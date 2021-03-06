/*
 * This file implements functions for
 *  - checking instruction parameters for range
 */

#include <stdlib.h>
#include <stdio.h>
#include "../inc/global.h"

// reference to linenumber supplied by flex
extern int yylineno;

/*
 * verbose output (if flag is set)
 * msg: verbose message
 */
void yyverbose(char* msg) {
	if (verbose) {
		// if verbose flag is set

		if (!isfirstrun) {
			// output verbose messages in second run
			printf("%s:% 3i: info: %s (\"%s\")\n", inputfile, yylineno, msg,
					linebuf);
		}
	}
}

/*
 * error handler
 * msg: error message
 */
void yyerror(char *s) {

	if ((!continueonerror) || (!isfirstrun)) {
		// output error messages if either stop at error or in second run
		fprintf(stderr, "%s:% 3i: error: %s (\"%s\")\n", inputfile, yylineno, s,
				linebuf);
	}

	// set error happened flag
	errorhappened = 1;
	if (!continueonerror) {
		// if stop on error, stop
		destruct(EXIT_FAILURE);
	}
}
