#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	(void)argc;
	int i = 5;
	if (i <= 0)
		return (0);
	else if (argv[0][8] == '_')
		i--;
	char name[] = "SullyB_X.cpp";
	name[7] = i + '0';
	FILE *fp = fopen(name, "wr");
	const char *c = "#include <stdio.h>%c#include <stdlib.h>%c%cint main(int argc, char *argv[])%c{%c%c(void)argc;%c%cint i = %d;%c%cif (i <= 0)%c%c%creturn (0);%c%celse if (argv[0][8] == %c_%c)%c%c%ci--;%c%cchar name[] = %cSullyB_X.cpp%c;%c%cname[7] = i + %c0%c;%c%cFILE *fp = fopen(name, %cwr%c);%c%cconst char *c = %c%s%c;%c%c%cfprintf(fp, c, 10, 10, 10, 10, 10, 9, 10, 9, i, 10, 9, 10, 9, 9, 10, 9, 39, 39, 10, 9, 9, 10, 9, 34, 34, 10, 9, 39, 39, 10, 9, 34, 34, 10, 9, 34, c, 34, 10, 10, 9, 10, 9, 10, 9, 34, 34, 10, 9, 39, 39, 10, 9, 39, 39, 10, 9, 39, 39, 10, 9, 10, 9, 9, 10, 9, 10, 10);%c%cfclose(fp);%c%cchar compile_n_run[] = %cclang -Wall -Werror -Wextra SullyB_X.cpp -o SullyB_X ; ./SullyB_X%c;%c%ccompile_n_run[35] = i + %c0%c;%c%ccompile_n_run[51] = i + %c0%c;%c%ccompile_n_run[64] = i + %c0%c;%c%cif (i >= 0)%c%c%csystem(compile_n_run);%c%creturn (0);%c}%c";

	fprintf(fp, c, 10, 10, 10, 10, 10, 9, 10, 9, i, 10, 9, 10, 9, 9, 10, 9, 39, 39, 10, 9, 9, 10, 9, 34, 34, 10, 9, 39, 39, 10, 9, 34, 34, 10, 9, 34, c, 34, 10, 10, 9, 10, 9, 10, 9, 34, 34, 10, 9, 39, 39, 10, 9, 39, 39, 10, 9, 39, 39, 10, 9, 10, 9, 9, 10, 9, 10, 10);
	fclose(fp);
	char compile_n_run[] = "clang -Wall -Werror -Wextra SullyB_X.cpp -o SullyB_X ; ./SullyB_X";
	compile_n_run[35] = i + '0';
	compile_n_run[51] = i + '0';
	compile_n_run[64] = i + '0';
	if (i >= 0)
		system(compile_n_run);
	return (0);
}
