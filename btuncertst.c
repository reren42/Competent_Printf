#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main()
{
    void *ponter;
    char *ponterr = "pontero";

    ft_string("\n--------------------------\n\n   ı~~~~~~~~~~~~~~~~~ı\n   |                 |\n   ~ ft_printf tests ~\n   |                 |\n   ı~~~~~~~~~~~~~~~~~ı\n");
    ft_char('\n');

    ft_string("\n*-- printf --*\n");
    ft_string(".  printf: \"");
    printf("=> (%d)\n",    printf(NULL, 42));
    ft_string("ft_printf: \"");
    printf("=> (%d)\n", ft_printf(NULL, 42)); 
    ft_char('\n');

    ft_string("\n*-- printf2 --*\n");
    ft_string(".  printf: \"");
    printf("=> (%d)\n",    printf(" test_case \"\n", 42) - 2);
    ft_string("ft_printf: \"");
    printf("=> (%d)\n", ft_printf(" test_case \"\n", 42) - 2); 
    ft_char('\n');

    ft_string("\n*-- printf3 --*\n");
    ft_string(".  printf: \"");
    printf("=> (%d)\n",    printf("", 42));
    ft_string("ft_printf: \"");
    printf("=> (%d)\n", ft_printf("", 42)); 
    ft_char('\n');

    ft_string("\n*-- printf4 --*\n");
    ft_string(".  printf: \"");
    printf("=> (%d)\n",    printf(" %K btuncer %w \"\n", 'A', 48, '0', NULL) - 2);
    ft_string("ft_printf: \"");
    printf("=> (%d)\n", ft_printf(" %K btuncer %w \"\n", 'A', 48, '0', NULL) - 2); 
    ft_char('\n');

    ft_string("\n*-- %c --*\n");
    ft_string(".  printf: \"");
    printf("=> (%d)\n",    printf(" %c %c %c %c %c %c \"\n", 'A', 48, '0', NULL, -42, 1024) - 2);
    ft_string("ft_printf: \"");
    printf("=> (%d)\n", ft_printf(" %c %c %c %c %c %c \"\n", 'A', 48, '0', NULL, -42, 1024) - 2); 
    ft_char('\n');

    ft_string("\n*-- %s --*\n");
    ft_string(".  printf: \"");
    printf("=> (%d)\n",    printf(" %s %s %s %s %s %s \"\n", "test_case", NULL, "intrabtuncer", "", " ", ponterr) - 2);
    ft_string("ft_printf: \"");
    printf("=> (%d)\n", ft_printf(" %s %s %s %s %s %s \"\n", "test_case", NULL, "intrabtuncer", "", " ", ponterr) - 2); 
    ft_char('\n');

    ft_string("\n*-- %p --*\n");
    ft_string(".  printf: \"");
    printf("=> (%d)\n",    printf(" %p %p %p %p %p %p %p %p \"\n", "ponter", ponter, NULL, "", -42, ponterr, LONG_MIN, LONG_MAX) - 2);
    ft_string("ft_printf: \"");
    printf("=> (%d)\n", ft_printf(" %p %p %p %p %p %p %p %p \"\n", "ponter", ponter, NULL, "", -42, ponterr, LONG_MIN, LONG_MAX) - 2); 
    ft_char('\n');

    ft_string("\n*-- %p2 (advanced: it's OK to fail these) --*\n");
    ft_string(".  printf: \"");
    printf("=> (%d)\n",    printf(" %p %p %p %p %p %p \"\n", LONG_MIN + 1, LONG_MIN + 2, LONG_MIN + 3, -ULONG_MAX, ULONG_MAX, ULONG_MAX - 1) - 2);
    ft_string("ft_printf: \"");
    printf("=> (%d)\n", ft_printf(" %p %p %p %p %p %p \"\n", LONG_MIN + 1, LONG_MIN + 2, LONG_MIN + 3, -ULONG_MAX, ULONG_MAX, ULONG_MAX - 1) - 2); 
    ft_char('\n');

    ft_string("\n*-- %d && %i --*\n");
    ft_string(".  printf: \"");
    printf("=> (%d)\n",    printf(" %d %d %d %d %d %d %d %d %d %i \"\n",
                                42, -42, INT_MIN, INT_MAX, NULL, "TEST", "", LONG_MIN, LONG_MAX, ponter) - 2);
    ft_string("ft_printf: \"");
    printf("=> (%d)\n", ft_printf(" %d %d %d %d %d %d %d %d %d %i \"\n",
                                42, -42, INT_MIN, INT_MAX, NULL, "TEST", "", LONG_MIN, LONG_MAX, ponter) - 2); 
    ft_char('\n');
    
    ft_string("\n*-- %u --*\n");
    ft_string(".  printf: \"");
    printf("=> (%d)\n",    printf(" %u %u %u %u %u %u %u \"\n", INT_MIN, 2147483650, -1, NULL, ULONG_MAX, LONG_MAX, LLONG_MAX) - 2);
    ft_string("ft_printf: \"");
    printf("=> (%d)\n", ft_printf(" %u %u %u %u %u %u %u \"\n", INT_MIN, 2147483650, -1, NULL, ULONG_MAX, LONG_MAX, LLONG_MAX) - 2); 
    ft_char('\n');

    ft_string("\n*-- %x --*\n");
    ft_string(".  printf: \"");
    printf("=> (%d)\n",    printf(" %x %x %x %x %x %x %x %x \"\n", NULL, INT_MIN, INT_MAX, 0, '0', LONG_MIN, LONG_MAX, LLONG_MAX) - 2);
    ft_string("ft_printf: \"");
    printf("=> (%d)\n", ft_printf(" %x %x %x %x %x %x %x %x \"\n", NULL, INT_MIN, INT_MAX, 0, '0', LONG_MIN, LONG_MAX, LLONG_MAX) - 2); 
    ft_char('\n');

    ft_string("\n*-- %X --*\n");
    ft_string(".  printf: \"");
    printf("=> (%d)\n",    printf(" %X %X %X %X %X %X %X %X \"\n", NULL, INT_MIN, INT_MAX, 0, '0', LONG_MIN, LONG_MAX, LLONG_MAX) - 2);
    ft_string("ft_printf: \"");
    printf("=> (%d)\n", ft_printf(" %X %X %X %X %X %X %X %X \"\n", NULL, INT_MIN, INT_MAX, 0, '0', LONG_MIN, LONG_MAX, LLONG_MAX) - 2); 
    ft_char('\n');

    ft_string("\n*-- %% --*\n");
    ft_string(".  printf: \"");
    printf("=> (%d)\n",    printf(" %% %%%|%%%%|%%%%% | %%%%%%%%%%%% %%%%% \"\n") - 2);
    ft_string("ft_printf: \"");
    printf("=> (%d)\n", ft_printf(" %% %%%|%%%%|%%%%% | %%%%%%%%%%%% %%%%% \"\n") - 2); 
    ft_char('\n');

    ft_string("\n\n   ░░░░░░░░░░░░░░░░░░░░\n   ░▄▀▄▀▀▀▀▄▀▄░░░░░░░░░\n   ░█░░░░░░░░▀▄░░░░░░▄░\n   █░░▀░░▀░░░░░░░▀▄▄░░█░█\n   █░▄░█▀░▄░░░░░░░░▀▀░░█\n   █░░▀▀▀▀░░░░░░░░░░░░█\n   █░░░░░░░░░░░░░░░░░░█\n   █░░░░░░░░░░btuncer░█\n   ░█░░▄▄░░▄▄▄▄░░▄▄░░█░\n   ░█░▄▀█░▄▀░░█░▄▀█░▄▀░\n");
}

