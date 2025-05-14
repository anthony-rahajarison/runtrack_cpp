#include <iostream>

class Aquatique {
    protected:
        double vitesseNage = 2;
        void nager() {
            std::cout << "Je nage a " << vitesseNage << " m/s" << std::endl;
        }
};

class Terrestre {
    protected:
        double vitesseMarche = 1.5;
        void marcher() {
            std::cout << "Je marche a " << vitesseMarche << " m/s" << std::endl;
        }
};

class Pinguin : public Aquatique, public Terrestre{
    public:
        void sePresenter() {
            std::cout << "Bonjour ! Je suis Pingu" << std::endl;
            marcher();
            nager();
        };
};

int main() {
    Pinguin obj;
    obj.sePresenter();
}