#include <iostream>

namespace task2Namespace
{

	//Napisz program, kt�ry pobierze wsp�rz�dne 2D i obliczy jak daleko jest ten punkt od �rodka uk�adu wsp�rz�dnych
	struct point
	{
		double x;
		double y;
	};

	void getCoordinate(double& x, double& y)
	{
		std::cout << "Podaj wsp�rz�dn� x:\n";
		std::cin >> x;

		std::cout << "Podaj wsp�rz�dn� y:\n";
		std::cin >> y;
	}

	void getCoordinate(point &p)
	{
		std::cout << "Podaj wsp�rz�dn� x:\n";
		std::cin >> p.x;

		std::cout << "Podaj wsp�rz�dn� y:\n";
		std::cin >> p.y;
	}

	void task2()
	{
		point firstPoint;
		//firstPoint.x = 5;
		//firstPoint.y = 5;

		getCoordinate(firstPoint);

		double distance = sqrt(firstPoint.x * firstPoint.x + firstPoint.y * firstPoint.y);

		std::cout << "Odleg�o�� od �rodka to: " << distance;
	}
}




