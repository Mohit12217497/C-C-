#include<stdio.h>
int main()
{   
  union item
  {
  	int x;float y;char z;
  	
  };
  {
  	union item i1;
  	i1.x=5;
  	printf("\nx=%d",i1.x);
  	i1.y=3.5;
  	printf("\ny=%f",i1.y);
  	i1.z='a';
  	printf("\nz=%c",i1.z);
  }
}
