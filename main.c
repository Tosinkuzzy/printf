#include "main.h"

int main(void)
{
int _scan = 0;
int scan = 0;
int len;
int len2;
long int l = (long int)INT_MAX + 1024;
unsigned int ui = (unsigned int)INT_MAX + 1024;

len = _printf("Let's try to printf a simple sentence.\n");
len2 = printf("Let's try to printf a simple sentence.\n");

scan = printf("%s  %%\n", "KABOOM!!", 'X');
_scan = _printf("%s  %%\n", "KABOOM!!", 'X');

scan = printf("String:[%s]\n", "I am a string !");
_scan = _printf("String:[%s]\n", "I am a string !");

scan = printf("%s %c\n", NULL, 'K');
_scan = _printf("%s %c\n", NULL, 'K');
scan = printf("%");
_scan = _printf("%");
scan = printf("test: %i %s %c %\n", -59, "Kaboom", '!');
_scan = _printf("test: %i %s %c %\n", -59, "Kaboom", '!');
scan = printf("Length:[%d, %i]\n", len, len);
_scan = _printf("Length:[%d, %i]\n", len2, len2);
printf("Len:[%d]\n", len);
_printf("Len:[%d]\n", len2);
printf("%d", l);
_printf("%d", l);
printf("\n");
scan = printf("%d", INT_MAX);
printf("\n");
_scan = _printf("-> %d", INT_MAX);
printf("\n");
printf("%i", 1024);
_printf("%i", 1024);
printf("\n");
printf("%b\n", 98);
_printf("%b\n", 98);
printf("%u\n", -42);
printf("%u\n", ui);
_printf("%u\n", ui);
printf("Unsigned octal:[%o]\n", ui);
_printf("Unsigned octal:[%o]\n", ui);
printf("Unsigned hexadecimal:[%x, %X]\n", ui, 10);
_printf("Unsigned hexadecimal:[%x, %X]\n", ui, 10);
print_special_helper('\n');
_printf("%S\n", "\n");
_printf("%S\n", "Best\nSchool");
_scan = _printf("%S", "\n");
_scan = _printf("%S", "\x01\x02\x03\x04\x05\x06\x07");
printf("\n");
_printf("Could you print some non-prntable characters?\n%S\nThanks!\n", "Sure:\x1F\x7F\n");
_printf("- What did you say?\n- %S\n- That's what I thought.\n", "");
printf("\nor: %i\n", scan);
printf("cl: %i\n", _scan);

return (scan);
}

