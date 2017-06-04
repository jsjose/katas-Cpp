#include<iostream>
using namespace std;class Pattern{

int x[3];

int* solveEq(int eq[3][4]){
	int D, Dx, Dy, Dz;

	D = eq[0][0]*eq[1][1]*eq[2][2]+eq[0][1]*eq[1][2]*eq[2][0]+eq[0][2]*eq[1][0]*eq[2][1]-
	   (eq[2][0]*eq[1][1]*eq[0][2]+eq[2][1]*eq[1][2]*eq[0][0]+eq[2][2]*eq[1][0]*eq[0][1]);
	Dx = eq[0][3]*eq[1][1]*eq[2][2]+eq[0][1]*eq[1][2]*eq[2][3]+eq[0][2]*eq[1][3]*eq[2][1]-
	    (eq[2][3]*eq[1][1]*eq[0][2]+eq[2][1]*eq[1][2]*eq[0][3]+eq[2][2]*eq[1][3]*eq[0][1]);
	Dy = eq[0][0]*eq[1][3]*eq[2][2]+eq[0][3]*eq[1][2]*eq[2][0]+eq[0][2]*eq[1][0]*eq[2][3]-
   	    (eq[2][0]*eq[1][3]*eq[0][2]+eq[2][3]*eq[1][2]*eq[0][0]+eq[2][2]*eq[1][0]*eq[0][3]);
	Dz = eq[0][0]*eq[1][1]*eq[2][3]+eq[0][1]*eq[1][3]*eq[2][0]+eq[0][3]*eq[1][0]*eq[2][1]-
	    (eq[2][0]*eq[1][1]*eq[0][3]+eq[2][1]*eq[1][3]*eq[0][0]+eq[2][3]*eq[1][0]*eq[0][1]);

	x[0] = Dx/D;
	x[1] = Dy/D;
	x[2] = Dz/D;

	return x;
}