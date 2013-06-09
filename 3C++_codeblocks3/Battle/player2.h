#ifndef PLAYER2_H
#define PLAYER2_H


class player2
{
    public:
        player2();
        virtual ~player2();
        void wipeClean2();
        void randomBattleField();
        int arrayCountCarier2();
        void fieldZero2();
        void addShip2();
        void readCompareWrite2();
        int errorCatch2B();
        void recursiveFunc();
        void placeCarrierN2(int ACount );
        void placeCarrierS2(int ACount );
        void placeCarrierE2(int ACount );
        void placeCarrierW2(int ACount );
        void placeCarrierNE2(int ACount );
        void placeCarrierNW2(int ACount );
        void placeCarrierSE2(int ACount );
        void placeCarrierSW2(int ACount );
    protected:
    private:
        battleField fieldTest;
        int x, y, arrayCount;
        int NSEW;

        int i, j;
        int starNumbers, retValues, stars, shipCarrier;
        int xAxis, yAxis,differnence, difference2, answer;
        int xAxis2;
        int arrayNumB, starNumB, retValueB, shipValueB, NSEWB;

        int Array2[100];
        int Copy2[100];
        int CopyA2[100];
        int CopyB2[100];
};

#endif // PLAYER2_H
