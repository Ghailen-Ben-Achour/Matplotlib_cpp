#include "matplotlibcpp.h"
#include <Eigen/Dense>
#include <cmath>

namespace plt = matplotlibcpp;

int main(){
    Eigen::VectorXd x1 = Eigen::VectorXd::LinSpaced(200,0,6);
    Eigen::VectorXd y1;
    y1 = x1.array().sin();
    plt::figure();
    plt::plot(x1, y1);
    plt::show();
    /*plt::xlabel("x");
    plt::ylabel("$sin(x)$");
    plt::title("Eigen + Matplotlibcpp");
    plt::show();*/    
    return 0;
}
