#include "head.h"

//     VOID *memchr(CONST VOID *s, INT c, SIZE_T n);
//-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-



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
     char s[] = {0, 1, 2 ,3 ,4 ,5};
     if(i==0)
     {
          if(ft_memchr(s, 0, 0) == NULL)
               result(1);
          else
               result(0);
     }
     else if(i==1)
     {
          if(ft_memchr(s, 0, 1) == s)
               result(1);
          else
               result(0);
     }
     else if(i==2)
     {
          if(ft_memchr(s, 2, 3) == s + 2)
               result(1);
          else
               result(0);
     }
     else if(i==3)
     {
          if(ft_memchr(s, 6, 6) == NULL)
               result(1);
          else
               result(0);
     }
     else if(i==4)
     {
          if(ft_memchr(s, 2 + 256, 3) == s + 2)
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
     while(w<=4)    //7 edge cases
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