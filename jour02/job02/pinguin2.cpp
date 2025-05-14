#include <iostream>

class Aquatique {
    protected:
        double vitesseNage = 2;
        void nager() {
            std::cout << "Je nage a " << vitesseNage << " m/s" << std::endl;
        }
    public:
        void changerVitesseNage(double v) {
            vitesseNage = v;
        }
};

class Terrestre {
    protected:
        double vitesseMarche = 1.5;
        void marcher() {
            std::cout << "Je marche a " << vitesseMarche << " m/s" << std::endl;
        }
    public:
        void changerVitesseMarche(double v) {
            vitesseMarche = v;
        }
};

class Pinguin : public Aquatique, public Terrestre{
    
    public:
        std::string nom;
        double vitesseGlisse = 2;

        void changerVitesseGlisse(double v) {
            vitesseGlisse = v;
        }

        Pinguin (std::string n) {
            nom = n;
        }

        Pinguin (const Pinguin &obj) {
            nom = obj.nom;
            std::cout << "Copie de l'objet" << std::endl;
        }

        void sePresenter() {
            std::cout << "Bonjour ! Je suis " << nom << std::endl;
            marcher();
            nager();
            std::cout << "Je glisse a " << vitesseGlisse << " m/s" << std::endl;
        };
};

int main() {
    Pinguin obj1("Pingu");
    obj1.sePresenter();

    Pinguin obj2(obj1); //obj1 est copié

    //On modifie la vitesse de marche et de nage de obj2
    obj2.changerVitesseMarche(2); 
    obj2.changerVitesseNage(3);

    //On affiche les nouvelles infos
    obj2.sePresenter();

    return 0;
}

