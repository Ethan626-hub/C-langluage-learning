/*输入三个整数，输出其中最大者。

【输入形式】

从键盘输入三个整数，以英文逗号间隔

【输出形式】

输出三个数中的最大数*/
#include<stdio.h>
int max(int x,int y,int z);
int main()
{ 
  int a,b,c,d;
  scanf("%d,%d,%d",&a,&b,&c);
  d=max(a,b,c);
  printf("%d\n",d);
  return 0;
}
int max(int x,int y,int z)
{ 
   int r;
   if(x>y)
   {
     if (x>z)
      r=x;
      else r=z;
  }
   else
   {
     if(y>z)
     r=y;
     else
     r=z;
	 }
     return(r);
	 
 }
