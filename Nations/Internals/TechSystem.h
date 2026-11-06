#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class TechSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TechSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "TechSystem") {}
    public:
        void Tick(void* it, void* cfg) const { void* args[] = { it, cfg }; CallStatic("Tick", args, 2); }
        void* EraName(int era, void* cfg) const { void* args[] = { &era, cfg }; return CallStatic("EraName", args, 2); }
        float NextThreshold(int era, void* cfg) const { void* args[] = { &era, cfg }; return CallStaticValue<float>("NextThreshold", args, 2); }
        int NextEraGate(int era, void* cfg) const { void* args[] = { &era, cfg }; return CallStaticValue<int>("NextEraGate", args, 2); }
    };
}
