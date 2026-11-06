#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class EstablishmentSer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit EstablishmentSer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "EstablishmentSer") {}
    public:
        void* Write(void* d) const { void* __callArgs[] = { d }; return CallStatic("Write", __callArgs, 1); }
        bool Read(void* a, void* d) const { void* __callArgs[] = { a, d }; return CallStaticValue<bool>("Read", __callArgs, 2); }
        int Length() const { return ReadStaticField<int>("Length"); }
    };
}
