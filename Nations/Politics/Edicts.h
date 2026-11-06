#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class Edicts : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Edicts(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "Edicts") {}
    public:
        bool Retired(int e) const { void* __callArgs[] = { &e }; return CallStaticValue<bool>("Retired", __callArgs, 1); }
        void* Name(int e) const { void* __callArgs[] = { &e }; return CallStatic("Name", __callArgs, 1); }
        float GoldCost(int e, void* it, void* cfg, float taxPerDay) const { void* __callArgs[] = { &e, it, cfg, &taxPerDay }; return CallStaticValue<float>("GoldCost", __callArgs, 4); }
        float CooldownYears(int e, void* cfg) const { void* __callArgs[] = { &e, cfg }; return CallStaticValue<float>("CooldownYears", __callArgs, 2); }
        int ReadyTick(void* it, int e) const { void* __callArgs[] = { it, &e }; return CallStaticValue<int>("ReadyTick", __callArgs, 2); }
        void SetReadyTick(void* it, int e, int tick) const { void* __callArgs[] = { it, &e, &tick }; CallStatic("SetReadyTick", __callArgs, 3); }
        int Count() const { return ReadStaticField<int>("Count"); }
    };
}
