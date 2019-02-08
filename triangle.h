#include "shape.h"

class triangle : public shape {
private:
    float width;
    float height;
public:
    float getArea() = 0;
};
