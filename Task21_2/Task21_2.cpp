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
enum construct
{
	home,
	garage,
	cabin,
	bathhouse
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
	struct Home home;
	struct Garage garage;
	struct Cabin cabin;
	struct Bathhouse bathhouse;
};
int main()
{
	int number_of_plots;
	std::cout << "Enter the number of plots in the village : ";
	std::cin >> number_of_plots;
	for (int i = 0; i < number_of_plots; i++)
	{
		std::vector<Village> land_plot;
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

			}
			else if (name == "garage")
			{

			}
			else if (name == "cabin")
			{

			}
			else if (name == "bathhouse")
			{
				std::cout << "Enter the area of the bathhouse : ";
				std::cin>>land_plot[i].bathhouse.square;
			}
			else
				std::cout << "There is no such building in the database\n";
		}
	}
	
}

