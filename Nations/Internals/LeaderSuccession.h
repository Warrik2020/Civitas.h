#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class LeaderSuccession : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LeaderSuccession(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "LeaderSuccession") {}
    public:
        void* Roll(void* cfg, int government, int tick, int tiles, void* previous, bool coup, float ticksPerYear, int foundingCulture = -1) const { void* args[] = { cfg, &government, &tick, &tiles, previous, &coup, &ticksPerYear, &foundingCulture }; return CallStatic("Roll", args, 8); }
        void RecacheScalars(void* l) const { void* args[] = { l }; CallStatic("RecacheScalars", args, 1); }
        void SetReignEnd(void* l, void* cfg, int tick, float ticksPerYear) const { void* args[] = { l, cfg, &tick, &ticksPerYear }; CallStatic("SetReignEnd", args, 4); }
        void* RollFounding(void* cfg, int government, int tick, int tiles, float ticksPerYear, int foundingCulture = -1) const { void* args[] = { cfg, &government, &tick, &tiles, &ticksPerYear, &foundingCulture }; return CallStatic("RollFounding", args, 6); }
        void Pass(void* nations, void* internals, void* cfg, void* polity, int tick, float ticksPerYear) const { void* args[] = { nations, internals, cfg, polity, &tick, &ticksPerYear }; CallStatic("Pass", args, 6); }
        void Install(void* it, void* n, void* cfg, void* polity, int tick, bool coup, float ticksPerYear, void* shape = nullptr) const { void* args[] = { it, n, cfg, polity, &tick, &coup, &ticksPerYear, shape }; CallStatic("Install", args, 8); }
    };
}
