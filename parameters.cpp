#include "tsp.hpp"

using namespace std;

void ACOTSP::SetParameters()
{
    // Pide al usuario los parámetros para
    // ejecutar el algoritmo:
	cout<<endl;
	cout<<"\n* Cantidad de hormigas: ";
	cin>>antsAmount;
	cout<<"* Influencia de la fermona: ";	
	cin>>pheromoneImportance;
	cout<<"* Influencia de las visibilidad: ";
	cin>>visibilityImportance;
    cout<<"* Valor inicial de fermona: ";
	cin>>defaultPheromone;
	cout<<"* Cociente de evaporacion de fermona: ";
	cin>>pheromoneEvaporation;
	cout<<"* Constante de valor para el paso de una hormiga por arista: ";
	cin>>pheromoneStep;
    cout<<"\n";
}