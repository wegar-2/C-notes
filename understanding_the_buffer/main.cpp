#include <iostream>
#include <iomanip>
#include <string>


int main() {

    /* ****************************************************************************************************** */
    /* ****************************************************************************************************** */
    /* **************** 1. class char object stores one symbol and load one symbol at a time **************** */
    std::cout << "------------------------ 1. ------------------------" << std::endl;
    std::cout << "type in 6 characters..." << std::endl;
    char temp;
    std::cin >> temp; // this line gets user input (std::cin command), stores it in a buffer and then passes it to temp;
    std::cout << temp << std::endl;
    /*
        The mechanism of passing content of buffer into temp needs to be described in more detail to comprehend
        how std::cin works in detail. Suppose that user's input is "qwerty". Then, "qwerty" is stored in the buffer and
        when the std::cin >> temp is executed ONLY THE FIRST element of the buffer is put into variable temp.
        Later on, every time the std::cin >> temp command is called, yet another ONE element of the buffer is put into
        the variable temp. This is checked below (number of iterations is 5 because I assume that user's input is "qwerty".
    */
    for (int k = 0; k < 5; ++k) {
        std::cin >> temp;
        std::cout << k << ": " << temp <<  std::endl;
    }
    /* ****************************************************************************************************** */



    /* ****************************************************************************************************** */
    /* ****************************************************************************************************** */
    /* ******************* 2. passing content from cin's buffer into an array of chars ********************** */
    std::cout << std::endl << std::endl;
    std::cout << "------------------------ 2. ------------------------" << std::endl;
    std::cout << "type in 3 characters..." << std::endl;
    char CharArray[3]; // this array accepts only 3 arguments
    std::cin >> CharArray; // suppose that input is "asdfghj"
    std::cout << CharArray << std::endl;
    /* the above will throw error: 'stack smashing detected' when run */
    /* ****************************************************************************************************** */


    /* ****************************************************************************************************** */
    /* ****************************************************************************************************** */
    /* *********** 3. limiting the number of characters from the buffer loaded into a variable ************** */
    // using iomanip library's method: setw()
    std::cout << std::endl << std::endl;
    std::cout << "------------------------ 3. ------------------------" << std::endl;
    std::cout << "type in at least 6 characters..." << std::endl;
    char CharArrayTwo[6];
    std::cin >> std::setw(6) >> CharArrayTwo; /* suppose input is 123456789: then 123456 is printed */
    std::cout << CharArrayTwo << std::endl << std::endl;
    /* ****************************************************************************************************** */


    /* ****************************************************************************************************** */
    /* ****************************************************************************************************** */
    /* ***************************************** 4. using cin.get() ***************************************** */
    std::cout << std::endl << std::endl;
    std::cout << "------------------------ 4. ------------------------" << std::endl;
    std::cout << "type in 5 characters..." << std::endl;
    char str1[5];
    std::cin.get(str1, 4);
    std::cout << "string: " << str1 << std::endl;
    /* ****************************************************************************************************** */


    /* ****************************************************************************************************** */
    /* ****************************************************************************************************** */
    /* 5. using cin.getline() */
    std::cout << std::endl << std::endl;
    std::cout << "------------------------ 5. ------------------------" << std::endl;
    std::cout << "type in 7 characters..." << std::endl;
    char str2[7];
    std::cin.getline(str2, 7);
    std::cout << "string: " << str2 << std::endl;
    /* ****************************************************************************************************** */


    return 0;
}
