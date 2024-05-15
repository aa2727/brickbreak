#ifndef WALL_H
#define WALL_H

#include "model/items/Solid.h"


/**
 * @brief class for the wall
 * 
 */
class Wall : public Solid
{
    public:
    Wall();
    Wall(const float pos_x, const float pos_y);
    Wall(const float pos_x, const float pos_y, const float width, const float height);
    ~Wall();

    /**
     * @brief call when the wall is hit by a ball
     * 
     */
    bool collided_by(Solid &ball) override;
}
;

#endif // WALL_H