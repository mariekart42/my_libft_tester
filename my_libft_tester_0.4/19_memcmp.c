#include "head.h"

//    INT memcmp(CONST VOID *s1, CONST VOID *s2, SIZE_T n);
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
     char s[] = {-128, 0, 127, 0};
	char sCpy[] = {-128, 0, 127, 0};
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};
     if(i==0)
     {
          if(!ft_memcmp(s, sCpy, 4))
               result(1);
          else
               result(0);
     }
     else if(i==1)
     {
          if(ft_memcmp(s, s2, 1) > 0)
               result(1);
          else
               result(0);
     }
     else if(i==2)
     {
          if(ft_memcmp("t\200", "t\0", 2))
               result(1);
          else
               result(0);
     }
     else if(i==3)
     {
          if(ft_memcmp("testss", "test", 5))
               result(1);
          else
               result(0);
     }
     else if(i==4)
     {
          if(ft_memcmp("test", "tEst", 4))
               result(1);
          else
               result(0);
     }
     else if(i==5)
     {
          if(ft_memcmp("", "test", 4))
               result(1);
          else
               result(0);
     }
     else if(i==6)
     {
          if(ft_memcmp("test", "", 4))
               result(1);
          else
               result(0);
     }
     else if(i==7)
     {
          if(ft_memcmp("abcdefgh", "abcdwxyz", 6))
               result(1);
          else
               result(0);
     }
     else if(i==8)
     {
          if(!ft_memcmp(s, s2, 0))
               result(1);
          else
               result(0);
     }
     else if(i==9)
     {
          if(ft_memcmp(s, s2, 1) > 0)
               result(1);
          else
               result(0);
     }
     else if(i==10)
     {
          if(ft_memcmp(s2, s3, 4) != 0)
               result(1);
          else
               result(0);
     }
     else if(i==11)
     {
          if(ft_memcmp(s2, s, 1) < 0)
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