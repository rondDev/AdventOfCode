#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::string filename = "./input.txt";
	std::ifstream inputFile;

	inputFile.open(filename);

	std::string textInput;
	
	while(inputFile)
	{
		std::getline(inputFile, textInput);
	}
	
	
	
	std::cout << "Part 1 or 2?: ";
	int partInt;
	std::cin >> partInt;
	int iLen = textInput.length();
	int total = 0;
	for(int i = 0; i < iLen; i++)
	{
		switch (textInput[i])
		{
			case '(':
				total += 1;
				break;
			case ')':
				total -= 1;
				break;
		}
		if(total == -1 && partInt == 2)
		{
			total = i + 1; // This has a plus one since index starts at 0
			break;
		}
	}
	std::cout << "\nTotal: " << total << std::endl;

	std::cout << std::endl << "Press <Enter> to continue...";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();
	
	return 0;
}
