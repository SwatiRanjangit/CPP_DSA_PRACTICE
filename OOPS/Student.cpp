class Student{
   
    public:
      int rollNo;

      //Destructor
      ~Student(){
        cout<<"Destructor calling...!!!"<<endl;
      }

      //Default constructor
      Student(){
        cout<<"default constructor called"<<endl;
      }
      // Parameterised Constructor.
    //   Student(int r){
    //     rollNo = r;
    //   }

      Student(int rollNo)
      {
        cout<<"this: "<<this<<endl;
        cout<<"second constructor called =>>"<<endl;
        this->rollNo = rollNo; // this is a pointer which refer to the address of the current object created.
      }


       Student(int age,int rollNo)
      {
        cout<<"third constructor called =>>"<<endl;
        this->age= age;
        this->rollNo = rollNo;
      }
      
    private:
      int age=10;


    //Setter and getter we use this to access the private elemnet of class in any other class.
    public:
    void display(){
        cout<<age<<" "<<rollNo<<endl;
    }

    int getAge(){
        return  age;
    }

    void setAge(int a, int password){
        if(password == 123){
            return;
        }
        if(a<0){
            return;
        }
        age = a;
        
    }



};

