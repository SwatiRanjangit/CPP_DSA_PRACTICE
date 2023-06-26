#include<iostream>
using namespace std;

#include<iostream>
using namespace std;
class Fraction {
    private:
     int numerator;
     int denominator;

    public:
     Fraction() {
    
     }
     Fraction(int numerator, int denominator){
        this->numerator = numerator;
        this->denominator = denominator;

     }

     int getNumerator() const {
        return numerator;
     }

     int getDenominator() const {
        return denominator;
     }

     void setNumerator(int numerator) {
        this->numerator = numerator;
     }

     void setDenominator(int denominator) {
             this->denominator = denominator;
    }

     void print(){
        cout<<numerator<< " / "<<denominator<<endl;
     }

     void simplify(){
           int gcd = 1;
           int j = min(this->numerator, this->denominator);
           for(int i =1; i <= j; i++){
            if(this->numerator % i == 0 && this->denominator % i == 0){
                gcd = i;
            }
           }
           this->numerator = this->numerator / gcd;
           this->denominator = this->denominator/gcd;
     }

     Fraction add(Fraction const &f2){
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;

        int num = x * numerator + (y * f2.numerator);
        // numerator = num;
        // denominator = lcm;
        Fraction fNew(num,lcm);
        fNew.simplify();
        return fNew;
     }
       Fraction operator+(Fraction const &f2){
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;

        int num = x * numerator + (y * f2.numerator);
        // numerator = num;
        // denominator = lcm;
        Fraction fNew(num,lcm);
        fNew.simplify();
        return fNew;
     }

     void multiply(Fraction const &f2){
        numerator = numerator * f2.numerator;
        denominator = denominator * f2.denominator;
        simplify();
     }
    Fraction operator*(Fraction const &f2){
        int n = numerator * f2.numerator;
        int d = denominator * f2.denominator;
        Fraction fNew(n,d);
        fNew.simplify();
        return fNew;
     }
    bool operator==(Fraction const &f2){
        return (numerator == f2.numerator && denominator == f2.denominator);
    }
    Fraction& operator++(){
        numerator = numerator+denominator;
        simplify();
        return *this;
    }

};




int main(){
    Fraction f1(10,2);
    Fraction f2(33,89);
    f1.print();
    Fraction f3 =++(++f1);
    f1.print();
    f3.print();
    return 0;
}

