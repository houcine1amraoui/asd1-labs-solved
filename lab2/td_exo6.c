#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int a, b, c, d, e, f, x, y;
    char h, i;
    bool g;

    a = 2;
    h = 'c';
    b = 3 * a;
    c = 10;
    i = 'r';

    d = (b - c) == a;
    e = !d;
    c = b - c - a;
    f = (c != 12) && e;

    y = c;
    x = b;
    g = h > i;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n", d);
    printf("e = %d\n", e);
    printf("f = %d\n", f);
    printf("g = %d\n", g);
    printf("h = %c\n", h);
    printf("i = %c\n", i);
    return 0;
}