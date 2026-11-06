#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class CommandBonus : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CommandBonus(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "CommandBonus") {}
    public:
        float AttackMul(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<float>("AttackMul", __callArgs, 1); }
        float DefenceMul(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<float>("DefenceMul", __callArgs, 1); }
        float SpeedMul(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<float>("SpeedMul", __callArgs, 1); }
    };
}
