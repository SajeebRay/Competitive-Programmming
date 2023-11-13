#include <stdio.h>
#include <string.h>
int main ()
{
 char s [200];
 int i=0,n,test=1;
 gets (s);
 n=strlen (s);
 for (i=0;i <n;i++){
  if (s [i]=='W' && s [i+1]=='U' && s [i+2]=='B'){
   i+=2;
   if (!test) printf (" ");
  }
  else {
   printf ("%c",s [i]);
   test=0;
  }
 }
 return 0;
}
