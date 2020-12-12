#ifndef CANON_H
#define CANON_H


#include <math.h>

class Canon
{
    float posx,posy;
    float Vo,Vx,Vy;
    float angulo;
public:
    Canon(int x,int y);

    int getVo() const;
    void setVo(int value);
    int getAngulo() const;
    void setAngulo(int value);
    float getPosx() const;
    void setPosx(float value);
    float getPosy() const;
    void setPosy(float value);
    float getVx() const;
    void setVx(float value);
    float getVy() const;
    void setVy(float value);
};

#endif // CANON_H
