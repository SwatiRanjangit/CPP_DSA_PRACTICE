/*

1. 
int* ptr = 0;
int a = 10;
*ptr = a;
cout<<*ptr<<endl; // prints: Error cz *ptr is pointing to null which can't be refrenced.

2. 
int a = 10;
int* c= & a;
c = c+1;
cout<<a<<*c<<endl; // prints: 7 and garbage value as the pointer value is added +1 and now it's points somewhere else where garbage value present.

3. assume address of a = 400
int a = 7;
int* c= & a;
c = c+ 3;
cout<<c<<endl; /// prints: 412 cz 400+4+4+4 = 412


4.
int a[]={1,2,3};
int* p = a++;
cout<<*p<<endl; /// prints: Error beacuse we can't change constant pointer a which is a pointer which is created when array createrd and declared so we can't chage.

5.
char a[] = "xyz"
char* c = &a[0];
cout<<c<<endl; /// prints: xyz

6.
int main(){
    char* ptr;
    char str[]="abcdefg";
    ptr = str
    ptr+=5;
    cout<<ptr /// prints: fg
}

7. VERY  IMPORTANT!!!

void square(int* p){
    int a = 10;
    p = &a;
    *p = (*p) * (*p);
}

int main(){
    int a = 10;
    square(&a);
    cout<<a<<endl; /// prints: 10 changes in local not in main
}

8.

int a = 10
int* p=&a;
int** q = &p;
int b=20;
*q = &b;
(*p)++;
cout<<a<<" "<<b<<endl; /// prints: 10 21  


*/
