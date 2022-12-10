#include <iostream>
#include <fstream>
#include "tsp.hpp"
#include "reader.cpp"
#include "show.cpp"
#include "parameters.cpp"
#include "algorithm.cpp"
#include "tsp.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    // Ejecuta la instancia de TSP de 29 ciudades:
    ACOTSP TSP29(29, "instances/tsp29.csv");
    TSP29.SetParameters();
    TSP29.InstanceTSP();
    // TSP29.ShowRoads();
    // TSP29.ShowPheromones();
    // TSP29.ShowVisibilities();
    TSP29.Simulate();

    return 0;
}