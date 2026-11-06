#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Generation
{
    class WorldGenerator : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WorldGenerator(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Generation", "WorldGenerator") {}
    public:
        void* Build(void* s, int& landCount) const { void* args[] = { s, &landCount }; return CallStatic("Build", args, 2); }
    };
}
