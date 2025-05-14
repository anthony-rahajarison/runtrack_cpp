#include <iostream>
#include <vector>
#include <memory>

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

        // Constructor et Copy Constuctor
        Pinguin (std::string n) {
            nom = n;
        }

        Pinguin (const Pinguin &obj) {
            nom = obj.nom;
            std::cout << "Copie de l'objet" << std::endl;
        }

        // Setter
        void changerVitesseGlisse(double v) {
            vitesseGlisse = v;
        }

        // Vecteur
        static std::vector<std::shared_ptr<Pinguin>> pinguins;


        void sePresenter() {
            std::cout << "Bonjour ! Je suis " << nom << std::endl;
            marcher();
            nager();
            std::cout << "Je glisse a " << vitesseGlisse << " m/s" << std::endl;
        };

        static std::shared_ptr<Pinguin> creer(std::string nom) {
            std::shared_ptr<Pinguin> p = std::make_shared<Pinguin>(nom);
            pinguins.push_back(p);
            return p;
        }
};

int main() {
    auto obj1 = Pinguin::creer("Pingu");
    obj1->sePresenter();

    return 0;
}