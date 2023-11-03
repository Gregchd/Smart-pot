/**
 * Project Untitled
 */

#include "Sensor.h"

namespace System {
    public ref class Sensor_humidity : public Sensor {
    public:
        property int Id;
        property bool Connected;
        property float Value;

        Sensor_humidity(){}
        Sensor_humidity(float value);
    };
}




