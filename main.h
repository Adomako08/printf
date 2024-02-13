#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

#define S_LONG 2
#define S_SHORT 1

/**
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 *
 */
typedef struct format
{
	char *ph;
	int (*function)();
} convert;

/**
 * typedef struct fmt fmt_t - Struct op
 *
 * @fmt: The format.
 * @fm_t: The function associated.
 */
typedef struct fmt fmt_t;



int print_dec(va_list args);
int _strlen(char *s);
int rev_string(char *s);
int print_37(void);
int print_c(va_list val);
int print_string(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);
int *_strcpy(char *dest, char *src);
int print_pointer(va_list val);
int print_unsigned(va_list args);
int print_hex_extra(unsigned long int num);
int _strlenc(const char *s);
int print_HEX_extra(unsigned int num);
int print_exclu_string(va_list val);
int print_HEX(va_list val);
int print_hex(va_list val);
int print_octal(va_list val);
int print_binary(va_list val);
int print_rev_str(va_list args);
int print_rot13_str(va_list args);
int print_int(va_list args);
int print_flags(const char *format, int *i);
int print_precision(const char *format, int *i, va_list list);
int print_size(const char *format, int *i);
int print_width(const char *format, int *i, va_list list);
int print_handle(const char *fmt, int *ind, va_list list, char buffer[],
	int flags, int width, int precision, int size);
int ch_printable(char c);
int append_hexa(char ascii_code, char buffer[], int i);
int ch_digit(char c);
long int convert_number_size(long int num, int size);
long int convert_unsigned_size(unsigned long int num, int size);
int handle_char_write(char c, char buffer[],
        int flags, int width, int precision, int size);

#endif
