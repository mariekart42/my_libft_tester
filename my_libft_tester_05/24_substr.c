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
	char * s = ft_substr("haftplicht", 0, 42000);
     if(i==0)
     {
          if(!strcmp(s, "haftplicht"))
               result(1);
          else
               result(0);
     }
     else if(i==1)
     {
          s = ft_substr("haftplicht", 1, 1);
          if(!strcmp(s, "a"))
               result(1);
          else
               result(0);
     }
     else if(i==2)
     {
          s = ft_substr("haftplicht", 100, 1);
          if(!strcmp(s, ""))
               result(1);
          else
               result(0);
     }
     else if(i==3)
     {
          char *str = strdup("1");
          s = ft_substr(str, 42, 42000000);
          if(!strcmp(s, ""))
               result(1);
          else
               result(0);
     }
     else if(i==4)
     {
          char *str = strdup("0123456789");
          s = ft_substr(str, 9, 10);
          if(!strcmp(s, "9"))
               result(1);
          else
               result(0);
     }
     else if(i==5)
     {
          s = ft_substr("42", 0, 0);
          if(!strcmp(s, ""))
               result(1);
          else
               result(0);
     }
     else if(i==6)
     {
          s = ft_substr("test", 1, 2);
          if(!strcmp(s, "es"))
               result(1);
          else
               result(0);
     }
     else if(i==7)
     {
          s = ft_substr("BONJOUR LES HARICOTS !", 8, 14);
          if(!strcmp(s, "LES HARICOTS !"))
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
     while(w<=7)
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