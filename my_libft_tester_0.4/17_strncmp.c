#include "head.h"

//     INT strncmp(CONST CHAR *s1, CONST CHAR *s2, SIZE_T n);
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
          if(ft_strncmp("t", "", 0) == 0)
               result(1);
          else
               result(0);
     }
     else if(i==1)
     {
          if(ft_strncmp("1234", "1235", 3) == 0)
               result(1);
          else
               result(0);
     }
     else if(i==2)
     {
          if(ft_strncmp("1234", "1235", 4) < 0)
               result(1);
          else
               result(0);
     }
     else if(i==3)
     {
          if(ft_strncmp("1234", "1235", -1) < 0)
               result(1);
          else
               result(0);
     }
     else if(i==4)
     {
          if(ft_strncmp("", "", 42) == 0)
               result(1);
          else
               result(0);
     }
     else if(i==5)
     {
          if(ft_strncmp("bananana", "bananana", 42)==0)
               result(1);
          else
               result(0);
     }
     else if(i==6)
     {
          if(ft_strncmp("Bananana", "bananana", 42) < 0)
               result(1);
          else
               result(0);
     }
     else if(i==7)
     {
          if(ft_strncmp("", "1", 0) == 0)
               result(1);
          else
               result(0);
     }
     else if(i==8)
     {
          if(ft_strncmp("1", "", 1) > 0)
               result(1);
          else
               result(0);
     }
     else if(i==9)
     {
          if(ft_strncmp("", "1", 1) < 0)
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
     while(w<=9)    //7 edge cases
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