#include<iostream>
int main()
{
 int fac=0;
 int aux=1;    
 for(int i=2;i<=7;i++)
  {
   fac=i*aux;
   aux=fac;
  }
  std::cout<<"el factorial es: "<<fac<<std::endl;
    return 0;
}


