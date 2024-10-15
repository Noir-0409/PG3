#include <stdio.h>
#include <Windows.h>

int Recursive(int hour) {
    if (hour == 1) {
        return 100; 
    }
    return Recursive(hour - 1) * 2 - 50;  
}
int FindProfitableHour() {
    int standardTotalIncome = 0;
    int recursiveTotalIncome = 0;
    int hourCount = 0;

  
    while (recursiveTotalIncome <= standardTotalIncome) {
        hourCount++;
        standardTotalIncome += 1072;
        recursiveTotalIncome += Recursive(hourCount);
    }

    return hourCount;
}

int main() {
    SetConsoleOutputCP(65001); 

    int profitableHour = FindProfitableHour();
   
    return 0;
}
