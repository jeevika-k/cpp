#include <iostream>
using namespace std;
int main()
{
    int age = 24;    //It allocate in compile time allocation
    int* ptr;        //doesn't allocate the memory
    ptr = new int;   //runtime  allocation 
    *ptr = 24;
    cout << *ptr << endl;
    return 0;
}
/*
int num;
cout<<"enter the number of students";
cin>>num;
int* arr=new int[num];
cout<<"enter "<<num<<numbers";
for(int i=0;i<num;i++){
cin>>arr[i];
}
for(int i=0;i<num;i++){
cout<<arr[i]<<" ";
}
return 0;
}

*/