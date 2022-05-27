#include "head.h"

//        INT isdigit(INT c);
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
     if(i==0)
     {
          if(ft_isdigit(0) == isdigit(0))
               result(1);
          else
               result(0);
     }
     else if(i==1)
     {
          if(ft_isdigit('a') == isdigit('a'))
               result(1);
          else
               result(0);
     }
     else if(i==2)
     {
          if(ft_isdigit('A') == isdigit('A'))
               result(1);
          else
               result(0);
     }
     else if(i==3)
     {
          if(ft_isdigit('\n') == isdigit('\n'))
               result(1);
          else
               result(0);
     }
     else if(i==4)
     {
          if(ft_isdigit(-12) == isdigit(-12))
               result(1);
          else
               result(0);
     }
     else if(i==5)
     {
          if(ft_isdigit(5) == isdigit(5))
               result(1);
          else
               result(0);
     }
     else if(i==6)
     {
          if(ft_isdigit(34) == isdigit(34))
               result(1);
          else
               result(0);
     }
     else if(i==7)
     {
          if(ft_isdigit(1) == isdigit(1))
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