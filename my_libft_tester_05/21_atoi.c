#include "head.h"

//          INT atoi(CONST CHAR *str);
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
          if(ft_atoi("0") == atoi("0"))
               result(1);
          else
               result(0);
     }
     else if(i==1)
     {
          if(ft_atoi("543:8") == atoi("543:8"))
               result(1);
          else
               result(0);
     }
     else if(i==2)
     {
          if(ft_atoi("-4886") == atoi("-4886"))
               result(1);
          else
               result(0);
     }
     else if(i==3)
     {
          if(ft_atoi("+548") == atoi("+548"))
               result(1);
          else
               result(0);
     }
     else if(i==4)
     {
          if(ft_atoi("054854") == atoi("054854"))
               result(1);
          else
               result(0);
     }
     else if(i==5)
     {
          if(ft_atoi("000074") == atoi("000074"))
               result(1);
          else
               result(0);
     }
     else if(i==6)
     {
          if(ft_atoi("+-54") == atoi("+-54"))
               result(1);
          else
               result(0);
     }
     else if(i==7)
     {
          if(ft_atoi("-+48") == atoi("-+48"))
               result(1);
          else
               result(0);
     }
     else if(i==8)
     {
          if(ft_atoi("--47") == atoi("--47"))
               result(1);
          else
               result(0);
     }
     else if(i==8)
     {
          if(ft_atoi("++47") == atoi("++47"))
               result(1);
          else
               result(0);
     }
     else if(i==9)
     {
          if(ft_atoi("\e475") == atoi("\e475"))
               result(1);
          else
               result(0);
     }
     else if(i==10)
     {
          if(ft_atoi("\n\n\n  -46\b9 \n5d6") == atoi("\n\n\n  -46\b9 \n5d6"))
               result(1);
          else
               result(0);
     }
     else if(i==11)
     {
          if(ft_atoi("\t\n\r\v\fd469 \n") == atoi("\t\n\r\v\fd469 \n"))
               result(1);
          else
               result(0);
     }
     else if(i==12)
     {
          if(ft_atoi("2147483647") == atoi("2147483647"))
               result(1);
          else
               result(0);
     }
     else if(i==13)
     {
          if(ft_atoi("") == atoi(""))
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
     while(w<=13)
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