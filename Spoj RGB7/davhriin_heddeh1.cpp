#include <iostream>
using namespace std;

int main() {
	
	int davhar,orts, haalga, ail;
	cin >> davhar >>orts>> haalga >> ail;


	ail--;

	int orts_haalga = davhar * haalga;
	int orts_ail = orts * haalga;
	int heddeh_orts = (ail / orts_haalga) + 1;



	int heddeh_davhar = (ail % orts_haalga )/haalga + 1;
	int heddeh_ail = (ail % orts_ail) % haalga + 1;
	cout << heddeh_orts<< " " <<heddeh_davhar << " " << heddeh_ail;

	return 0;
}