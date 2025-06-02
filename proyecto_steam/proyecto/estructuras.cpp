#include "estructuras.h"
#include <iostream>

using namespace std;


USER usuario;

void CrearUsuario(USER &usuario_nuevo){
    usuario_nuevo.nombre = "Josue";
    usuario_nuevo.apellido = "Medina";
    usuario_nuevo.username = "Eve";
    usuario_nuevo.ID = 1;
    usuario_nuevo.password = "1234";
}
