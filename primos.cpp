#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
    {
    int min=0;
    int max=0;
    int i;
    int sum=0;
    cout<<"\n valor minimo: ";cin>>min;
    cout<<"\n valor maximo: ";cin>>max;
    for(min;min<=max;min++)
        {
            sum=0;
            for(int i=1;i<=min;i++)
                {
                    if(min%i==0)
                        {
                            sum++;
                        }
                    if(sum==2)
                {
                std::cout<<i<<std::endl;
                }
                }
        }
    return 0;
    }