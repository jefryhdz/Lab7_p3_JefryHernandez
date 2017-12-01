#include "Lavaplato.h"

Lavaplato::Lavaplato(double motivacion){
	this->motivacion=motivacion;
}
Lavaplato::Lavaplato(){

}void Lavaplato::setMotivacion(double motivacion){
   this-> motivacion=motivacion;
}
double Lavaplato::getMotivacion(){
   return motivacion;
}
