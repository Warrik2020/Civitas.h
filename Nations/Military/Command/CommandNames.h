#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class CommandNames : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CommandNames(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "CommandNames") {}
    public:
        void* Ordinal(int n) const { void* __callArgs[] = { &n }; return CallStatic("Ordinal", __callArgs, 1); }
        void* ArmyName(int ordinal) const { void* __callArgs[] = { &ordinal }; return CallStatic("ArmyName", __callArgs, 1); }
        void* GroupName(int ordinal) const { void* __callArgs[] = { &ordinal }; return CallStatic("GroupName", __callArgs, 1); }
    };
}
