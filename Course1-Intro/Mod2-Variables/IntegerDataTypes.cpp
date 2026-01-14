// Copyright Bitr8. All Rights Reserved

#include <iostream>

/**
 * Integer data types code
 * @return Exit status
 */

int main()
{
	const int SecondsPerMinute{ 60 };

	int TotalSecondsPlayed{ 100 };

	int TotalMinutesPlayed = TotalSecondsPlayed / SecondsPerMinute;

	int SecondsPlayed = TotalSecondsPlayed % SecondsPerMinute;

	std::cout << "Minutes Played: " << TotalMinutesPlayed << "\n";
	std::cout << "Seconds Played: " << SecondsPlayed << "\n";

	//Altitude problem:
	std::cout << std::endl;

	int FirstAltitude;
	int SecondAltitude;

	std::cout << "Enter First Altitude: ";
	std::cin >> FirstAltitude;
	
	std::cout << "\nAltitude Changed: ";
	std::cin >> SecondAltitude;
	std::cout << "\n";

	int AltitudeChange = SecondAltitude - FirstAltitude;

	std::cout << "First Altitude: " << FirstAltitude << "\n";
	std::cout << "Second Altitude: " << SecondAltitude << "\n";
	std::cout << "Altitude Changed: " << AltitudeChange << "\n";

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
