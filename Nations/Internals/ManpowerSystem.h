#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class ManpowerSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ManpowerSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "ManpowerSystem") {}
    public:
        float Cap(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("Cap", __callArgs, 2); }
        float Cap(void* it, void* cfg, bool player) const { void* __callArgs[] = { it, cfg, &player }; return CallStaticValue<float>("Cap", __callArgs, 3); }
        float Production(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("Production", __callArgs, 2); }
        float StartStock(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("StartStock", __callArgs, 2); }
        void Tick(void* it, void* cfg, int span = 1) const { void* __callArgs[] = { it, cfg, &span }; CallStatic("Tick", __callArgs, 3); }
        void Return_(void* it, void* cfg, float men) const { void* __callArgs[] = { it, cfg, &men }; CallStatic("Return", __callArgs, 3); }
        float Draw(void* it, float men) const { void* __callArgs[] = { it, &men }; return CallStaticValue<float>("Draw", __callArgs, 2); }
        float TicksToFull(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("TicksToFull", __callArgs, 2); }
    };
}
