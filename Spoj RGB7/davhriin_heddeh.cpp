#include <iostream>
using namespace std;

int main() {
	
	int davhar, haalga, ail;
	cin >> davhar >> haalga >> ail;


	ail--;

	int heddeh_davhar = (ail / haalga ) + 1;
	int heddeh_ail = (ail % haalga) + 1;
	cout << heddeh_davhar << " " << heddeh_ail;

	return 0;
}