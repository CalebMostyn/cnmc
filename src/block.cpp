#include "block.h"
#include "godot_cpp/classes/box_mesh.hpp"
#include "godot_cpp/classes/mesh_instance3d.hpp"
#include "godot_cpp/core/memory.hpp"
#include "godot_cpp/variant/vector3.hpp"

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

void Block::_bind_methods() {
    ClassDB::bind_method(D_METHOD("test"), &Block::test);
    // ClassDB::bind_method(D_METHOD("_ready"), &Block::_ready);
}

void Block::test() {
    print_line("Hello World");
}

void Block::_ready() {
    mesh = memnew(MeshInstance3D);

    Ref<BoxMesh> box;
    box.instantiate();
    box->set_size(Vector3(1.0,1.0,1.0));

    mesh->set_mesh(box);

    add_child(mesh);
}

Block::Block() {
    
}
