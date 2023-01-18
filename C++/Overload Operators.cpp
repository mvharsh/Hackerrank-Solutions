Complex operator +(Complex x, Complex y)
{
 Complex z;
 z.a = x.a + y.a;
 z.b = x.b + y.b;
 return z;
}

ostream& operator<<(ostream& os, Complex z) 
{
    return os << z.a << "+" << "i" << z.b;
}

