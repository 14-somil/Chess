const bool WHITE = false; 
const bool BLACK = true;
const bool ALIVE = true;
const bool DEAD = false;
const int PAWN = 0;
const int A = 1;
const int B = 2;
const int C = 3;
const int D = 4;
const int E = 5;
const int F = 6;
const int G = 7;
const int H = 8;

#include <iostream>
#include <cstring>

using namespace std;

class Pieces{
    protected:
    public:
        virtual string print()
        {

        }
};

class Pawn : public Pieces{
    private:
        int pos[2];
        bool colour;
        bool dead_status;

    public:
        Pawn(bool Colour, int x, int y)
        {
            colour=Colour;
            pos[0]=x-1;
            pos[1]=y-1;
            dead_status = ALIVE;
        }

        string print()
        {
            return "pawn";
        }

};

class Empty : public Pieces{
    public:

        string print()
        {
            return " ";
        }
};
