/**
 * Project Untitled
 */


#include "Sensor.h"

namespace System {
    public ref class Sensor_Uv : public Sensor {
    public:
        property int Id;
        property bool Connected;
        property int Value;

        Sensor_Uv() {}
        Sensor_Uv(int value);
    };
}

