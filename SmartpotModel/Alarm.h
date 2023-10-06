/**
 * Project Untitled
 */

namespace System {
    [Serializable]
    public ref class Alarm {
    public:
        property int Id;
        property String^ Hour;
        property String^ Date;
        //Métodos
        Alarm() {};
        Alarm(int id, String^ hour, String^ date);
    };
};