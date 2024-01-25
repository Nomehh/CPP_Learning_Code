#include "Polygon.h"

void Polygon::add_vertex(int x, int y)
{
    _vertices.emplace_back(x, y);
}
Vertex Polygon::operator[](int n) const
{
    return _vertices.at(n);
}
std::ostream& operator<<(std::ostream& stream, Polygon polygon)
{
    for (auto v : polygon._vertices)
    {
        stream << "(" << v.first << "," << v.second << ")";
    }
    return stream;
}
