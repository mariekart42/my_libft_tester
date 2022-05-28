#include "head.h"

//     CHAR *strnstr(CONST CHAR *haystack, CONST CHAR *needle, SIZE_T len);
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
     char * empty = (char*)"";
	const char *str;
     char haystack[30] = "deine mudda";


     if(i==0)
     {
          if(ft_strnstr("bitte halt deine fressluke", "halt", 15) == strnstr("bitte halt deine fressluke", "halt", 15))
               result(1);
          else
               result(0);
     }
     else if(i==1)
     {
          if(ft_strnstr("bitte halt deine fressluke", "", 10) == strnstr("bitte halt deine fressluke", "", 10))
               result(1);
          else
               result(0);
     }
     else if(i==2)
     {
          if(ft_strnstr("bitte halt deine fressluke", "dei", 35) == strnstr("bitte halt deine fressluke", "dei", 35))
               result(1);
          else
               result(0);
     }
     else if(i==3)
     {
          if(ft_strnstr("bitte halt deine fressluke", "neinMann", 35) == strnstr("bitte halt deine fressluke", "neinMann", 35))
               result(1);
          else
               result(0);
     }
     else if(i==4)
     {
          if(ft_strnstr("bitte halt deine fressluke", "fressluke", 10) == strnstr("bitte halt deine fressluke", "fressluke", 10))
               result(1);
          else
               result(0);
     }
     else if(i==5)
     {
          if(ft_strnstr("bitte halt deine fressluke", "halt", 8) == strnstr("bitte halt deine fressluke", "halt", 8))
               result(1);
          else
               result(0);
     }
     else if(i==6)
     {
          if(ft_strnstr("bitte halt deine fressluke", "halt", 0) == strnstr("bitte halt deine fressluke", "halt", 0))
               result(1);
          else
               result(0);
     }
     else if(i==7)
     {
          if(ft_strnstr("bitte halt deine fressluke", "halt", -1) == strnstr("bitte halt deine fressluke", "halt", -1))
               result(1);
          else
               result(0);
     }
     else if(i==8)
     {
          if(ft_strnstr(empty, "", 0) == strnstr(empty, "", 0))
               result(1);
          else
               result(0);
     }
     else if(i==9)
     {
          if(ft_strnstr(empty, "12345", 5) == strnstr(empty, "12345", 5))
               result(1);
          else
               result(0);
     }
     else if(i==10)
     {
          if(ft_strnstr(haystack, "d", 1) == haystack)//strnstr("deine Mutter alta", "d", 5))
               result(1);
          else
               result(0);
     }
     else if(i==11)
     {
          if(ft_strnstr("1", "d", 1) == NULL)//strnstr("deine Mutter alta", "d", 5))
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
     while(w<=11)
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