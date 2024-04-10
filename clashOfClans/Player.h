#ifndef PLAYER_H
#define PLAYER_H
#include <qstring.h>
#include"ClanCastle.h"

#endif // PLAYER_H


class Player : public ClanCastle {
private:
    QString type;
    int position;

public:
    Player();// create player constructor
    ~Player(); // remove player destructor

    void move(); // move the player
};
