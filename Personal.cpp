#include "Personal.h"

Personal::Personal(string contratacion,double Sueldo){
	this->contratacion=contratacion;
	this->Sueldo=Sueldo;
}
Personal::Personal(){

}void Personal::setContratacion(string contratacion){
   this-> contratacion=contratacion;
}
string Personal::getContratacion(){
   return contratacion;
}
void Personal::setSueldo(double Sueldo){
   this-> Sueldo=Sueldo;
}
double Personal::getSueldo(){
   return Sueldo;
}
