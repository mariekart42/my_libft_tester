#include "head.h"

//-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-

int ft_isascii(int val)
{
    if( val >= 0 && val <= 127)
        return (1);
    return (0);
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
     if(i==0)
     {
          if(ft_isascii(0) == isascii(0))
               result(1);
          else
               result(0);
     }
     else if(i==1)
     {
          if(ft_isascii('0') == isascii('0'))
               result(1);
          else
               result(0);
     }
     else if(i==2)
     {
          if(ft_isascii('A') == isascii('A'))
               result(1);
          else
               result(0);
     }
     else if(i==3)
     {
          if(ft_isascii('\n') == isascii('\n'))
               result(1);
          else
               result(0);
     }
     else if(i==4)
     {
          if(ft_isascii(-12) == isascii(-12))
               result(1);
          else
               result(0);
     }
     else if(i==5)
     {
          if(ft_isascii(5) == isascii(5))
               result(1);
          else
               result(0);
     }
     else if(i==6)
     {
          if(ft_isascii(34) == isascii(34))
               result(1);
          else
               result(0);
     }
     else if(i==7)
     {
          if(ft_isascii(128) == isascii(128))
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
     while(w<=7)    //7 edge cases
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