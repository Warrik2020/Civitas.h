#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class ValidateMemo : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ValidateMemo(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "ValidateMemo") {}
    public:
        bool Open(void* it) const { void* args[] = { it }; return CallStaticValue<bool>("Open", args, 1); }
        void Close() const { CallStatic("Close", nullptr, 0); }
    };
}
