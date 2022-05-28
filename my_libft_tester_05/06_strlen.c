#include "head.h"

//        SIZE_T strlen(CONST CHAR *s);
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
          if(ft_strlen("Hello !") == strlen("Hello !"))
               result(1);
          else
               result(0);
     }
     else if(i==1)
     {
          if(ft_strlen("1") == strlen("1"))
               result(1);
          else
               result(0);
     }
     else if(i==2)
     {
          if(ft_strlen("lorem\tipsum\tdolor\nsit\namet\n") == strlen("lorem\tipsum\tdolor\nsit\namet\n"))
               result(1);
          else
               result(0);
     }
     else if(i==3)
     {
          if(ft_strlen("") == strlen(""))
               result(1);
          else
               result(0);
     }
     else if(i==4)
     {
          if(ft_strlen("\n\n\f\r\t") == strlen("\n\n\f\r\t"))
               result(1);
          else
               result(0);
     }
     else if(i==5)
     {
          if(ft_strlen("   ") == strlen("   "))
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
     while(w<=5)    //5 edge cases
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