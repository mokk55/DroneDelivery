#include "stdafx.h"
#include "Drone.h"

Drone::Drone(){

}

Drone::Drone(int Ok, int RK, int s){
	Orderkey = Ok;
	RouteKey = RK;
	Status = s;
}

Drone::Drone(int id, int Ok, int RK, int s){
	ID = id;
	Orderkey = Ok;
	RouteKey = RK;
	Status = s;
}

Drone::Drone(Drone& other){
	ID = other.ID; //TODO: change these to claim a new ID
	//OrderID
	//RouteID

	//order = other.order;//TODO: do this in order
	//route = other.route;//TODO: do this in order
	//droneStatus;
}

Drone::~Drone(){

}

Drone* Drone::operator= (const Drone& i){
	Drone* tmp = new Drone();
	tmp->ID = i.ID;
	//tmp->order = i.order; //TODO: do this
	//tmp->route = i.route; //TODO: do this
	tmp->droneStatus = i.droneStatus;//will this work?

	return tmp;
}

void Drone::assembly2ndStep(Order o, Route r){
	order = o;
	route = r;
}

void Drone::Deliver(){

}

void Drone::Return(){

}

void Drone::gotoNextPoint(){

}

void Drone::gotoPoint(Point3D& p){

}

void Drone::Land(){

}

void Drone::DropPackage(){

}

void Drone::PickupPackage(){

}