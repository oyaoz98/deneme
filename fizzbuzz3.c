/*3e bölünürse fizz
5e bölünürse buzz
15e bölünürse fizzbuz
*/
#include <unistd.h>
void fizzbuzz (int i)
{ 
char f[]="fizz";
char b[]="buzz";
char fzb[]="fizzbuzz";
  if (i%15==0)
    {
        write(1 ,&fzb, 8);
    }
 else if (i%3==0)
  {
     
      write(1, &f ,4);
  }
  else if (i%5==0)
  { 
      
      write (1, &b ,4);
 }
else 
   { 
       write (1, &"hata" ,4);
   }
}
int main ()
{ int a;
  a=5;
  fizzbuzz (a);
  return 0;
}
       
  
