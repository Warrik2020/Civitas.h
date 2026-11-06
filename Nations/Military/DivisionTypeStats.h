#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class DivisionTypeStats : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DivisionTypeStats(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "DivisionTypeStats") {}
    public:
        float StrengthPerUnit(int t) const { void* __callArgs[] = { &t }; return CallStaticValue<float>("StrengthPerUnit", __callArgs, 1); }
        float ManpowerCapMul(int t) const { void* __callArgs[] = { &t }; return CallStaticValue<float>("ManpowerCapMul", __callArgs, 1); }
        float SpeedMul(int t, void* cfg) const { void* __callArgs[] = { &t, cfg }; return CallStaticValue<float>("SpeedMul", __callArgs, 2); }
        float AoiMul(int t, void* cfg) const { void* __callArgs[] = { &t, cfg }; return CallStaticValue<float>("AoiMul", __callArgs, 2); }
        float SpeedRaw(int t) const { void* __callArgs[] = { &t }; return CallStaticValue<float>("SpeedRaw", __callArgs, 1); }
        float AoiRaw(int t) const { void* __callArgs[] = { &t }; return CallStaticValue<float>("AoiRaw", __callArgs, 1); }
        bool IsEntrenched(void* d, int tick, void* cfg) const { void* __callArgs[] = { d, &tick, cfg }; return CallStaticValue<bool>("IsEntrenched", __callArgs, 3); }
        int TypeCount() const { return ReadStaticField<int>("TypeCount"); }
    };
}
