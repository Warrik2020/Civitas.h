#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class DivisionTypeMigration : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DivisionTypeMigration(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "DivisionTypeMigration") {}
    public:
        int Migrate(int rawOrdinal) const { void* __callArgs[] = { &rawOrdinal }; return CallStaticValue<int>("Migrate", __callArgs, 1); }
        int Clamp(int rawOrdinal) const { void* __callArgs[] = { &rawOrdinal }; return CallStaticValue<int>("Clamp", __callArgs, 1); }
    };
}
