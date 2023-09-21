#include <iostream>
#include <string>
using namespace std;

int main() {
    string conversion[] = {"km", "hm", "dam", "m", "dm", "cm", "mm"};
    double conversionFactors[] = {1000000, 10000, 100, 1, 0.1, 0.01, 0.001}; // Conversion factors to meters
    string early, last;
    double input, result;

    cout << "Conversion: km, hm, dam, m, dm, cm, mm" << endl;
    cout << "Input number: ";
    cin >> input;
    cout << "Early: ";
    cin >> early;
    cout << "Last: ";
    cin >> last;

    int fromIdx = -1, toIdx = -1;

    // Find the index of the early and last units in the conversion array
    for (int f = 0; f < 7; f++) {
        if (early == conversion[f]) {
            fromIdx = f;
        }
        if (last == conversion[f]) {
            toIdx = f;
        }
    }

    if (fromIdx != -1 && toIdx != -1) {
        if (fromIdx == toIdx) {
            // Early and last are the same unit, result is equal to input
            result = input;
        } else {
            // Convert input to meters
            double meters = input * conversionFactors[fromIdx];

            // Check for a valid conversion factor (avoid dividing by zero)
            if (conversionFactors[toIdx] != 0) {
                // Convert meters to the desired unit
                result = meters / conversionFactors[toIdx];
            } else {
                cout << "Invalid conversion: Cannot convert from " << early << " to " << last << endl;
                return 1; // Exit with an error code
            }
        }

        cout << input << " " << early << " = " << result << " " << last << endl;
    } else {
        cout << "Invalid units entered." << endl;
    }

    return 0;
}

