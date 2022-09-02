#include <iostream>
#include<vector>
#include <string>
enum room_type
{
	BEDROOM,
	KITCHEN,
	BATHROOM,
	LIVING,
	CHILDREN,
	OTHER
};
enum house_type
{
	HOME,
	GARAGE,
	CABIN,
	BATHHOUSE
};
struct Room
{
	double square=0;
	room_type room;
};
struct Floor
{
	double ceiling_height=0;
	std::vector<Room> room;
};

struct House
{
	house_type type;
	double square = 0;
	bool bake = false;
	std::vector<Floor> floor;
};
struct Vilage
{
	std::vector<House>house;
};
int main()
{
	int number_of_plots;
	std::cout << "Enter the number of plots in the village : ";
	std::cin >> number_of_plots;
	std::vector<Vilage> land_plot;
	for (int i = 0; i < number_of_plots; i++)
	{	
		land_plot.push_back(Vilage());
		land_plot[i].house.push_back(House());
		std::cout << "Enter the number of buildings on the site : ";
		int construction;
		std::cin >> construction;
		for (int j = 0; j < construction; j++)
		{
			int name;
			std::cout << "Enter the name of the building\n 0-HOME\n 1-GARAGE\n 2-CABIN\n 3-BATHHOUSE\n";
			std::cin >> name;
			land_plot[i].house[j].type =(house_type)name;
			
			if (name == 0)
			{
				bool check = true;
				std::cout << "Enter the area of the home : ";
				std::cin >> land_plot[i].house[j].square;
				do {
					std::string temp;
					std::cout << "Oven in the home? (yes or no) ";
					std::cin >> temp;
					if (temp == "yes")
					{
						land_plot[i].house[j].bake = true;
						check = false;
					}
					else if (temp == "no")
					{
						land_plot[i].house[j].bake = false;
						check = false;
					}
					else
					{
						std::cout << "Incorrect input!!!";
					}
				} while (check);
				int number_of_floors = 0;
				std::cout << "Floors in the house ?\n";
				std::cin >> number_of_floors;
				for (int k = 0; k < number_of_floors; k++)
				{
					int number_of_rooms = 0;
					land_plot[i].house[j].floor.push_back(Floor());
					std::cout << "Ceiling height on the floor ? : ";
					std::cin >> land_plot[i].house[j].floor[k].ceiling_height;
					std::cout << "Enter the number of rooms per floor :";
					std::cin >> number_of_rooms;
					for (int m = 0; m < number_of_rooms; m++)
					{
						int title;
						land_plot[i].house[j].floor[k].room.push_back(Room());
						std::cout << "Enter the room name\n 0-bedroom\n 1-kitchen\n 2-bathroom\n 3-living\n 4-children\n 5-other\n";
						std::cin >> title;
						do
						{
							bool check = true;
							if (title == 0)
							{
								land_plot[i].house[j].floor[k].room[m].room = BEDROOM;
								std::cout << "Enter the area of the bedroom : ";
								std::cin >> land_plot[j].house[j].floor[k].room[m].square;
								check = false;
							}
							else if (title == 1)
							{
								land_plot[i].house[j].floor[k].room[m].room = KITCHEN;
								std::cout << "Enter the area of the kitchen : ";
								std::cin >> land_plot[j].house[j].floor[k].room[m].square;
								check = false;
							}
							else if (title == 2)
							{
								land_plot[i].house[j].floor[k].room[m].room = BATHROOM;
								std::cout << "Enter the area of the bathroom : ";
								std::cin >> land_plot[j].house[j].floor[k].room[m].square;
								check = false;
							}
							else if (title == 3)
							{
								land_plot[i].house[j].floor[k].room[m].room = LIVING;
								std::cout << "Enter the area of the living : ";
								std::cin >> land_plot[j].house[j].floor[k].room[m].square;
								check = false;
							}
							else if (title == 4)
							{
								land_plot[i].house[j].floor[k].room[m].room = CHILDREN;
								std::cout << "Enter the area of the children : ";
								std::cin >> land_plot[j].house[j].floor[k].room[m].square;
								check = false;
							}
							else if (title == 5)
							{
								land_plot[i].house[j].floor[k].room[m].room = OTHER;
								std::cout << "Enter the area of the room : ";
								std::cin >> land_plot[j].house[j].floor[k].room[m].square;
								check = false;
							}
							else
							{
								std::cout << "Incorrect input!!!";
							}
						} while (check);
					}		
				}
			}
			else if (name == 1)
			{
				std::cout << "Enter the area of the garage : ";
				std::cin >> land_plot[i].house[j].square;
			}
			else if (name == 2)
			{
				std::cout << "Enter the area of the cabin : ";
				std::cin >> land_plot[i].house[j].square;
			}
			else if (name == 3) {
				bool check = true;
				std::cout << "Enter the area of the bathhouse : ";
				std::cin >> land_plot[i].house[j].square;
				do {
					std::string temp;
					std::cout << "Oven in the bath? (yes or no) ";
					std::cin >> temp;
					if (temp == "yes")
					{
						land_plot[i].house[j].bake = true;
						check = false;
					}
					else if (temp == "no")
					{
						land_plot[i].house[j].bake = false;
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
	std::cout << land_plot[0].house[0].type << std::endl;
	std::cout << land_plot[0].house[0].bake;
}

