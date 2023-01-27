#include <unistd.h>
void fizzbuzz (int i)
{
  if (i%15==0)
    {
        write(1 ,&"fizzbuzz", 8);
    }
 else if (i%3==0)
  {
     
      write(1, &"fizz" ,4);
  }
  else if (i%5==0)
  {
     
      write (1, &"buzz" ,4);
 }
else
   {
       write (1, &"hata" ,4);
   }
}
int main ()
{ int a;
  a=15;
  fizzbuzz (a);
  return 0;
}
