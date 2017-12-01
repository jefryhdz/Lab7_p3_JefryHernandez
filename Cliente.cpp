#include "Cliente.h"

Cliente::Cliente(string Direccion,int rating){
	this->Direccion=Direccion;
	this->rating=rating;
}
Cliente::Cliente(){

}void Cliente::setDireccion(string Direccion){
   this-> Direccion=Direccion;
}
string Cliente::getDireccion(){
   return Direccion;
}
void Cliente::setRating(int rating){
   this-> rating=rating;
}
int Cliente::getRating(){
   return rating;
}
