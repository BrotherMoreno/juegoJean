#ifndef ARA�A_H
#define ARA�A_H
#include"enemigos.h"
class Ara�a :public Enemigos{
public:
	Ara�a(float v, int x, int y) : Enemigos(v, x, y, 1) {}

    void mover() override;
    void dibujar() override;
    void borrar() override;
    bool chocar() override;

    int getLongitud() override {
        return 4;
    }

};
#endif // !ARA�A_H
