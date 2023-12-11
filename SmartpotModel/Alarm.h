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
        property int Id_plant;
        //Métodos
        Alarm() {};
        Alarm(int id, String^ hour, String^ date, int Id_plant);
    };
};