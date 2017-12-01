#include "Chef.h"

Chef::Chef(string Platofavorito){
	this->Platofavorito=Platofavorito;
}
Chef::Chef(){

}void Chef::setPlatofavorito(string Platofavorito){
   this-> Platofavorito=Platofavorito;
}
string Chef::getPlatofavorito(){
   return Platofavorito;
}
