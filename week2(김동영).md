2-1
#include <stdio.h>

int main(void) 
{
  int a=10,b=20,c=30;
  int max=a,min=a;
  if(b>max)
  {
    max=b;
    if(c>b)
    {
      max=c;
    } 
  }
  if(b<min)
  {
    min=b;
    if(c<b)
    {
      min=c;
    }  
  }
  printf("최댓값은%d 이고 최솟값은%d 이다.",max,min);
  return 0;
}
2-3
#include <stdio.h>

int main(void) 
{
  char o;
  int x,y;
  scanf("%d %c %d",&x,&o,&y);
  if (x<0 || y<0)
  {  
     printf("잘못 입력했습니다.");
     return 1;
  }
  switch(o)
  {
    case '+':
      printf("%d",x+y);
      break;
    case '-':
      printf("%d",x-y);
      break;
    case '*':
      printf("%d",x*y);
      break;
    case '/':
      printf("%d",x/y);
      break;
    default:
      break;
  }
  return 0;
}
