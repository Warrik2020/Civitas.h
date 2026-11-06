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
        float StrengthPerUnit(int t) const { void* args[] = { &t }; return CallStaticValue<float>("StrengthPerUnit", args, 1); }
        float ManpowerCapMul(int t) const { void* args[] = { &t }; return CallStaticValue<float>("ManpowerCapMul", args, 1); }
        float SpeedMul(int t, void* cfg) const { void* args[] = { &t, cfg }; return CallStaticValue<float>("SpeedMul", args, 2); }
        float AoiMul(int t, void* cfg) const { void* args[] = { &t, cfg }; return CallStaticValue<float>("AoiMul", args, 2); }
        float SpeedRaw(int t) const { void* args[] = { &t }; return CallStaticValue<float>("SpeedRaw", args, 1); }
        float AoiRaw(int t) const { void* args[] = { &t }; return CallStaticValue<float>("AoiRaw", args, 1); }
        bool IsEntrenched(void* d, int tick, void* cfg) const { void* args[] = { d, &tick, cfg }; return CallStaticValue<bool>("IsEntrenched", args, 3); }
        int TypeCount() const { return ReadStaticField<int>("TypeCount"); }
    };
}
