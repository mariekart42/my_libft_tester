#include "head.h"

//       SIZE_T strlcat(CHAR *dst, CONST CHAR *src, SIZE_T dstsize);
//-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-

size_t    ft_strlcat(char *dst, const char *src, size_t len)
{
    char        *d;
    const char        *s;
    size_t        i;
    size_t        d_len;

    d = dst;
    s = (char *) src;
    if(!dst||!src)
        return ((size_t)NULL);

    i = len;
    d_len = 0;
    while ((i != 0) && (*d != '\0'))
    {
        d++;
        i--;
    }
    d_len = d - dst;
    i = len - d_len;
    if (i == 0)
        return (d_len + ft_strlen(s));
    while (*s != '\0')
    {
        if (i != 1)
            ft_strlcpy (d++, s, i--);
    s++;
    }
    *d = '\0';
    return (d_len + (s - src));
}

//-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-

void result(int k)
{
     if(k==0)
          printf(RED "    NO :(\n" RESET);
     else if(k==1)
          printf(GRN"   yee :D\n"RESET);
}
void excute(int i)
{
	char	*dest;
     if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
     {
          printf(RED "malloc gone wrong in tester, try again\n" RESET);
          return ;
     }
     memset(dest, 0, 15);
	memset(dest, 'r', 6);
     if(i==0)
     {
          if(ft_strlcpy(dest, "banana", 15) == strlcpy(dest, "banana", 15))
               result(1);
          else
               result(0);
     }
     else if(i==1)
     {
          if(ft_strlcpy(dest, "", 15) == strlcpy(dest, "", 15))
               result(1);
          else
               result(0);
     }
     else if(i==2)
     {
          if(ft_strlcpy(dest, "bier geil", 3) == strlcpy(dest, "bier geil", 3))
               result(1);
          else
               result(0);
     }
     else if(i==3)
     {
          if(ft_strlcpy(dest, "dann geh doch zu netto", 15) == strlcpy(dest, "dann geh doch zu netto", 15))
               result(1);
          else
               result(0);
     }
     else if(i==4)
     {
          if(ft_strlcpy(dest, "isch liebe disch mein Sonnenlicht", 0) == strlcpy(dest, "isch liebe disch mein Sonnenlicht", 0))
               result(1);
          else
               result(0);
     }
     else if(i==5)
     {
          if(ft_strlcpy(dest, "isch liebe disch mein Sonnenlicht", -1) == strlcpy(dest, "isch liebe disch mein Sonnenlicht", -1))
               result(1);
          else
               result(0);
     }
     else 
          printf(RED "something wrong w/ tester\n" RESET);
}
char *loop(void)
{
     int w = 0;
     while(w<=5)
     {
          excute(w);
          w++;
     }
     return(GRN "\n>>>>DONE<<<<\n\n" RESET);
}
int main(void)
{
     printf(YEL"_-_-_-_-_-_-_\n\n"RESET);
     char *done;
     done=loop();
     printf("%s", done);
     printf(YEL "-_-_-_-_-_-_-\n\n" RESET);
}