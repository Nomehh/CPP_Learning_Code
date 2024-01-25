// Implement Rectangle functions here.
#include "Rectangle.h"

Rectangle::Rectangle(float length, float width)
    : _length { length }
    , _width { width }
{}

Rectangle::Rectangle(float size)
    : Rectangle { size, size }
{}

Rectangle::Rectangle()
    : Rectangle { _default_size }
{}

float Rectangle::get_length() const
{
    return _length;
}
float Rectangle::get_width() const
{
    return _width;
}
void Rectangle::scale(float ratio)
{
    _length *= ratio;
    _width *= ratio;
}

void Rectangle::set_default_size(float default_size)
{
    _default_size = default_size;
}

// float Rectangle::_default_size = 0.f;