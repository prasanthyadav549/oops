#include "stdio.h"
#include <stdlib.h>

// struct marks{
//     int p: 3;
//     int c: 3;
//     int m: 2;
     
// };
void f(int *p,int *q) {
     p=q;
      *p=2;
}
int i=0,j=1;
int main() {
 static int var=5;

 
 printf("%d",var--);
 if(var)
 main();
 
      return 0;
}