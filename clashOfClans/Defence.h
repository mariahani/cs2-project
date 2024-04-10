#ifndef DEFENCE_H
#define DEFENCE_H
#include "ClanCastle.h"
#include <qstring.h>

#endif // DEFENCE_H


class Defence: public ClanCastle{


private:
    QString type;

public:
    Defence();


    void addDefence();
    void shoot();
    ~Defence();

};
