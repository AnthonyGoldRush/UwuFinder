/* HyunGyu Ryu
This program is for a UwuFinder that would like to find adorable strings that have one or more adorability from
a file.

Let's call a string containing the characters "uwu" an adorable string. When testing a string for adorability,
it does not matter whether or not the characters u, w, and u appear side-by-side, so long as they appear in that
order. For example: "uwu" is an adorable string, as is "uwuwu", but "wuu" and "uuw" are not adorable strings.
Also note that, "uxwxu" is considered an adorable string -- although the characters u, w, and u are separated by
the character 'x', they still appear in the string in the proper order. Strings count as adorable regardless of
the case of the characters: "UwU" is adorable, as are "uWu" and "UWu".

Let's define the adorability count of a string as the number of occurrences of u, w, and u in that
order in the string. The string "uwu" has an adorability count of 1, the string "OwO" has an
adorability count of 0, and the string "did you watch naruto?" has an adorability count of 1,
because the letters u, w, and u appear in that order. However, the string "do you want to run like
naruto?" has an adorability count of 2: the first occurrence of uwu consists of the u in "you", the
w in "want", and the u in "run", while the second occurrence of uwu consists of the u in "you",
the w in "want", and the u in "naruto". The string "uwu uwu" has an adorability count of 6.

The UwuFinder also would like to find the adolability value. For example, if 7 out of 10 lines in the
file are adorable, the adorability value of the file is 0.7.

Finally, the UwuFinder will fine the total adorability proportion. This is the
adorability count of all lines, divided by the total number of lines in the file.
*/

#include <iostream>
#include "adorable.h"
using namespace std;
int main() {
    UwuFinder uwu("example.txt");
    cout << uwu.getLineCount()<< endl;
    cout << uwu.getAdorableLineCount()<< endl;
    cout << uwu.getAdorabilityProportion()<< endl;
    return 0;
}
