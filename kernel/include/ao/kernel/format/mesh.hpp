#pragma once

#include <vector>

#include <glm/vec3.hpp>

struct Mesh
{
    /*
     *  Saves the given mesh as a .stl file
     */
    void writeSTL(std::string filename);
    void writeSTL(std::ostream& out);

    /*  Vertices in 3D space  */
    std::vector<glm::vec3> verts;

    /*  Triangles in the mesh (as indices in verts list)  */
    std::vector<glm::uvec3> tris;
};
