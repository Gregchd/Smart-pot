/**
 * Project Untitled
 */
namespace System {
    public ref class Plant {
    public:
        property int Id;
        property String^ Type;
        property String^ Name;
        //property void Health;
        Plant(){}
        Plant(int id, String^ type, String^ name);
    };
}

