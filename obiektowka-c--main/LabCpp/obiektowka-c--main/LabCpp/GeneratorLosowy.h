//
// Created by pytlu on 17.03.2023.
//

#ifndef OBIEKTOWKA_C_MAIN_GENERATORLOSOWY_H
#define OBIEKTOWKA_C_MAIN_GENERATORLOSOWY_H
#include <random>
using namespace std;
class GeneratorLosowy {
private:
    static random_device device;
    GeneratorLosowy(){}
public:
    static unsigned  short losujPomiedzy
            (unsigned short min, unsigned short max);

    static long losujPomiedzy(long min, long max);
    static int losujOdZeraDo(int max);
};
typedef  GeneratorLosowy GEN;
random_device GeneratorLosowy::device;


#endif //OBIEKTOWKA_C_MAIN_GENERATORLOSOWY_H
