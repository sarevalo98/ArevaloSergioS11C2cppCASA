#include<iostream>
using namespace std;
int punto(arr,arr);
int producto(arr,arr);
int main()
    {
    int a= arr[5];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;

    int b= arr[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    cout<<punto(a,b);
    cout<<producto(a,b);
    return 0;
    }
int punto(arr,arr)
    {
    d= a[0]*b[0]+a[1]*b[1]+a[2]*b[2]+a[3]*b[3]+a[4]*b[4]
    std::cout<<d<<std::endl;    
    }
int producto(arr,arr)
    { 
    int c= arr[5];
    arr[0] = a[0]*b[0];
    arr[1] = a[1]*b[1];
    arr[2] = a[2]*b[2];
    arr[3] = a[3]*b[3];
    arr[4] = a[4]*b[4];
      std::cout<<c<<std::endl;
    }

