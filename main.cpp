#include <iostream>
#include <string>
#include "library1.hpp"
#include <ctime>


int main()
{
double val1 = 1.001;
double val2 = 1.002;
uint8_t precision = 2;    

    cout << "equals(" << val1 << ", " << val2 << ", " << to_string(precision) << ") = " << to_string(equals(val1, val2, precision)) << endl;
    precision = 3;
    cout << "equals(" << val1 << ", " << val2 << ", " << to_string(precision) << ") = " << to_string(equals(val1, val2, precision)) << endl; 

    int sourseN = 0;
    uint8_t bit = 3;

    cout << "setBit1(" << sourseN << ", " << to_string(bit) << ") res = ";
    setBit1(sourseN, bit);
    cout << sourseN << endl;

    cout << "clearBit1(" << sourseN << ", " << to_string(bit) << ") res = ";
    clearBit1(sourseN, bit);
    cout << sourseN << endl;

    cout << "setBit2(" << sourseN << ", " << to_string(bit) << ") res = ";
    setBit2(sourseN, bit);
    cout << sourseN << endl;

    cout << "clearBit1(" << sourseN << ", " << to_string(bit) << ") res = ";
    clearBit2(sourseN, bit);
    cout << sourseN << endl;

    bit <<= 1;
    bit |=1; // set bit 
    cout << "setBit3(" << sourseN << ", " << to_string(bit) << ") res = ";
    setBit3(sourseN, bit);
    cout << sourseN << endl;

    bit &=~1; // clear bit 
    cout << "setBit3(" << sourseN << ", " << to_string(bit) << ") res = ";
    setBit3(sourseN, bit);
    cout << sourseN << endl;

    sourseN = 0;
    bit = 5; //
    cout << "revertBit(" << sourseN << ", " << to_string(bit) << ") res = ";
    revertBit(sourseN, bit);
    cout << sourseN << endl;

    cout << "revertBit(" << sourseN << ", " << to_string(bit) << ") res = ";
    revertBit(sourseN, bit);
    cout << sourseN << endl;

    const int size = 5;
    const int src1[size] = {1,2,3,4,5};
    const int src2[size] = {6,7,8,9,10};
    size_t size_dts = 5;
    int dts[size_dts];
    if (addVector(src1, src2, size, dts, size_dts))
    {
        writeOut(dts, size_dts);
    }else
    {
        cout << "destination array less than source" << endl;
    }
    
    size_dts = 4;
    if (addVector(src1, src2, size, dts, size_dts))
    {
        writeOut(dts, size_dts);
    }else
    {
        cout << "destination array less than source" << endl;
    }

	
	int size_arr = 10;	
	int ar[size_arr];
	srand(static_cast<unsigned int>(time(0)));

	for (int i = 0;i < size_arr; i++)
	{
		ar[i] = rand()%size_arr;
	}
	cout << "Array before sorting:" << endl;
	writeOut(ar, size_arr);

	sortm(ar, size_arr);
	cout << "Array after sorting:" << endl;
	writeOut(ar, size_arr);

	long number = 123456789;	
	cout << "Print backward " << number << ": ";
	ptrBackwDecimal(number);
	cout << endl;

    return 0;
}

