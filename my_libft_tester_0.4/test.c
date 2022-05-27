#include "head.h"

int main()
{
    char dest[30]; memset(dest, 0, 30);
    char * src = (char *)"AAAAAAAAA";
	//dest[0] = 'B';
    //dest[0] = '\0';
    dest[10] = 'a';
    size_t val1;
    size_t val2;
    memset(dest, 'C', 5);
    val1 = strlcat(dest, src, 12);
    //val2 = ft_strlcat(dest,src,-1);

    printf("val1: %lu\n", val1);
    //printf("val2: %lu\n", val2);
}
