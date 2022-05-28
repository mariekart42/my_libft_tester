#include "head.h"

//       VOID *calloc(SIZE_T count, SIZE_T size);
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
	char * s = ft_strjoin("haftpflicht", "42");
     if(i==0)
     {
          if(!strcmp(s, "haftpflicht42"))
               result(1);
          else
               result(0);
     }
     else if(i==1)
     {
          s = ft_strjoin("", "42");
          if(!strcmp(s, "42"))
               result(1);
          else
               result(0);
     }
     else if(i==2)
     {
          s = ft_strjoin("42", "");
          if(!strcmp(s, "42"))
               result(1);
          else
               result(0);
     }
     else if(i==3)
     {
          s = ft_strjoin("", "");
          if(!strcmp(s, ""))
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
     while(w<=3)
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