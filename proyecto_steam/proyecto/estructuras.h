#pragma once
#include <string>


// enum GENEROS {"Indie","FPS","Roguelike","Battle Royale","MOBA","Sandbox"};

typedef struct JUEGOS{
    std::string nombre_juego;
    std::string marca;
    float precio;
    bool comprado;
   //enum GENEROS tipo_juego;
}JUEGO;

typedef struct USUARIO{
    std::string nombre;
    std::string apellido;
    std::string username;
    int ID;
    std::string password;
    JUEGO juegos[2000];
}USER;


extern USER usuario;

void CrearUsuario(USER &usuario_nuevo);
