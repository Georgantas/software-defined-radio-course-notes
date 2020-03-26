
#include <vector>
#include <string>
#include <complex>
#include <iostream>
#include <numeric>

/*
1. A weather station measures wind direction once per minute.
Write a program to indicate the average direction over a
five minute period. Try it on the following sets of readings:

    12°, 15°, 13°, 9°, 16°
    358°, 1°, 359°, 355°, 2°
    210°, 290°, 10°, 90°, 170°

2. Modify your program to handle wind speed input in addition to direction.
*/

const float deg_rad_ratio = 180.f/3.1315926f;

float rad_to_deg(float rad) {
    return rad * deg_rad_ratio;
}

float deg_to_rad(float deg) {
    return deg / deg_rad_ratio;
}

int main(int argc, char *argv[]) {
    // input is: direction1 speed1 direction2 speed2 etc.
    std::vector<std::string> values(&argv[1], &argv[argc]);

    // convert to set of complex numbers
    std::vector<std::complex<float>> winds;

    for(size_t i = 0; i < values.size() / 2; i++) {
        float mag = std::stof(values[i*2]);
        float phase = deg_to_rad(std::stof(values[i*2 + 1]));
        winds.push_back(std::polar(mag, phase));
    }

    // calculate average
    std::complex<float> result = std::accumulate(winds.begin(), winds.end(), std::complex<float>()) / std::complex<float>(winds.size());

    std::cout << std::abs(result) << ", " << rad_to_deg(std::arg(result)) << std::endl;
}

