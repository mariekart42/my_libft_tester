#include "head.h"

//   VOID *memcpy(VOID *dst, CONST VOID *src, SIZE_T n);
//-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    char        *sr;
    sr = (char *) src;
    char *des;
    des = (char *) dest;
    
    size_t i = -1;      //weird shit but working lol
    if ((src != NULL) || (dest != NULL))
	{
		while (++i < n)
		{
			des[i] = sr[i];
		}
	}
    return (des);
}

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
     char dest1[100];
     char dest2[100];
     char *ptr = NULL;
     if(!(ptr = (char *)malloc(sizeof(char *) *40)))
     {
          printf(RED "malloc gone wrong in tester, try again\n" RESET);
          return ;
     }
     if(i==0)
     {
          memset(dest1, 'A', 90);
          memset(dest2, 'A', 90);
          ft_memcpy(dest1, "pimpes", 7);
          memcpy(dest2, "pimpes", 7);
          if(strcmp(dest1+2, dest2+2)==0)
               result(1);
          else
               result(0);
     }
     else if(i==1)
     {
          if(ft_memcpy(ptr, "123456789", 0) == memcpy(ptr, "123456789", 0))
               result(1);
          else
               result(0);
     }
     else if(i==2)
     {
          if(ft_memcpy(ptr, "zy\0xw\0vu\0\0tsr", 11) == memcpy(ptr, "zy\0xw\0vu\0\0tsr", 11))
               result(1);
          else
               result(0);
     }
     else if(i==3)
     {
          char dest1[100];
          char dest2[100];
          memset(dest1, 'A', 100);
          memset(dest2, 'A', 100);
          ft_memcpy(dest1, "pimpes", 10);
          memcpy(dest2, "pimpes", 10);
          if(strcmp(dest1, dest2)==0)
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