#include <string>

class Meniu {
public:
    Meniu(const std::string& tipMeniuDat, float pretDat);
    Meniu();
    Meniu(const Meniu& x);
    ~Meniu();

    Meniu& operator=(const Meniu& x);

    const int returnPretTotal() const;
    const std::string& returnTipMeniu() const;

private:
    std::string tipMeniu;
    float pret;
};

