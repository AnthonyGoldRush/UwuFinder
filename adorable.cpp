/* HyunGyu Ryu
This file has member defined functions from the adorable.h.
*/

#include <iostream>
#include "adorable.h"

/* This function is the constructor that initialize the member variables, then
open the file to find the adorable string, adorablility, and adorability value.
The function also save adorable strings to "adorable.txt".
*/
UwuFinder::UwuFinder(std::string fileName)
{
    this->num_Lines = 0;
    this->num_AdorableStrings = 0;
    this->adorabilityValue = 0.0;

    std::ifstream file(fileName);
    using std::string;
    using std::cout;
    using std::endl;
    using std::ifstream;
    using std::ofstream;

    ifstream inputFile;
    inputFile.open(fileName);

    ofstream outputFile;
    outputFile.open("adorable.txt");


    if (inputFile && outputFile)
    {
        while (!inputFile.eof())
        {
            string currentLine;
            getline(inputFile, currentLine);
            for (int a = 0; a < currentLine.length(); a++)
            {
                int length = 0;
                int count_uwu = 0;
                int num = 0;

                length = currentLine.length();

                for (int i = 0; i < length; i++)
                {
                    if (tolower(currentLine[i]) == 'u')
                    {
                        num = i;
                        count_uwu++;
                        break;
                    }
                }

                for (int j = num + 1; j < length; j++)
                {
                    if (tolower(currentLine[j]) == 'w')
                    {
                        num = j;
                        count_uwu++;
                        break;
                    }
                }

                for (int k = num + 1; k < length; k++)
                {
                    if (tolower(currentLine[k]) == 'u')
                    {
                        count_uwu++;
                        break;
                    }
                }
                if (count_uwu == 3)
                {
                    this->num_AdorableStrings++;
                    outputFile << currentLine << endl;
                    break;
                }
            }
            this->num_Lines++;
        }

    }
        inputFile.clear();
        inputFile.close();
        this->getAdorabilityValue();
}

int UwuFinder::getAdorabilityCount(std::string word)
{
    int count1 = 0;

    for (int i = 0; i < word.length(); i++)
    {
        for (int j = i + 1; j < word.length(); j++)
        {
            for (int k = j + 1; k < word.length(); k++)
            {
                if (tolower(word[i]) == 'u' & tolower(word[j]) == 'w' && tolower(word[k]) == 'u')
                {
                    count1++;
                }
            }
        }
    }
    return count1;
}

double UwuFinder::getAdorabilityProportion()
{
    std::ifstream file("adorable.txt");
    using std::string;
    using std::cout;
    using std::endl;
    using std::ifstream;
    int adoreCount = 0;
    ifstream inputFile;
    inputFile.open("adorable.txt");

    if (inputFile)
    {
        while(!inputFile.eof())
        {
            string currentLine;
            getline(inputFile, currentLine);
            for (int a = 0; a < currentLine.length(); a++)
            {
                getAdorabilityCount(currentLine);
            }
          adoreCount += getAdorabilityCount(currentLine);
        }
    }
    inputFile.clear();
    inputFile.close();
   return (double)adoreCount / getLineCount();
}

int UwuFinder::getLineCount()
{
    return this->num_Lines;
}

int UwuFinder::getAdorableLineCount()
{
    return this->num_AdorableStrings;
}


double UwuFinder::getAdorabilityValue()
{
    this->adorabilityValue =(double) num_AdorableStrings / num_Lines;
    return this->adorabilityValue;
}



