#ifndef POSSITION_H
#define POSSITION_H


class possition: public battleField
{
    public:
        possition();
        ~possition();
        int orientationCarrier();
        int arrayCountCarier();
        void testInharitance();
        int array[100];

                enum orientation
{

    N,
    S,
    E,
    W,
    NE,
    SE,
    NW,
    SW
};

    protected:

    private:
        battleField fieldTest;
        int x, y, arrayCount;
        int NSEW;
};

#endif // POSSITION_H
