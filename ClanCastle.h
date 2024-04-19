#include <qstring.h>
#ifndef CLANCASTLE_H
#define CLANCASTLE_H

#endif // CLANCASTLE_H


class ClanCastle{
private:
    QString name ;

    int health;


public:

    ClanCastle();
    void createCastle();


    void addFence();

    void setPosition();
    void removeFence();

};
