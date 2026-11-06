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
        bool Retired(int e) const { void* args[] = { &e }; return CallStaticValue<bool>("Retired", args, 1); }
        void* Name(int e) const { void* args[] = { &e }; return CallStatic("Name", args, 1); }
        float GoldCost(int e, void* it, void* cfg, float taxPerDay) const { void* args[] = { &e, it, cfg, &taxPerDay }; return CallStaticValue<float>("GoldCost", args, 4); }
        float CooldownYears(int e, void* cfg) const { void* args[] = { &e, cfg }; return CallStaticValue<float>("CooldownYears", args, 2); }
        int ReadyTick(void* it, int e) const { void* args[] = { it, &e }; return CallStaticValue<int>("ReadyTick", args, 2); }
        void SetReadyTick(void* it, int e, int tick) const { void* args[] = { it, &e, &tick }; CallStatic("SetReadyTick", args, 3); }
        int Count() const { return ReadStaticField<int>("Count"); }
    };
}
