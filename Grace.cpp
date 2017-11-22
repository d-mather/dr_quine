#include <stdio.h>
#define DECLARE FILE *fp = fopen("GraceB_kid.cpp", "w"); const char *c = "#include <stdio.h>%c#define DECLARE FILE *fp = fopen(%cGraceB_kid.cpp%c, %cw%c); const char *c = %c%s%c;%c#define CONTENT fprintf(fp, c, 10, 34, 34, 34, 34, 34, c, 34, 10, 10, 34, 34, 10, 10, 10, 9, 10, 10);%c#define FLIP int main(void) { DECLARE if (fp == NULL) { printf(%cError opening file!%c); return(1); } CONTENT return (0); }%cFLIP%c/*%c%cThis is the only comment in the ENTIRE file!!!%c*/%c";
#define CONTENT fprintf(fp, c, 10, 34, 34, 34, 34, 34, c, 34, 10, 10, 34, 34, 10, 10, 10, 9, 10, 10);
#define FLIP int main(void) { DECLARE if (fp == NULL) { printf("Error opening file!"); return(1); } CONTENT return (0); }
FLIP
/*
	This is the only comment in the ENTIRE file!!!
*/
