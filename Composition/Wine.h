#ifndef GS_WINE_H
#define GS_WINE_H

#include <valarray>
#include <string>
#include "Pair.h"

class Wine {          // i cant use Pair class for realithing private inheritance
    using ArrayIntT  = std::valarray<int>;
    using PairArrayT = Pair<ArrayIntT, ArrayIntT>;
private:
    std::string name;
    int         year;
    PairArrayT  pair; // its can be called composition?
public:
    Wine() : name("no name"), year(0), pair(ArrayIntT(0, 0), ArrayIntT(0, 0)) {}
    Wine(const char* l, int y) : name(l), year(y), pair(ArrayIntT(y), ArrayIntT(y)) {}
    Wine(const char* l, int y, const int yr[], const int bot[]);
    ~Wine() = default;

    void getBottles();
    std::string& label() { return name; }
    int sum() const;
    void show() const;
};

#endif
