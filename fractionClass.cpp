#include<iostream>
using namespace std;


class Fraction{
    int numerator, denominator;
public:
    Fraction(){
        numerator=0;
        denominator=1;
    }

    void setFrac(int num, int den){
        /*cout<<"Set the numerator and denominator for the fraction: ";
        cin>>num;
        cin>>den;*/
        numerator=num;
        denominator=den;
    }

    void getFracDiff(){
        cout<<"Difference: "<<makestring()<<endl;
    }

    void getFracSum(){
        cout<<"Sum: "<<makestring()<<endl;        
    }

    void getFracProd(){
        cout<<"Product= "<<makestring()<<endl;
    }

    void getFracQuot(){
        //cout<<"Quotient= "<<numerator<<"/"<<denominator<<endl;
        cout<<"Quotient= "<<makestring();
    }

    Fraction operator+(Fraction frac2){
        Fraction temp;
        temp.numerator = frac2.numerator*denominator + frac2.denominator*numerator;
        temp.denominator = frac2.denominator*denominator; 
        return temp;
    }

    Fraction operator-(Fraction frac2){
        Fraction temp;
        temp.numerator = numerator*frac2.denominator-frac2.numerator*denominator;
        temp.denominator = denominator*frac2.denominator;
        return temp;
    }

    Fraction operator*(Fraction frac2){
        Fraction temp;
        temp.numerator=numerator*frac2.numerator;
        temp.denominator=denominator*frac2.denominator;
        return temp;
    }

    Fraction operator/(Fraction frac2){
        Fraction temp;
        temp.numerator= numerator*frac2.denominator;
        temp.denominator= denominator*frac2.numerator;
        return temp;
    }
    /*void operator<<(Fraction insertion){
        temp.frac=
    }*/

   string makestring(){
        return to_string(numerator)+"/"+to_string(denominator); 
   }

};

int main(){
    Fraction ob1, ob2;
    ob1.setFrac(3,4);
    ob2.setFrac(2,5);

    Fraction sum= ob1+ob2;
    sum.getFracSum();

    Fraction diff=ob1-ob2;
    diff.getFracDiff();
    
    Fraction product= ob1*ob2;
    product.getFracProd();

    Fraction quotient=ob1/ob2;
    quotient.getFracQuot();
    
    

    return 0;   
}