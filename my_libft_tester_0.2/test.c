#include "head.h"
void ft_bzero(void *str, size_t n)
{
    char *ptr;
    ptr = (char *) str;
    size_t i = 0;
    while (i < n)
    {
        ptr[i] = '\0';
        i++;
    }
}
void *ft_memmove(void *str1, const void *str2, size_t n)
{
    char *des;
    const char *sr;
    
    des = (char *) str1;
    sr = (const char *) str2;
    
    char *temp;
    char array[40];
    temp = array;
    unsigned int i = 0;
    
    while (i < n)
    {
        temp[i] = sr[i];
        i++;
    }
    i = 0;
    while(i < n)
    {
        des[i] = temp[i];
        i++;
    }
    return (des);
}
void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    char        *sr;
    sr = (char *) src;
    char *des;
    des = (char *) dest;
    
    size_t i = -1;      //weird shit but working lol
    if ((src != NULL) || (dest != NULL))
	{
		while (++i < n)
		{
			des[i] = sr[i];
		}
	}
    return (des);
}size_t    ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t    i;
    size_t    counter;

    i = 0;
    counter = 0;
    if(!dst || !src)
    {
        return 0;
    }
    while (src[counter] != '\0')
    {
        counter++;
    }
    if (size == 0)
    {
        return (counter);
    }
    while(i < size - 1 && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (counter);
}

int main()
{
	char	*dest;
     if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
     {
          printf(RED "malloc gone wrong in tester, try again\n" RESET);
          return 0;
     }
     memset(dest, 0, 15);
	memset(dest, 'r', 6);

     // char *ptr;
     // ptr = strlcpy(dest, "isch liebe disch mein Sonnenlicht", -1);
     // printf("out: %s\n", ptr);

     size_t val;
     val = strlcpy(dest, "isch liebe disch mein Sonnenlicht", -11);
     printf("val: %zu\n", val);


     if(ft_strlcpy(dest, "isch liebe disch mein Sonnenlicht", -1) == strlcpy(dest, "isch liebe disch mein Sonnenlicht", -1))
     {
          printf(GRN"hell yeah\n"RESET);
     }
     else
     {
          printf(RED"nope\n"RESET);
     }
}
