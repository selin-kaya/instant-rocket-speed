#include <stdio.h>

int main(void) {

  int sec=1;
  int v;

  printf("enter a time value in seconds to learn the instant velocity of the rocket: ");
  scanf("%d",&sec);
  
  if(sec<=15)
  {
    v=sec*32;
    printf("the velocity of the rocket is %d",v);
  }
  if(15<sec && sec<=35)
  {
    v=480;
    printf("the velocity of the rocket is %d",v);
  }
  if(35<sec && sec<=50)
  {
    v=480-32*(sec-35);
    printf("the velocity of the rocket is %d",v);
  }


  return 0;
}