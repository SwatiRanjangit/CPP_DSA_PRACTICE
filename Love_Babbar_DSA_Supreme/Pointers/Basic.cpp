#include <iostream>
using namespace std;

int main() {
   int arr[5]={1,2,3,4,5};
   cout<<arr<<endl;
   cout<<arr[0]<<endl;
   cout<<&arr<<endl;
   cout<<&arr[0]<<endl;
   cout<<*arr<<endl;
   cout<<*(arr)+4<<endl;
   cout<<(*arr)+3<<endl;
   cout<<(*arr+1)<<endl;
   
   cout<<"Condition All are same: "<<endl;
   int i=0;
   cout<<arr[i]<<endl;
   cout<<i[arr]<<endl;
   cout<<*(arr+i)<<endl;
   cout<<(*arr+i)<<endl;
   
    return 0;
}