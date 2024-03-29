//COEN244 FINAL PROJECT 
//SILE YANG - 40028543 && MIKHAIL ANGELO PELLAS - 40128268
//THIS PROJECT IS OUR ORIGINAL WORK
//13-04-2022

#include <iostream>
#include "Vertex.h"
#include "Edge.h"
#include "Graph.h"
#include "Prereq.h"
using namespace std;



int main() {

	//create an object of type Prereq
	Prereq elec;
	elec.display(); //empty graph

	//test addVertex func to add all vertices in the graph (each vertex is a course name)
	elec.addVertex("coen231"); //this gets ID 1
	elec.addVertex("coen243");
	elec.addVertex("coen244");
	elec.addVertex("coen352");
	elec.addVertex("elec273");
	elec.addVertex("engr201");
	elec.addVertex("engr202");
	elec.addVertex("engr213");
	elec.addVertex("engr233");
	elec.addVertex("engr301");
	elec.addVertex("engr391");
	elec.addVertex("engr392");
	elec.addVertex("math204");
	elec.addVertex("math205");
	elec.addVertex("phys205");


	/////////////////#8 REQUIREMENT///////////////////
	//test searchVertex func to see if the vertex is successfully added
	cout << "_________________________________________________________________________________________" << endl << endl;
	cout << "Test searchVertex func to see if the vertex is successfully added:" << endl;
	cout <<"Is coen231 added?	"<< elec.searchVertex("coen231") << endl;
	cout <<"Is elec273 added?	"<< elec.searchVertex("elec273") << endl;
	cout <<"Is math205 added?	"<< elec.searchVertex("math205") << endl;
	cout <<"Is phys205 added?	"<<elec.searchVertex("phys205") << endl;
	cout << "Is soen300 added?	" << elec.searchVertex("soen300") << endl; //this should output 0 because we dont have soen300 as a vertex
	cout << "_________________________________________________________________________________________" <<endl<< endl;
		


	//test addEdge func to specify which course is a pre-req of which 
	elec.addEdge("math204", "coen231"); //math204 is a pre-req of coen231
	elec.addEdge("math204", "coen243");
	elec.addEdge("math204", "engr233");
	elec.addEdge("math204", "engr213");
	elec.addEdge("math205", "engr213");
	elec.addEdge("phys205", "elec273");
	elec.addEdge("engr202", "engr392");
	elec.addEdge("engr201", "engr392");
	elec.addEdge("coen231", "coen352");
	elec.addEdge("engr233", "engr391");
	elec.addEdge("engr213", "engr391");
	elec.addEdge("engr213", "elec273");
	elec.addEdge("coen243", "coen244");
	elec.addEdge("coen244", "coen352");
	





	/////////////////#7 REQUIREMENT///////////////////
	//test searchEdge
	cout << "Test searchEdge func to see if a course is a prereq of the other: " << endl;
	cout << "Is coen244 a prereq of coen352?     " << elec.searchEdge("coen244", "coen352") << endl;
	cout << "Is coen352 a prereq of coen244?     " << elec.searchEdge("coen352", "coen244") << endl;
	cout << "Is engr201 a pre-req for engr392?   " << elec.searchEdge("engr201", "engr392") << endl;
	cout << "Is engr391 a prereq of math204?     " << elec.searchEdge("engr391", "math204") << endl;
	cout << "_________________________________________________________________________________________" << endl << endl;
		




	//test for display func to display all  vertices and edges of a graph (which is an object of type Prereq)
	//elec.display();



		
	//operator overloading test 
	//equality operator:
	cout << "Operator overloading test" << endl;

	cout << "Test G1 == G2 to see if two graphs are the same: " << endl<<endl; 
	Prereq G1, G2; 
	G1.addVertex("coen231");
	G1.addVertex("coen244");
	G1.addVertex("elec273");
	G1.addVertex("coen352");
	G1.addEdge("coen244","coen352");

	G2.addVertex("engr201");
	G2.addVertex("engr202");
	G2.addVertex("engr392");
	G2.addEdge("engr201", "engr392");
	G2.addEdge("engr202", "engr392");

	if (G1 == G2) {
		cout << "G1 is the same as G2" << endl;
	}
	else
		cout << "G1 is not the same as G2"<<endl;
	
	
	//tes





	cout << "G1 is: " << endl; 
	cout << G1;
	cout << "\n" << endl;
	cout << "G2 is: " << endl;
	cout << G2;
	cout << "\n" << endl;

	G1 = G2; 
	cout <<"After calling G1=G2, G1 is now: " << endl;
	cout << G1;
	cout << "\n" << endl;

	//(G2.getVertexArr())[0].setVertexName("engr392"); //change the vertex at index 0
	//cout << "After changing first vertex in G2 to engr392, G2 is now: " << endl;
	//G2.display();
	//cout << "\n" << endl;
	//cout << "Test to see if G1 is still the same as the previous G2: " << endl;
	//G1.display();
	cout << "_________________________________________________________________________________________" << endl << endl;
	



	////////////#5 REQUIREMENT OF THE PROJECT////////
	//test for <<G
	cout << "Test <<G to see all the veticies & edges of the graph elec: " <<endl<< endl;
	cout << elec;
	//cout << G1;
	//cout << G2;
	cout << "_________________________________________________________________________________________" << endl << endl;
	

	

	/////////////////#6 REQUIREMENT////////////////////////////
	cout << "Test vertexPath func to see what courses I can take after a prereq: " <<endl <<endl;
	elec.vertexPath("math204");
	elec.vertexPath("coen243");
	elec.vertexPath("coen244");


	return 0;
}