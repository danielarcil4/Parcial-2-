#include "canon.h"

int Canon::getVo() const
{
    return Vo;
}

void Canon::setVo(int value)
{
    Vo = value;
}

int Canon::getAngulo() const
{
    return angulo;
}

void Canon::setAngulo(int value)
{
    angulo = value;
}

float Canon::getPosx() const
{
    return posx;
}

void Canon::setPosx(float value)
{
    posx = value;
}

float Canon::getPosy() const
{
    return posy;
}

void Canon::setPosy(float value)
{
    posy = value;
}

float Canon::getVx() const
{
    return Vx;
}

void Canon::setVx(float value)
{
    Vx = value;
}

float Canon::getVy() const
{
    return Vy;
}

void Canon::setVy(float value)
{
    Vy = value;
}

Canon::Canon(int x,int y)
{
    posx =x;
    posy =y;
}
