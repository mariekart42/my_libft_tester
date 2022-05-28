#include "head.h"

//       SIZE_T strlcat(CHAR *dst, CONST CHAR *src, SIZE_T dstsize);
//-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-

// size_t    ft_strlcat(char *dst, const char *src, size_t len)
// {
//     char        *d;
//     const char        *s;
//     size_t        i;
//     size_t        d_len;

//     d = dst;
//     s = (char *) src;
//     if(!dst||!src)
//         return ((size_t)NULL);

//     i = len;
//     d_len = 0;
//     while ((i != 0) && (*d != '\0'))
//     {
//         d++;
//         i--;
//     }
//     d_len = d - dst;
//     i = len - d_len;
//     if (i == 0)
//         return (d_len + ft_strlen(s));
//     while (*s != '\0')
//     {
//         if (i != 1)
//             ft_strlcat (d++, s, i--);
//     s++;
//     }
//     *d = '\0';
//     return (d_len + (s - src));
// }

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
     char dest[30]; memset(dest, 0, 30);
     char * src = (char *)"AAAAAAAAA";
	dest[0] = 'B';

	// char	*dest;
     // if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
     // {
     //      printf(RED "malloc gone wrong in tester, try again\n" RESET);
     //      return ;
     // }
     // memset(dest, 0, 15);
	// memset(dest, 'r', 6);
     if(i==0)
     {
          //dest[11] = 'a';
          if(ft_strlcat(dest, src, 0) == strlen(src) && !strcmp(dest, "B"))
               result(1);
          else
               result(0);
     }
     // if(i==0)
     // {
     //      if(ft_strlcat(dest, "", 15) == strlcat(dest, "", 15))
     //           result(1);
     //      else
     //           result(0);
     // }
     else if(i==1)
     {
          if(ft_strlcat(dest, "", 15) == strlcat(dest, "", 15))
               result(1);
          else
               result(0);
     }
     else if(i==2)
     {
          memset(dest, 'B', 4);
          //dest[10] = 'a';
          //if(ft_strlcat(dest, src, 3) == strlcat(dest, src, 3))
          if(strlcat(dest, src, 3)==strlcat(dest, src, 3))
               result(1);
          else
               result(0);
     }
     else if(i==3)
     {
          dest[0] = '\0';
		dest[11] = 'a';
          if(ft_strlcat(dest, src, 15) == 9)
               result(1);
          else
               result(0);
     }
     else if(i==4)
     {
          dest[10] = 'a';
          if(ft_strlcat(dest, "isch liebe disch mein Sonnenlicht", 0) == strlcat(dest, "isch liebe disch mein Sonnenlicht", 0))
               result(1);
          else
               result(0);
     }
     else if(i==5)
     {
          memset(dest, 'B', 4);
          if(ft_strlcat(dest, src, 6) == 13 && !strcmp(dest, "BBBBA"))
               result(1);
          else
               result(0);
     }
     else if(i==6)
     {
          memset(dest, 'C', 5);
          if(ft_strlcat(dest, src, -1) == 14 && !strcmp(dest, "CCCCCAAAAAAAAA"))
               result(1);
          else
               result(0);
     }
     else if(i==7)
     {
          memset(dest, 'r', 15);
          if(ft_strlcat(dest, "isch liebe disch mein Sonnenlicht", 5) == strlcat(dest, "isch liebe disch mein Sonnenlicht", 5))
               result(1);
          else
               result(0);
     }
     else if(i==8)
     {
          memset(dest, 'r', 14);
          if(ft_strlcat(dest, "isch liebe disch mein Sonnenlicht", 15) == strlcat(dest, "isch liebe disch mein Sonnenlicht", 15))
               result(1);
          else
               result(0);
     }
     else if(i==9)
     {
          memset(dest, 0, 30); memset(dest, '1', 10);
          if(ft_strlcat(dest, src, 5) == strlen(src) + 5 && !strcmp(dest, "1111111111"))
               result(1);
          else
               result(0);
     }
     else if(i==10)
     {
          memset(dest, 0, 30);
          if(ft_strlcat(dest, "123", 0) == 3 && !strcmp(dest, ""))
               result(1);
          else
               result(0);
     }
     else if(i==11)
     {
          memset(dest, 0, 30);
          if(ft_strlcat(dest, "", 42) == 0 && !strcmp(dest, ""))
               result(1);
          else
               result(0);
     }
     else if(i==12)
     {
          memset(dest, 0, 30);
          if(ft_strlcat(dest, "123", 3) == 3 && !strcmp(dest, "12"))
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
     while(w<=12)
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