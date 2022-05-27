#include "head.h"

//       VOID *memmove(VOID *dst, CONST VOID *src, SIZE_T len);
//-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-

void *ft_memmove(void *str1, const void *str2, size_t n)
{
    char *des;
    const char *sr;
    
    des = (char *) str1;
    sr = (const char *) str2;
    
    char *temp;
    char array[40];
    temp = array;
    unsigned int i = 0;
    
    while (i < n)
    {
        temp[i] = sr[i];
        i++;
    }
    i = 0;
    while(i < n)
    {
        des[i] = temp[i];
        i++;
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
	char	src[] = "frag nicht was für Saft mois";
	char	*dest;
     dest = src+1;
     // {
     //      printf(RED "malloc gone wrong in tester, try again\n" RESET);
     //      return ;
     // }
     if(i==0)
     {
          if(ft_memmove(dest, "kacke", 4) == memmove(dest, "kacke", 4))
               result(1);
          else
               result(0);
     }
     else if(i==1)
     {
          if(ft_memmove(dest, "kacke", 7) == memmove(dest, "kacke", 7))
               result(1);
          else
               result(0);
     }
     else if(i==2)
     {
          if(ft_memmove(dest, "kacke", 0) == memmove(dest, "kacke", 0))
               result(1);
          else
               result(0);
     }
     else if(i==3)
     {
          if(ft_memmove(dest, "kac\nke", 18) == memmove(dest, "kac\nke", 18))
               result(1);
          else
               result(0);
     }
     else if(i==4)
     {
          if(ft_memmove(dest, "kac\nke", 4) == memmove(dest, "kac\nke", 4))
               result(1);
          else
               result(0);
     }
     else if(i==5)
     {
          if(ft_memmove(dest, "", 4) == memmove(dest, "", 4))
               result(1);
          else
               result(0);
     }
     else if(i==6)
     {
          if(ft_memmove(dest, "", 0) == memmove(dest, "", 0))
               result(1);
          else
               result(0);
     }
     else if(i==7)
     {
          if(ft_memmove(dest, NULL, 0) == memmove(dest, NULL, 0))
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
