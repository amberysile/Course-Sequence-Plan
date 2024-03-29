//COEN244 FINAL PROJECT 
//SILE YANG - 40028543 && MIKHAIL ANGELO PELLAS - 40128268
//THIS PROJECT IS OUR ORIGINAL WORK
//13-04-2022

#include <iostream>
#include "Vertex.h"
using namespace std;


//initialize the counter to be 0
int Vertex::counter = 0; 


///////////////////#9 REQUIREMENT///////////////////
//default constructor
Vertex::Vertex() {

	counter++; 
	ID = counter; 
	vertexName = " ";
	//cout << "The Vertex Constructor is called." << endl; 

}

//constructor with parameter 
Vertex::Vertex(string s) {

	counter++;
	ID = counter;
	vertexName = s;
}

//copy constructor 
Vertex::Vertex(const Vertex &oldObj) {
	counter++;
	ID = counter;
	vertexName = oldObj.vertexName;
}



void Vertex::setVertexName(string s) {
	vertexName = s;
}

string Vertex::getVertexName() {
	return vertexName;
}