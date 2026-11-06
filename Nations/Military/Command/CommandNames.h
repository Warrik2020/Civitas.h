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
        void* Ordinal(int n) const { void* args[] = { &n }; return CallStatic("Ordinal", args, 1); }
        void* ArmyName(int ordinal) const { void* args[] = { &ordinal }; return CallStatic("ArmyName", args, 1); }
        void* GroupName(int ordinal) const { void* args[] = { &ordinal }; return CallStatic("GroupName", args, 1); }
    };
}
