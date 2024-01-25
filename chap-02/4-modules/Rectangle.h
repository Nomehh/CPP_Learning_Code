#pragma once

class Rectangle
{
public:
    Rectangle(float length, float width);
    //     : _length { length }
    //     , _width { width }
    // {}
    Rectangle(float size);
    Rectangle();
    float get_length() const;
    float get_width() const;

    void scale(float ratio);
    // {
    //     _length *= ratio;
    //     _width *= ratio;
    // }

    // inline static float _default_size;
    static void set_default_size(float default_size);

private:
    float               _length;
    float               _width;
    inline static float _default_size;
};
