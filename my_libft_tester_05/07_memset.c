#include "head.h"

//      VOID *memset(VOID *b, INT c, SIZE_T len);
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
     void *ptr = NULL;
     char array[20];
     //int int_array[20];
     if(!(ptr = (void *)malloc(sizeof(void) *20)))
     {
          printf(RED "malloc gone wrong in tester, try again\n" RESET);
          return ;
     }
     if(i==0)
     {
          if(ft_memset(array, 'A', 1) == memset(array, 'A', 1))
               result(1);
          else
               result(0);
     }
     else if(i==1)
     {
          if(ft_memset(array, 'h', 4) == memset(array, 'h', 4))
               result(1);
          else
               result(0);
     }
     else if(i==2)
     {
          if(ft_memset(array, 'k', 15) == memset(array, 'k', 15))
               result(1);
          else
               result(0);
     }
     else if(i==3)
     {
          if(ft_memset(array, 'l', 1) == memset(array, 'l', 1))
               result(1);
          else
               result(0);
     }
     else if(i==4)
     {
          if(ft_memset(array, '\n', 10) == memset(array, '\n', 10))
               result(1);
          else
               result(0);
     }
     else if(i==5)
     {
          if(ft_memset(ptr, '\n', 1) == memset(ptr, '\n', 1))
               result(1);
          else
               result(0);
     }
     else if(i==6)
     {
          if(ft_memset(ptr, '\0', 6) == memset(ptr, '\0', 6))
               result(1);
          else
               result(0);
     }
     else 
          printf(RED "something wrong w/ tester\n" RESET);
     free(ptr);
}
char *loop(void)
{
     int w = 0;
     while(w<=6)
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
