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
     char * splitme;
	char * * tab = ft_split("  haftpflicht  42  ", ' ');
     if(i==0)
     {
          if(strcmp(tab[0], "haftplicht"))
               result(1);
          else
               result(0);
     }
     else if(i==1)
     {
          tab = ft_split("chinimala", ' ');
          if(!strcmp(tab[0], "chinimala"))
               result(1);
          else
               result(0);
     }
     else if(i==2)
     {
          if(tab[2] == NULL)
               result(1);
          else
               result(0);
     }
     else if(i==3)
     {
          tab = ft_split("haftpflicht", 0);
          if(!strcmp(tab[0], "haftpflicht"))
               result(1);
          else
               result(0);
     }
     else if(i==4)
     {
          tab = ft_split("chinimala", ' ');
          if(tab[1] == NULL)
               result(1);
          else
               result(0);
     }
     else if(i==5)
     {
          tab = ft_split("", ' ');
          if(tab[0] == NULL)
               result(1);
          else
               result(0);
     }
     else if(i==6)
     {
          char * splitme = strdup("Haftplicht");
          tab = ft_split(splitme, ' ');
          if(!strcmp(tab[0], "Haftplicht"))
               result(1);
          else
               result(0);
     }
     else if(i==7)
     {
          splitme = strdup("Haftplicht ");
          tab = ft_split(splitme, ' ');
          if(!(strcmp(tab[0], "Haftplicht")))
          {
               result(1);
               free(tab);
          }
               
          else
               result(0);
     }
     else if(i==8)
     {
     	splitme = strdup("Haftplicht ");
	     tab = ft_split(splitme, ' ');
          if(tab[1] == NULL)
               result(1);
          else
               result(0);
     }
     else if(i==9)
     {
          splitme = strdup(" Haftplicht ");
          tab = ft_split(splitme, ' ');
          if(!(strcmp(tab[0], "Haftplicht")))
               result(1);
          else
               result(0);
     }
     else if(i==10)
     {
          splitme = strdup(" Haftplicht ");
          tab = ft_split(splitme, ' ');
          if(tab[1] == NULL)
               result(1);
          else
               result(0);
     }
     else if(i==11)
     {
          splitme = strdup("--1-2--3---4----5-----42");
          tab = ft_split(splitme, '-');
          if(!strcmp(tab[0], "1"))
               result(1);
          else
               result(0);
     }
     else if(i==12)
     {
          splitme = strdup("--1-2--3---4----5-----42");
          tab = ft_split(splitme, '-');
          if(!strcmp(tab[1], "2"))
               result(1);
          else
               result(0);
     }
     else if(i==13)
     {
          splitme = strdup("--1-2--3---4----5-----42");
          tab = ft_split(splitme, '-');
          if(!strcmp(tab[2], "3"))
               result(1);
          else
               result(0);
     }
     else if(i==14)
     {
          splitme = strdup("--1-2--3---4----5-----42");
          tab = ft_split(splitme, '-');
          if(!strcmp(tab[4], "5"))
               result(1);
          else
               result(0);
     }
     else if(i==15)
     {
          splitme = strdup("--1-2--3---4----5-----42");
          tab = ft_split(splitme, '-');
          if(!strcmp(tab[5], "42"))
               result(1);
          else
               result(0);
     }
     else if(i==16)
     {
          splitme = strdup("--1-2--3---4----5-----42");
          tab = ft_split(splitme, '-');
          if(tab[6] == NULL)
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
     while(w<=16)
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