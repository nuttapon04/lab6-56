#include <stdio.h>
int main() 
{  
int i,j;
int prime =1;
while(printf("Enter Your Number : ")&&scanf("%d",&j)){
  if(j < 0) break;
  if(j == 1 || j == 0) {
    printf("%d is Not a prime Number.\n",j);
    continue;
  }
  for(i = 2; i < j; i++){
    if ((j % i) == 0) {
      prime = 0;
    }
  }
  if (prime == 1){
    for(int i = 1 ; i <= 12; i++){
      printf("%d * %d = %d\n",j,i,j*i);
    }
  }
  else if(prime == 0 || j == 1)
   printf("%d is Not a Prime Number ! ! !\n",j);
   prime =1;
}
return 0;
}