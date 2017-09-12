#include <stdio.h>
#include <stdint.h>

int main()
{
    uint64_t x = 0xFFFFFFFFFFFFFFFF;
    --x;
    printf("Hello World! %llx\n", x);
    printf("Hello World! %llx\n", x*2);
    uint64_t y = 0;
    printf("Hello World! %llx\n", x/y);
    char * c = NULL;
    printf("Hello1 %s\n", c);
    printf("Hello2 %c\n", *c);

    for (char * p = 0; (int)p<100; ++p)
      printf("%c|%02x", *p, *p);
    printf("\n");


    printf("Bye...");
}
