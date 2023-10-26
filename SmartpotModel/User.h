/**
 * Project Untitled
 */

namespace System {
    [Serializable]
    public ref class User {
    public:
        property int Id;
        property String^ Username;
        property String^ Password;
        property String^ Email;
        User(){}
        User(int id, String^ username, String^ password, String^ email);
    };
}

