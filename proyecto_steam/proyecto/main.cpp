#include "mainwindow.h"
#include <QApplication>
#include "estructuras.h"
#include <iostream>


using namespace std;

int main(int argc, char *argv[]){
    CrearUsuario(usuario);

    cout<<"nombre de usuario: "<<usuario.username<<endl;
    cout<<"nombres y apellidos: "<<usuario.nombre<<" "<<usuario.apellido<<endl;
    cout<<"gogogo"<<endl;

    QApplication a(argc, argv);
    MainWindow w;
    w.show();



    return a.exec();
}
