
#pragma once

#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/mesh_instance3d.hpp>
#include <godot_cpp/classes/box_mesh.hpp>

using namespace godot;

class Block : public Node3D {
    GDCLASS(Block, Node3D);

    MeshInstance3D* mesh;

protected:
    static void _bind_methods();
    
public:

    void test();
    void _ready();

    Block();
};
