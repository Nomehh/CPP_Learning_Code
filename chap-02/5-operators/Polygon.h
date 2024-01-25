#pragma once

#include <ostream>
#include <utility>
#include <vector>

using Vertex = std::pair<int, int>;

class Polygon
{
    friend std::ostream& operator<<(std::ostream& stream, Polygon polygon);

public:
    void   add_vertex(int x, int y);
    Vertex operator[](int n) const; // je peux la définir aussi

private:
    std::vector<Vertex> _vertices;
};
std::ostream& operator<<(std::ostream& stream, Polygon polygon);
