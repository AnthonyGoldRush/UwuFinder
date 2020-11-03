/* HyunGyu Ryu
The class UwuFinder has three private variables and six public members that include the constructor to
find the adorable stings, adorablility, adorability value, and adorability protion.
*/

#ifndef ADORABLE_STRINGS_ADORABLE_H
#define ADORABLE_STRINGS_ADORABLE_H
#include<iostream>
#include<fstream>
#include<string>
class UwuFinder{
    private:
        int num_Lines;
        int num_AdorableStrings;
        double adorabilityValue;
    public:
        UwuFinder(std::string);
        int getAdorabilityCount(std::string);
        int getLineCount();
        int getAdorableLineCount();
        double getAdorabilityValue();
        double getAdorabilityProportion();
};
#endif //ADORABLE_STRINGS_ADORABLE_H
