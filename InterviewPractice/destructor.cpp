class A{
 private:
  int val;
 public:
  A(int x){           
   val=x;
  }
  A(){                
  }
  ~A(){                  //destructor
  }
}
int main(){
 A a(3);     
 return 0;
}
19