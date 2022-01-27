#include<bits/stdc++.h>
using namespace std;

class ComplexNumber{
    public:
    int real;
    int imag;

    ComplexNumber(int r,int i):
        real(r),
        imag(i)
    {}

    void display(){
        cout<<real<<(imag>=0?"+":"-")<<abs(imag)<<"i"<<endl;
    }

    void operator ++(){
        real++;
        imag++;
    }

    ComplexNumber operator +(ComplexNumber &c){
        int re = real+c.real;
        int im = imag+c.imag;

        return ComplexNumber(re,im);
    }

    // Implement div '/' operator overload
};

int main(){
    ComplexNumber c1(3,5);
    ComplexNumber c2(1,-7);
    // c1.display();
    // ++c1;
    // c1.display();

    ComplexNumber c3 = c1+c2;
    c3.display();

    return 0;
}