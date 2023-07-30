#include <iostream>

using namespace std;



int main() {


	struct order {
		string order_name = "";
		int amount;
		float price;

	}order;

	int order_input, food_input, drink_input;
	

	enum order_type {
	    food = 1,
		drink
	};
	
	enum food_choice {
		tacobella = 1,
		burger,
	};

	enum drink_choice {
		coffee = 1,
		tea,
		coca
	};

	
	
	bool exit_loop = false;
	
	while (exit_loop == false) {
		

		cout << "enter 1 for ordering food and 2 for order drink " << endl << "enter your choice here: " << endl;
		cin >> order_input;
		
		
		if (order_input == order_type::drink) {
			int amount;

			while (true) {


				cout << "drinks: " << endl
					<< "press 1 for coffee  " << endl
					<< "press 2 for tea " << endl
					<< "press 3 for coca " << endl
					<< "enter your choice here: "
					<< endl;

				cin >> drink_input;

				cout << "please enter the number of items you want to order: " << endl;

				cin >> amount;

				if (drink_input == drink_choice::coffee) {
					float base_pirce = 1.2;
					order.order_name = "coffee";
					order.amount = amount;
					order.price += base_pirce * amount;
					cout << "you just ordered  " << order.amount << ", " << order.order_name << ", which costed you: " << order.price << endl;
					exit_loop = true;
					break;
					
				}
				else if (drink_input == drink_choice::tea) {
					float base_pirce = 1.0;
					order.order_name = "tea";
					order.amount = amount;
					order.price += base_pirce * amount;
					cout << "you just ordered  " << order.amount << ", " << order.order_name << ", which costed you: " << order.price << endl;
					exit_loop = true; 
					break;
				}
				else if (drink_input == drink_choice::coca) {
					float base_pirce = 1.5;
					order.order_name = "coca";
					order.amount = amount;
					order.price += base_pirce * amount;
					cout << "you just ordered  " << order.amount << ", " << order.order_name << ", which costed you: " << order.price << endl;
					exit_loop = true;
					break;
					
				}
				else
					cout << "please enter a valid input" << endl;

			}
			

		}
		else if (order_input == order_type::food) {
			int amount;

			while (true) {
				cout << "foods" << endl
					<< "press 1 for taco bella " << endl
					<< "press 2 for burger" << endl
					<< "enter your choice here: "
					<< endl;

				cin >> food_input;

				cout << "enter the number of items you want to order" << endl;

				cin >> amount;

				if (food_input == food_choice::tacobella) {
					float base_pirce = 4;
					order.order_name += "taco bell";
					order.amount = amount;
					order.price = base_pirce * amount;
					cout << "you just ordered  " << order.amount << ", " << order.order_name << ", which costed you: " << order.price << endl;
					exit_loop = true;
					break;
				}
				else if (food_input == food_choice::burger) {
					float base_pirce = 5;
					order.order_name += "burger";
					order.amount = amount;
					order.price = base_pirce * amount;
					cout << "you just ordered  " << order.amount << ", " << order.order_name << ", which costed you: " << order.price << endl;
					exit_loop = true;
					break;
				}
				else
					cout << "please enter a valid input" << endl;


			}

		}
	
		
	}
	
	
	
	
	return 0;
}
