#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	(void)argc;
	int i = 5;
	if (i <= 0)
		return (0);
	else if (argv[0][7] == '_')
		i--;
	char name[] = "Sully_X.c";
	name[6] = i + '0';
	FILE *fp = fopen(name, "wr");
	char *c = "#include <stdio.h>%c#include <stdlib.h>%c%cint main(int argc, char *argv[])%c{%c%c(void)argc;%c%cint i = %d;%c%cif (i <= 0)%c%c%creturn (0);%c%celse if (argv[0][7] == %c_%c)%c%c%ci--;%c%cchar name[] = %cSully_X.c%c;%c%cname[6] = i + %c0%c;%c%cFILE *fp = fopen(name, %cwr%c);%c%cchar *c = %c%s%c;%c%c%cfprintf(fp, c, 10, 10, 10, 10, 10, 9, 10, 9, i, 10, 9, 10, 9, 9, 10, 9, 39, 39, 10, 9, 9, 10, 9, 34, 34, 10, 9, 39, 39, 10, 9, 34, 34, 10, 9, 34, c, 34, 10, 10, 9, 10, 9, 10, 9, 34, 34, 10, 9, 39, 39, 10, 9, 39, 39, 10, 9, 39, 39, 10, 9, 10, 9, 9, 10, 9, 10, 10);%c%cfclose(fp);%c%cchar compile_n_run[] = %cclang -Wall -Werror -Wextra Sully_X.c -o Sully_X ; ./Sully_X%c;%c%ccompile_n_run[34] = i + %c0%c;%c%ccompile_n_run[47] = i + %c0%c;%c%ccompile_n_run[59] = i + %c0%c;%c%cif (i >= 0)%c%c%csystem(compile_n_run);%c%creturn (0);%c}%c";

	fprintf(fp, c, 10, 10, 10, 10, 10, 9, 10, 9, i, 10, 9, 10, 9, 9, 10, 9, 39, 39, 10, 9, 9, 10, 9, 34, 34, 10, 9, 39, 39, 10, 9, 34, 34, 10, 9, 34, c, 34, 10, 10, 9, 10, 9, 10, 9, 34, 34, 10, 9, 39, 39, 10, 9, 39, 39, 10, 9, 39, 39, 10, 9, 10, 9, 9, 10, 9, 10, 10);
	fclose(fp);
	char compile_n_run[] = "clang -Wall -Werror -Wextra Sully_X.c -o Sully_X ; ./Sully_X";
	compile_n_run[34] = i + '0';
	compile_n_run[47] = i + '0';
	compile_n_run[59] = i + '0';
	if (i >= 0)
		system(compile_n_run);
	return (0);
}
