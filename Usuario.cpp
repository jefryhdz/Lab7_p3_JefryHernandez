#include "Usuario.h"

Usuario::Usuario(string username,string password,string nombre,int edad,int ID,int telefono){
	this->username=username;
	this->password=password;
	this->nombre=nombre;
	this->edad=edad;
	this->ID=ID;
	this->telefono=telefono;
}
Usuario::Usuario(){

}void Usuario::setUsername(string username){
   this-> username=username;
}
string Usuario::getUsername(){
   return username;
}
void Usuario::setPassword(string password){
   this-> password=password;
}
string Usuario::getPassword(){
   return password;
}
void Usuario::setNombre(string nombre){
   this-> nombre=nombre;
}
string Usuario::getNombre(){
   return nombre;
}
void Usuario::setEdad(int edad){
   this-> edad=edad;
}
int Usuario::getEdad(){
   return edad;
}
void Usuario::setID(int ID){
   this-> ID=ID;
}
int Usuario::getID(){
   return ID;
}
void Usuario::setTelefono(int telefono){
   this-> telefono=telefono;
}
int Usuario::getTelefono(){
   return telefono;
}
