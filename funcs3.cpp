#include <iostream>

void swapBiats(unsigned long long&num, int size ) {
	

    int p1{ 0 };
    int p2{ size - 8 };
    int bit1, bit2;
    for (int i{ 0 }; i < 8; i++) {
         bit1 = (num >> p1) & 1;//��������� �������� ���� 
         bit2 = (num >> p2) & 1;
         if (bit1 != bit2) {
             num ^= (1 << p1) | (1 << p2);
         }
         p1++; p2++;
    }

}