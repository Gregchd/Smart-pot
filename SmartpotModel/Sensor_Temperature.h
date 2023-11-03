/**
 * Project Untitled
 */

#include "Sensor.h"

namespace System {
    public ref class Sensor_Temperature : public Sensor {
    public:
        property int Id;
        property bool Connected;
        property float Value;

        Sensor_Temperature() {}
        Sensor_Temperature(float value);
    };
}

