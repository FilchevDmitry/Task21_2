#include <iostream>
#include<vector>
#include <string>
enum room_type
{
	bedroom,
	kitchen,
	bathroom,
	living,
	children
};
struct Room
{
	double square=0;
	room_type room;
};
struct Floor
{
	double ceiling_height=0;
	struct Room space;
};
struct Home
{
	double square;
	bool bake = false;
	struct Floor floo;
	
};
struct Garage
{
	double square=0;
};
struct Cabin
{
	double square=0;
};
struct Bathhouse
{
	double square=0;
	bool bake = false;
};
struct Village
{
    double square=0;
	std::vector<Home> home;
	std::vector<Garage> garage;
	std::vector<Cabin> cabin;
	std::vector<Bathhouse> bath;
};
int main()
{
	int number_of_plots;
	std::cout << "Enter the number of plots in the village : ";
	std::cin >> number_of_plots;
	std::vector<Village> land_plot;

	for (int i = 0; i < number_of_plots; i++)
	{	
		land_plot.push_back(Village());
		std::cout << "Enter the number of buildings on the site : ";
		int construction;
		std::cin >> construction;
		for (int j = 0; j < construction; j++)
		{
			std::string name;
			std::cout << "Enter the name of the building (home, garage, cabin, bathhouse)";
			std::cin >> name;
			if (name == "home")
			{
				std::string temp;
				bool check = true;
				std::cout << "Enter the area of the home : ";
				land_plot[j].home.push_back(Home());
				std::cin >> land_plot[i].home[j].square;
				do {
					std::cout << "Oven in the home? (yes or no) ";
					std::cin >> temp;
					if (temp == "yes")
					{
						land_plot[i].home[j].bake = true;
						check = false;
					}
					else if (temp == "no")
					{
						land_plot[i].home[j].bake = false;
						check = false;
					}
					else
					{
						std::cout << "Incorrect input!!!";
					}
				} while (check);
				int number_of_floors = 0;
				std::cout << "Number of floors in the house ?";
				std::cin >> number_of_floors;
				for (int k = 0; k < number_of_floors; k++)
				{
					
				}
			}
			else if (name == "garage")
			{
				std::cout << "Enter the area of the garage : ";
				land_plot[j].garage.push_back(Garage());
				std::cin >> land_plot[i].garage[j].square;
			}
			else if (name == "cabin")
			{
				std::cout << "Enter the area of the cabin : ";
				land_plot[j].cabin.push_back(Cabin());
				std::cin >> land_plot[i].cabin[j].square;
			}
			else if (name == "bathhouse")
			{
				std::string temp;
				bool check = true;
				std::cout << "Enter the area of the bathhouse : ";
				land_plot[j].bath.push_back(Bathhouse());
				std::cin >> land_plot[i].bath[j].square;
				do {
					std::cout << "Oven in the bath? (yes or no) ";
					std::cin >> temp;
					if (temp == "yes")
					{
						land_plot[i].bath[j].bake = true;
						check = false;
					}
					else if (temp == "no")
					{
						land_plot[i].bath[j].bake = false;
						check = false;
					}	
					else
					{
						std::cout << "Incorrect input!!!";
					}
				} while (check);
			}
			else
				std::cout << "There is no such building in the database\n";
		}
	}
	std::cout << land_plot[0].bath[0].square << std::endl;
	std::cout << land_plot[0].bath[0].bake;
}

