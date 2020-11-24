#include <stdarg.h>

void my_print_1(char *arg, va_list ap, char *exceed, int index);
void my_print_2(char *arg, va_list ap, char *exceed, int index);
void my_print_3(char *arg, va_list ap, char *exceed, int index);
void my_print_4(char *arg, va_list ap, char *exceed, int index);
void my_print_5(char *arg, va_list ap, char *exceed, int index);
void my_print_6(char *arg, va_list ap, char *exceed, int index);
void my_print_7(char *arg, va_list ap, char *exceed, int index);
void my_print_8(char *arg, va_list ap, char *exceed, int index);
void my_print_9(char *arg, va_list ap, char *exceed, int index);
void my_print_10(char *arg, va_list ap, char *exceed, int index);
void my_print_11(char *arg, va_list ap, char *exceed, int index);
char *get_param(char *str, int start);
int manage_param(char *arg, va_list ap);
int my_strlen(char const *str);
void my_putchar(char c);
void my_print_dictionary(void);

void (*print_entries[172])(char *arg, va_list ap, char *exceed, int index);