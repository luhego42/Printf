#include <stdio.h>
#include <stdarg.h>

void ft_ft(char *str, ...)
{
	va_list	ap;
	int i;
	char *s;
	char *s1;
	
	va_start(ap, str);
	
	i = va_arg(ap, int);
	s = va_arg(ap, char *);
	s1 = va_arg(ap, char *);
	printf("%s, %d, %s, %s", str, i, s1, s);
	va_end(ap);
}

int main(void)
{
	int yolo = 10;
	char *test = "yolo";
	char *test2 = "pingoun_last";

	ft_ft("igfwbf", yolo, test, test2);
}
