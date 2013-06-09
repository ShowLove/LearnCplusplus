#ifndef CLASS1_H
#define CLASS1_H


class class1
{
    public:
    //we are passing two ints one to regVar and one to constVar
        class1(int a, int b);
        void print();
    protected:
    private:
        int regVar;
        const int constVar;
};

#endif // CLASS1_H
