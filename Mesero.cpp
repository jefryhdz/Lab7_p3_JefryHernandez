#include "Mesero.h"

Mesero::Mesero(int platillos){
	this->platillos=platillos;
}
Mesero::Mesero(){

}void Mesero::setPlatillos(int platillos){
   this-> platillos=platillos;
}
int Mesero::getPlatillos(){
   return platillos;
}
