#include<iostream>
int main()
{
 std::cout<<"Inserte numero entero: "<<std::endl;  
 int n;  
 std::cin>>n;
 if(n==0||n==1)
  {
   return 1;  
  }  
 else
  {
   int fac=0;  
   int aux=1;
   for(int i=2;i<=n;i++)
    {
     fac=i*aux;
     aux=fac;
    }
  std::cout<<"el factorial es: "<<fac<<std::endl;
  }
return 0;
}


