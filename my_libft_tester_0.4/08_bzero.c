#include "head.h"

//        VOID bzero(VOID *s, SIZE_T n);
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
     char *ptr;
     char *check_ptr;
     if(!(ptr = (char *)malloc(sizeof(char *) *20)))
     {
          printf(RED "malloc gone wrong in tester, try again\n" RESET);
          return ;
     }
     if(!(check_ptr = (char *)malloc(sizeof(char *) *20)))
     {
          printf(RED "malloc gone wrong in tester, try again\n" RESET);
          return ;
     }

     if(i==0)
     {
          memset(ptr, 't', 7);
          memset(check_ptr, 't', 7);
          ft_bzero(ptr, 5);
          bzero(check_ptr, 5);
          if(strcmp(ptr+6, check_ptr+6)== 0)
               result(1);
          else
               result(0);
     }
     else if(i==1)
     {
          memset(ptr, 't', 7);
          memset(check_ptr, 't', 7);
          ft_bzero(ptr, 5);
          bzero(check_ptr, 5);
          if(strcmp(ptr+5, check_ptr+5)== 0)
               result(1);
          else
               result(0);
     }
     else if(i==2)
     {
          memset(ptr, 't', 7);
          memset(check_ptr, 't', 7);
          ft_bzero(ptr, 5);
          bzero(check_ptr, 7);
          if(strcmp(ptr+5, check_ptr+5)!= 0)
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
     while(w<=2)
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