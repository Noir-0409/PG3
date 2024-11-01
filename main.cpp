#include <iostream>

template <typename T1, typename T2>
class Compare {
public:
    T1 Min(T1 a, T2 b) {
        return (a < b) ? a : b;
    }
};

int main() {
 
    Compare<int, int> comp1;
    Compare<int, float> comp2;
    Compare<int, double> comp3;
    Compare<float, float> comp4;
    Compare<float, double> comp5;
    Compare<double, double> comp6;

    std::cout << "(3, 5): " << comp1.Min(3, 5) << std::endl;
    std::cout << "(3, 5.7f): " << comp2.Min(3, 5.7f) << std::endl;
    std::cout << "(3, 4.2): " << comp3.Min(3, 4.2) << std::endl;
    std::cout << "(3.5f, 2.2f): " << comp4.Min(3.5f, 2.2f) << std::endl;
    std::cout << "(3.5f, 4.2): " << comp5.Min(3.5f, 4.2) << std::endl;
    std::cout << "(5.5, 4.2): " << comp6.Min(5.5, 4.2) << std::endl;

    return 0;
}
