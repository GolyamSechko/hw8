#ifndef GS_WINE_H
#define GS_WINE_H

#include <valarray>
#include <string>

class Wine {
    using ArrayIntT = std::valarray<int>;
    using PairArrayT = std::pair<ArrayIntT, ArrayIntT>;
private:
    std::string name;
    int         year;
    PairArrayT  pair;
public:
    Wine() : name("no name"), year(0), pair(ArrayIntT(0, 0), ArrayIntT(0, 0)) {}
    // l - label, y - number of years, array is created with that size
    Wine(const char* l, int y) : name(l), year(y), pair(ArrayIntT(y), ArrayIntT(y)) {}
    // l - means label, y - number of years, yr[] - years of bottling, bot[] - number of bottles
    Wine(const char* l, int y, const int yr[], const int bot[]);
    ~Wine() = default;

    void getBottles();                         // should ask user for year of bottling and number of bottles for that year
    std::string& label() { return name; }      // should return a link to wine's label
    int sum() const;                           // should return total number of bottles from second valarray<int> object from PairArrayT
    void show() const;
};

#endif
