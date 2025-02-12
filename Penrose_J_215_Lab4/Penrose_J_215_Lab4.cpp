// Penrose_J_215_Lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial(int& N, int& product) {
	// I recommend writing your factorial code here
	cout << "Factorial: the product of all natural numbers from 1 to N." << endl;
	cout << "Enter N to start the factorial: ";
	cin >> N;
	while(N < 0 ){
		cout << "Factorials only work with Positive numbers. Try entering a positive number:";
		cin >> N;
		}
	product = N;
	cout << N;
	--N;
	cout << N << "!" << "=";
		for (int i = 1; i <= N; --N) {
			product = product * (N);
				cout << "*" << N;
			
	}
		cout << "= " << product << endl;
}
void arithmetic(int& A, int& N, int& B, int& sum) {
	// I recommend writing your arithmetic series code here
	cout << "Arithmetic: a list of numbers, where any number is the previous one plus a fixed amount called the difference." << endl;
	cout << "Please enter the starting number:";
	cin >> A;
	cout << "Please enter the Difference:";
	cin >> B;
	cout << "Please enter how many elements are in the series:";
	cin >> N;
	while (N < 0) {
		cout << "Please enter a positive number for the number of elements in the series:";
		cin >> N;
	}
	sum = A;
	cout << A;
	--N;
	A = A + B;
	
	for (int i = 1; i <= N; ++i) {
		cout << "+" << A;
		sum = sum + A;
		A = A + B;
		
	}
	cout << "=" << sum << endl;

}
void geometric(int& A, int& N, int&R,int& sum,int& product,int& power) {
	// I recommend writing your geometric series code here
	cout << "Geometric: geometric progression. Its complicated but i need an A an R and the number of elements" << endl;
	cout << "Please enter a starting A value:";
	cin >> A;
	cout << "Please enter an R value:";
	cin >> R;
	cout << "Please enter the number of elements:";
	cin >> N;
	while (N < 0) {
		cout << "Please enter a Positive number of elements:";
		cin >> N;
	}
	sum = A;
	cout << A;
	--N;
	power = R;
	for (int i = 1; i <= N; ++i) {
		for (int H = i; H > 1; --H ) {
			power = power * R;
			//cout << "This is power:" << power << endl;
			//Above is a debug line i added to be able to find what power was and figureout why math wasnt adding correctly
		}
		product = A * power;
			cout << "+" << product;
			sum = sum + product;
			power = R;
	}
	cout << "=" << sum << endl;

}
int main() {
	int choice;
	char again;
	int N;
	int product;
	int A;
	int B;
	int sum;
	int R;
	int power;

	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial(N,product);
		}
		else if (choice == 2) {
			arithmetic(A,B,N,sum);
		}
		else if (choice == 3) {
			geometric(A,N,R,sum,product,power);
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
