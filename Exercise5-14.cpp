// Jarye Murphy
// exercise 5.14 from c++ primer 
/*
Exercise 5.14: Write a program to read strings from standard input looking for du-
plicated words. The program should find places in the input where one word is fol-
lowed immediately by itself. Keep track of the largest number of times a single repeti-
tion occurs and which word is repeated. Print the maximum number of duplicates, or
else print a message saying that no word was repeated. For example, if the input is
how now now now brown cow cow
the output should indicate that the word now occurred three times.
*/
#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using std::vector;
using std::string;
using std::cout;
using std::cin;

int main()
{
	vector<string> countRep;
	string text;
	string mostRepeat;
	int count = 0;
	int competeCount = 0;
	cout << "type 'q' to quit data entry" << "\n";
	while (cin >> text)
	{
		if (text == "q")
		{
			break;
		}
		countRep.emplace_back(text);

	}
	count = 0;
	for (auto it = countRep.begin(); it != countRep.end(); ++it)
	{
		text = *it; // in the vector set text to current word in vector
		competeCount = 0;
		for (auto j = it; j != countRep.end(); ++j) // look at next identical words that follow in the vector
		{
			if (*j != text) // if the next word doesnt equal current word break its not a repeat word anymore
			{
				break;
			}
			else { 
			++competeCount; // else there is another repetition of that word increment count for that word
			}
		}
		if (count < competeCount) // if count is less than the current word repeat count 
		{
			count = competeCount; // set the new highest count to that many times its been repeated
			mostRepeat = text;    // set the word that correlates to the count of repetitions
		}
	}
	cout << "count " << count << '\t' << " repeated word: " << mostRepeat << "\n";
	system("Pause");
	return 0;
}