#include "pch.h"

using namespace System;


int main(array<System::String ^> ^args)
{
    Plant^ myPot = gcnew Plant(1, "tulipanes", "tulipan");
    Console::WriteLine("Hola mundo " + myPot->Name);
    return 0;
}
