/**
 * Project Untitled
 */
namespace System {
    [Serializable]
    public ref class Plant {
    public:
        property int Id;
        property String^ Type;
        property String^ Name;
        property int UserId;
        //property void Health;
        Plant(){}
        Plant(int id, String^ type, String^ name, int userId);
    };
}

