#include <stdio.h>

/*
	This program will print its own source code when run.
*/

void	print_all(char *c)
{
	printf(c, 10, 10, 10, 9, 10, 10, 10, 9, 10, 10, 9, 10, 10, 10, 9, 9, 10, 10, 9, 34, c, 34, 10, 10, 9, 10, 10, 9, 10, 10, 9, 10, 10);
}

int		main(void)
{
	char *c = "#include <stdio.h>%c%c/*%c%cThis program will print its own source code when run.%c*/%c%cvoid%cprint_all(char *c)%c{%c%cprintf(c, 10, 10, 10, 9, 10, 10, 10, 9, 10, 10, 9, 10, 10, 10, 9, 9, 10, 10, 9, 34, c, 34, 10, 10, 9, 10, 10, 9, 10, 10, 9, 10, 10);%c}%c%cint%c%cmain(void)%c{%c%cchar *c = %c%s%c;%c%c%cprint_all(c);%c/*%c%canother comment in the main()%c*/%c%creturn (0);%c}%c";

	print_all(c);
/*
	another comment in the main()
*/
	return (0);
}
