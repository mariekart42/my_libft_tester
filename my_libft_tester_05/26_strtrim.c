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
	char * s = ft_strtrim("   xxxhaftpflicht", " x");
     if(i==0)
     {
          if(strcmp(s, "haftplicht"))
               result(1);
          else
               result(0);
     }
     else if(i==1)
     {
          s = ft_strtrim("haftpflicht  xxx", " x");          
          if(strcmp(s, "haftplicht"))
               result(1);
          else
               result(0);
     }
     else if(i==2)
     {
          s = ft_strtrim("   xxxhaftpflicht   xxx", " x");
          if(strcmp(s, "haftplicht"))
               result(1);
          else
               result(0);
     }
     else if(i==3)
     {
          s = ft_strtrim("   xxx   xxx", " x");
          if(!strcmp(s, ""))
               result(1);
          else
               result(0);
     }
     else if(i==4)
     {
          s = ft_strtrim("", "123");
          if(!strcmp(s, ""))
               result(1);
          else
               result(0);
     }
     else if(i==5)
     {
          s = ft_strtrim("123", "");
          if(!strcmp(s, "123"))
               result(1);
          else
               result(0);
     }
     else if(i==6)
     {
          s = ft_strtrim("", "");
          if(!strcmp(s, ""))
               result(1);
          else
               result(0);
     }
     else if(i==7)
     {
          s = ft_strtrim("abcdba", "acb");
          if(!strcmp(s, "d"))
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