#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class EmigrationSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit EmigrationSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "EmigrationSystem") {}
    public:
        void Tick(void* nations, void* getInternals, void* getRelations, void* cfg, int span = 1) const { void* __callArgs[] = { nations, getInternals, getRelations, cfg, &span }; CallStatic("Tick", __callArgs, 5); }
    };
}
