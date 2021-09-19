#include "matplotlibcpp.h"
#include <vector>
#include <cmath>

namespace plt = matplotlibcpp;

int main(){
    std::vector<double> y = {1,2,3};
    std::vector<double> x = {1.3,2.21,3.9};
    plt::figure();
    plt::plot(x,y);
    plt::xlabel("time [s]");
    plt::ylabel("observations [m]");
    plt::title("Matplotlib minimal example");
    plt::legend();
    plt::show();
return 0;
}
