#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class LobeManager : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LobeManager(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "LobeManager") {}
    public:
        void Spawn(void* n, float heading, void* cfg) const { void* __callArgs[] = { n, &heading, cfg }; CallStatic("Spawn", __callArgs, 3); }
        void AgeAndRespawn(void* n, void* cfg) const { void* __callArgs[] = { n, cfg }; CallStatic("AgeAndRespawn", __callArgs, 2); }
        void Drift(void* n, void* grid, void* cfg) const { void* __callArgs[] = { n, grid, cfg }; CallStatic("Drift", __callArgs, 3); }
    };
}
