#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>
/**
 * struct ch - struct ch
 * @str: pointer to string
 * @f: funtion pointer
 */
typedef struct ch
{
	char *str;
	int (*f)(va_list);
} chr_st;
<<<<<<< HEAD
/*from My struct array func*/
=======
/*from struct array func*/
>>>>>>> 5c647cbb5fbf2647f2831f7d7704196bfead6b81
int count_spec(char ch, va_list arg);

int _putchar(char c);
int _printf(const char *format, ...);
<<<<<<< HEAD
/*fuctions can be found in functions.c*/
=======
/*These fuctions can be found in functions.c*/
>>>>>>> 5c647cbb5fbf2647f2831f7d7704196bfead6b81
int _strlen(char *c);
int print_hexa(unsigned int num, int form);
void _puts(char *str);
char *rot13(char *s);

<<<<<<< HEAD
/*This are from  specifer functions.c */
=======
/*from specifer functions.c */
>>>>>>> 5c647cbb5fbf2647f2831f7d7704196bfead6b81
int use_c(va_list arg);
int use_s(va_list arg);
int use_i(va_list arg);
int use_d(va_list arg);
int use_u(va_list arg);
int use_o(va_list arg);
/*from binary.c */
int use_b(va_list arg);
<<<<<<< HEAD
/*These from more_functions.c */
=======
/*from more_functions.c */
>>>>>>> 5c647cbb5fbf2647f2831f7d7704196bfead6b81
int use_hex(va_list arg);
int use_HEX(va_list arg);
int use_S(va_list arg);
int use_p(va_list arg);
int use_r(va_list arg);

/*From rot_13.c*/
int use_R(va_list arg);

#endif
