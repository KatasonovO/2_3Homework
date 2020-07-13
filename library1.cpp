#include "library1.hpp"
#include <iostream>
#include <cmath>

//#define DEBUG_LOG

bool equals(double val1, double val2, uint8_t precision)
{
    return (abs(val1 - val2) <= (1.0/static_cast<double>(pow(10,precision))));
}

// 1st option - bit as mask (need opposite clearBit(..))
void clearBit1(int& src, uint8_t bit)
{
    src &=~bit;
}
void setBit1(int& src, uint8_t bit)
{
    src |=bit;
}

// 2st option bit - bit's number (1-256) (need opposite clearBit(..))
void clearBit2(int& src, uint8_t bit)
{
    src &=~(1<<bit);
}
void setBit2(int& src, uint8_t bit)
{
    src |=(1<<bit);
}

// 3st option bit 1-7 - bit's number (1-127), 1st bit - set state
void setBit3(int& src, uint8_t bit)
{
    if (bit&0x01)
    {    
        bit>>=1;
        src |=(1<<(bit));
    }else
    {
        bit>>=1;
        src &=~(1<<(bit));
    }
}


void revertBit(int& src, uint8_t bit)
{
    src ^= (1<<bit);
}


bool addVector(const int* src1, const int* src2, const int size, int* dts, std::size_t size_dts)
{
    if (size_dts < size) {return false;} // destination array less than source
    for (int i=0; i < size; i++)
    {
        dts[i] = src1[i] + src2[i];
    }
    return true;
}

// simple sort
void sortm(int * array, int size)
{
    int j = 0;
    while (j<size)
    {
		for (int i=j; i < size; i++)
        {
        	if (array[j] > array[i])
			{
				int temp = array[j];
				array[j] = array[i];
				array[i] = temp;
			}
#ifdef DEBUG_LOG
		writeOut(array, size);
#endif
        }
		j++;
	}
}

//
void ptrBackwDecimal(long number)
{
#ifdef DEBUG_LOG
	cout << "number = " << number << endl;	
#else
	cout << number%10 << " ";	
#endif
	if (number/10 != 0)
	{
		ptrBackwDecimal(number/10);
	}
}

//for array print
void writeOut(int* dts, std::size_t size_dts)
{
    cout << "dts = [";
    for (int i = 0; i < size_dts; i++)
    {
         cout << dts[i] << " " ;
    }
    cout << "] "<< endl;
}

