// Якубовський Владислав, РІ-11, АП, ЛР 13.2.1
#include <iostream>

#define Z 6
#define MAX(x, z) ((x) > (z) ? (x) : (z))
#define MIN(x, z) ((x) < (z) ? (x) : (z))
#define ABS(x) ((x) < 0) ? (-1 * (x)) : (x)
#define PRINT(w) printf("Result: %f", w)
#define SQUARE_POW(x) x * x
#define DO_COMPILE_FIRST_PART(z) (((z) > 5) && ((z) < 10)) ? true : false

using namespace std;

int main()
{
    float x, w = 0;

    cout << "Enter \"x\" value: "; cin >> x;

#if DO_COMPILE_FIRST_PART(Z)
    float _min = MIN(x, Z), _max = MAX(x + Z, x * Z);

    w = _min * _max;

#else
    float _abs = ABS(x - Z), _max = MAX(_abs, Z);

    w = SQUARE_POW(_max);

#endif
    PRINT(w);
}
