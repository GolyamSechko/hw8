#ifndef GS_PAIR_H
#define GS_PAIR_H

template <typename T1, typename T2>
class Pair
{
private:
    T1 fst;
    T2 snd;
public:
    T1& first()         { return fst; }
    T2& second()        { return snd; }
    T1  first()  const  { return fst; }
    T2  second() const  { return snd; }
    Pair(const T1 & lval, const T2 & rval) : fst(lval), snd(rval) {}
    Pair() = default;
    ~Pair() = default;
};

#endif
