//
// Created by Quinn Clark on 9/18/2017.
//sites used for general things were SO, and cplusplus.com

// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.cpp"


int main()
{
    List cows;
    cout << "cows list  :  " << cows << endl << endl;

    cows.insertAsFirst(1.23);
    cows.insertAsFirst(2.34);
    cout << "cows list  :  " << cows << endl << endl;

    cows.removeFirst();
    cout << "cows list  :  " << cows << endl << endl;

    List horses(cows);
    cout << "cows list  :  " << cows << endl;
    cout << "horses list:  " << horses << endl << endl;

    horses.removeFirst();
    horses.insertAsFirst(5.67);
    cows.insertAsFirst(6.78);
    //the cows size is
    cout << "cows size " << cows.size() << endl;
    //and the horses size is
    cout << "horses size " << horses.size() << endl;

    horses.insertAsLast(5.32);
    cows.insertAsLast(4.76);
    cout << "cows list  :  " << cows << endl;
    cout << "horses list:  " << horses << endl << endl;

    List pigs;
    cout << "cows list  :  " << cows << endl;
    cout << "horses list:  " << horses << endl;
    cout << "pigs list  :  " << pigs << endl << endl;

    pigs = cows;
    pigs.insertAsLast(3.98);
    cout << "cows list  :  " << cows << endl;
    cout << "horses list:  " << horses << endl;
    cout << "pigs list  :  " << pigs << endl << endl;

    pigs = horses;
    cout << "cows list  :  " << cows << endl;
    cout << "horses list:  " << horses << endl;
    cout << "pigs list  :  " << pigs << endl << endl;

    pigs.insertAsLast(3.21);
    pigs.insertAsLast(3.56);

    pigs.size();
    cows.sum();
    pigs.sum();
    horses.sum();


    cout << "End of code" << endl;

    return 0;
}