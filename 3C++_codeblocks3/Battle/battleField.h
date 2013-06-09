//--------------------------------------------------------

#ifndef BATTLEFIELD_H
#define BATTLEFIELD_H


class battleField
{
    public:
        int Array[100];
        int Copy[100];
        int CopyA[100];
        int CopyB[100];
        battleField();
        ~battleField();
        void readCompareWrite();
        void fieldZero();
        void printField();
        void copyText();
        void printCopy();
        void printArray();
        int numStars();
        void addShip();
        int errorCatch(int shipValue);
        int errorCatch2();
        void placeBattleship();
        void wipeClean();
        void placeCarrierN(int ACount );
        void placeCarrierS(int ACount );
        void placeCarrierE(int ACount );
        void placeCarrierW(int ACount );
        void placeCarrierNE(int ACount );
        void placeCarrierNW(int ACount );
        void placeCarrierSE(int ACount );
        void placeCarrierSW(int ACount );
    protected:
        int i, j, x;
        int starNumbers, retValues, stars, shipCarrier;
        int xAxis, yAxis,differnence, difference2, answer;
        int xAxis2;
         int arrayNumB, starNumB, retValueB, shipValueB, NSEWB;


    private:
};

#endif // BATTLEFIELD_H

//----------------------------------------------------------------------------
