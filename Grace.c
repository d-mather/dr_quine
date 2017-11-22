#include <stdio.h>
#define DECLARE FILE *fp = fopen("Grace_kid.c", "w"); char *c = "#include <stdio.h>%c#define DECLARE FILE *fp = fopen(%cGrace_kid.c%c, %cw%c); char *c = %c%s%c;%c#define CONTENT fprintf(fp, c, 10, 34, 34, 34, 34, 34, c, 34, 10, 10, 34, 34, 10, 10, 10, 9, 10, 10);%c#define FLIP(zero) int main(void) { DECLARE if (fp == NULL) { printf(%cError opening file!%c); return(1); } CONTENT return (zero); }%cFLIP(0)%c/*%c%cThis is the only comment in the ENTIRE file!!!%c*/%c";
#define CONTENT fprintf(fp, c, 10, 34, 34, 34, 34, 34, c, 34, 10, 10, 34, 34, 10, 10, 10, 9, 10, 10);
#define FLIP(zero) int main(void) { DECLARE if (fp == NULL) { printf("Error opening file!"); return(1); } CONTENT return (zero); }
FLIP(0)
/*
	This is the only comment in the ENTIRE file!!!
*/
