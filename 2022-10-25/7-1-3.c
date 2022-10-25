#include<stdio.h>
#include<math.h>

int GetData( )
{ int  n; 
  printf("please input  n(even and >=6):");
  scanf("%d",&n); 
  while (n%2==1 || n<6) 
   {  printf("please input correct number n:");
       scanf("%d",&n); }
  return n;  
}

int  IsPrime(int n)
{ int  i;
  for(i=2;i<=sqrt(n);i++)
      if(n%i==0)  return 0;
  return 1;
}

void Goldbach(int n)
{int i,flag=0;
for(i=3;i<=n/2;i++)
   if (IsPrime(i) && IsPrime(n-i))
{printf("%d=%d+%d\n",n,i,n-i);flag=1;break;}
if(flag==0) printf("Error!\n");
}


int main(void)
{ int n,flag=1;
   while(flag==1)
     { n=GetData( );
       Goldbach(n);
       printf("input flag(0 or 1,O-break,1-continue):");
       scanf("%d",&flag);    } 
  return 0;  
}