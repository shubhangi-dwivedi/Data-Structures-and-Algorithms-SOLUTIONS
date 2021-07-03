
//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"

Complex operator + (Complex c1, Complex c2) 
{ 
    Complex temp;
    
    temp.a=c1.a+c2.a;
    temp.b=c1.b+c2.b;
    
    return temp;
}

ostream & operator << (ostream &dout, Complex c)
{
    dout<<c.a<<"+i"<<c.b;
    
    return dout;
}

