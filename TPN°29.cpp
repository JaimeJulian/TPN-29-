#include <bits/stdc++.h>
using namespace std;

class Persona{
	private: 
		string Nombre;
		int Edad;
		float Altura;
	
	
	public: 
		Persona(string nombre, int edad, float altura){
			SetDatos(nombre, edad, altura);
		}
		
		void SetDatos(string nombre, int edad, float altura){
			SetNombre(nombre);
			SetEdad(edad);
			SetAltura(altura);
		}
		
		void SetNombre(string nombre){
			Nombre = nombre;	
		}
		void SetEdad(int edad){
			Edad = edad;
		}
		void SetAltura(float altura){
			Altura = altura;
		}
		
		string GetNombre(){
			return Nombre;
		}
		int GetEdad(){
			return Edad;
		}
		float GetAltura(){
			return Altura;
		}
};

int main(){
	
	Persona P1("Moyano" ,16 ,1.75);
	Persona P2("Jaime", 17, 1.87);
	
	cout<<"Persona 1 :"<<endl;
	cout<<"Nombre: "<<P1.GetNombre()<<endl;
	cout<<"Edad: "<<P1.GetEdad()<<" anios"<<endl;
	cout<<"Altura: "<<P1.GetAltura()<<" M"<<endl<<endl;
	
	cout<<"Persona 2 :"<<endl;
	cout<<"Nombre: "<<P2.GetNombre()<<endl;
	cout<<"Edad: "<<P2.GetEdad()<<" anios"<<endl;
	cout<<"Altura: "<<P2.GetAltura()<<" M"<<endl<<endl;

	return 0;
}
