/**
 * Project Untitled
 */

#include "Sensor.h"

namespace System {
    public ref class Sensor_humidity : public Sensor {
    public:
        property int Id;
        property bool Connected;
        property int Value;

        Sensor_humidity(){}
        Sensor_humidity(int value);
    };
}




