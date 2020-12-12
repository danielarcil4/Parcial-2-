#include "funciones.h"
#include <canon.h>

void prueba1(int Vo,int angulo,int Ntiros,float t,float distancia){
    Canon *canonO;
    Canon *canonD;
    canonO = new Canon(0,0);
    canonD = new Canon(600,0);

    canonO->setVo(Vo);
    canonO->setAngulo(angulo);
    //canonO->moverse();
    for(Vo=5;Vo<100;Vo++){
        if(Ntiros>3)
            break;
        for(angulo=1;angulo<=90;angulo++){
            canonO->setVx(Vo*cos(angulo*3.1416/180));
            canonO->setVy(Vo*sin(angulo*3.1416/180));
            if(Ntiros>3)
                break;
            for(t=0.1;t<100;t+=0.1){
                canonO->setPosx(canonO->getVx()*t);
                canonO->setPosy((canonO->getVy()*t)-4.9*t*t);
                distancia=sqrt(pow(canonD->getPosx()-canonO->getPosx(),2)+pow(canonD->getPosy()-canonO->getPosy(),2));
                if(distancia<=15){
                    cout<<"Tiro numero "<<Ntiros<<endl;
                    cout<<"Se destruyo al otro canion en el tiempo: "<<t<<" y la distancia: "<<distancia<<endl;
                    cout<<"Se destruyo al otro canion con el angulo: "<<angulo<<" y la velocidad: "<<Vo<<endl;
                    cout<<"posicion x: "<<canonO->getPosx()<<endl;
                    cout<<"posicion y: "<<canonO->getPosy()<<endl;
                    cout<<endl;
                    cout<<endl;
                    ++Ntiros;
                    break;
                    }
                if(canonO->getPosy()<=0 or Ntiros>3)
                    break;
                }
            }
    }
    if(Ntiros<3){
        cout<<"No colisiono "<<endl;

    }


}

void prueba2(int Vo,int angulo,int Ntiros,float t,float distancia){
    Canon *canonO;
    Canon *canonD;
    canonO = new Canon(0,0);
    canonD = new Canon(600,0);

    canonD->setVo(Vo);
    canonD->setAngulo(angulo);

    for(Vo=5;Vo<100;Vo++){
        if(Ntiros>3)
            break;
        for(angulo=1;angulo<=90;angulo++){
            canonD->setVx(Vo*cos((angulo)*3.1416/180));
            canonD->setVy(Vo*sin((angulo)*3.1416/180));
            if(Ntiros>3)
                break;
            for(t=0.1;t<100;t+=0.1){
                canonD->setPosx(600-canonD->getVx()*t);
                canonD->setPosy((canonD->getVy()*t)-4.9*t*t);
                distancia=sqrt(pow(canonD->getPosx()-canonO->getPosx(),2)+pow(canonD->getPosy()-canonO->getPosy(),2));
                if(distancia<=15){
                    cout<<"Tiro numero "<<Ntiros<<endl;
                    cout<<"Se destruyo al otro canion en el tiempo: "<<t<<" y la distancia: "<<distancia<<endl;
                    cout<<"Se destruyo al otro canion con el angulo: "<<angulo<<" y la velocidad: "<<Vo<<endl;
                    cout<<"posicion x: "<<canonD->getPosx()<<endl;
                    cout<<"posicion y: "<<canonD->getPosy()<<endl;
                    cout<<endl;
                    cout<<endl;
                    ++Ntiros;
                    break;
                    }
                if(canonD->getPosy()<=0 or Ntiros>3)
                    break;
                }
            }
    }
    if(Ntiros<3){
        cout<<"No colisiono "<<endl;

    }


}

void prueba3(int Vo,int angulo,int Ntiros,float t,float distancia)
{
    Canon *canonO;
    Canon *canonD;
    canonO = new Canon(0,0);
    canonD = new Canon(600,0);

    canonO->setVo(Vo);
    canonO->setAngulo(angulo);

    for(Vo=5;Vo<100;Vo++){
        if(Ntiros>1)
            break;
        for(angulo=1;angulo<=90;angulo++){
            canonO->setVx(Vo*cos(angulo*3.1416/180));
            canonO->setVy(Vo*sin(angulo*3.1416/180));
            if(Ntiros>1)
                break;
            for(t=0.1;t<100;t+=0.1){
                canonO->setPosx(canonO->getVx()*t);
                canonO->setPosy((canonO->getVy()*t)-4.9*t*t);
                distancia=sqrt(pow(canonD->getPosx()-canonO->getPosx(),2)+pow(canonD->getPosy()-canonO->getPosy(),2));
                if(distancia<=15){
                    Ntiros++;
                    cout<<"Tiro numero "<<Ntiros<<endl;
                    cout<<"Se destruyo al otro canion en el tiempo: "<<t<<" y la distancia: "<<distancia<<endl;
                    cout<<"Se destruyo al otro canion con el angulo: "<<angulo<<" y la velocidad: "<<Vo<<endl;
                    cout<<"posicion x: "<<canonO->getPosx()<<endl;
                    cout<<"posicion y: "<<canonO->getPosy()<<endl;
                    cout<<endl;
                    cout<<endl;
                    break;
                    }
                if(canonO->getPosy()<=0 or Ntiros>1)
                    break;
                }
            }
    }
    if(Ntiros<1){
        cout<<"No colisiono "<<endl;

    }

}
