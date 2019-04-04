#include<iostream>
int main()
    {
        int k=0;
        while(k<=100)
            {
             if(k%3==0 && k%5!=0)
                {
                std::cout<<k<<std::endl;
                }
             k++;
            }
    return 0;
    }
