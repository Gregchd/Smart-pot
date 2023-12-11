#pragma once
#include "User.h"

namespace System {
    [Serializable]
        public ref class Admin: public User{
        public:
            property int AdminGrade;

            Admin() {}

            Admin(int id, String^ username, String^ password, String^ email, int admingrade) :
                User(id, username, password, email) {
                this->AdminGrade = admingrade;
            }
    };
}

