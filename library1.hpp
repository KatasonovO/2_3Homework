#pragma once

#include <cstdint>

using namespace std;

bool equals(double, double , uint8_t precision);
void setBit1(int& src, uint8_t bit);
void clearBit1(int& src, uint8_t bit);
void clearBit2(int& src, uint8_t bit);
void setBit2(int& src, uint8_t bit);
void setBit3(int& src, uint8_t bit);

void revertBit(int& src, uint8_t bit);
bool addVector(const int*, const int*, const int, int* dts, std::size_t);
void sortm(int * array, int size);
void ptrBackwDecimal(long number);


void writeOut(int* dts, std::size_t size_dts);

