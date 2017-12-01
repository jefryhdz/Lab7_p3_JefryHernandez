#include "Administrador.h"

Administrador::Administrador(vector<Personal*> Lista){
	this->Lista=Lista;
}
Administrador::Administrador(){

}void Administrador::setLista(Personal* CLista){
   this-> Lista.push_back(CLista);
}
vector<Personal*> Administrador::getLista(){
   return Lista;
}
