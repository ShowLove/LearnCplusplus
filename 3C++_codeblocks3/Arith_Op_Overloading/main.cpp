#include <iostream>

using namespace std;


class Cents
{
private:
    int m_nCents;

public:
    Cents(int nCents) { m_nCents = nCents; }

    // Add Cents + Cents
    friend Cents operator+(const Cents &c1, const Cents &c2);

    int GetCents() { return m_nCents; }
};

// note: this function is not a member function!
Cents operator+(const Cents &c1, const Cents &c2)
{
    //remember we cant do the following
   // c1.m_nCents = c1.m_nCents + c2.m_nCents;
    //return Cents(c1.m_nCents);

    // use the Cents constructor and operator+(int, int)
   return Cents(c1.m_nCents + c2.m_nCents);
}

int main()
{
    Cents cCents1(6);
    Cents cCents2(8);
    //note we did not do cCents1.m_nCents + cCents2.m_nCents
    Cents cCentsSum = cCents1 + cCents2;
    cout << "I have " << cCentsSum .GetCents() << " cents." << endl;

    return 0;
}

