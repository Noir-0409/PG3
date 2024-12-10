#include <iostream>
#include <string>
#include <chrono>

int main() {

    std::string a(100000, 'a');

    auto start_time_move = std::chrono::high_resolution_clock::now();
    std::string b = std::move(a);
    auto end_time_move = std::chrono::high_resolution_clock::now();

    a = std::string(100000, 'a');

    auto start_time_copy = std::chrono::high_resolution_clock::now();
    std::string c = a;
    auto end_time_copy = std::chrono::high_resolution_clock::now();

    auto time_move_duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time_move - start_time_move).count();
    auto time_copy_duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time_copy - start_time_copy).count();

    std::cout << "移動: " << time_move_duration << "マイクロ秒\n";
    std::cout << "コピー: " << time_copy_duration << "マイクロ秒\n";

    return 0;

}
