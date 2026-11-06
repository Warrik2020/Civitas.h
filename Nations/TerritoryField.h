#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class TerritoryField : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TerritoryField(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "TerritoryField") {}
    public:
        float WarStepCap(void* cfg) const { void* __callArgs[] = { cfg }; return CallStaticValue<float>("WarStepCap", __callArgs, 1); }
        void Grow(void* n, void* all, void* grid, void* cfg, void* war = nullptr, bool conquestOnly = false, void* byId = nullptr) const { void* __callArgs[] = { n, all, grid, cfg, war, &conquestOnly, byId }; CallStatic("Grow", __callArgs, 7); }
        void Begin(void* g, void* n, void* all, void* grid, void* cfg, void* war = nullptr, bool conquestOnly = false, void* byId = nullptr) const { void* __callArgs[] = { g, n, all, grid, cfg, war, &conquestOnly, byId }; CallStatic("Begin", __callArgs, 8); }
        bool Step(void* g, int maxChunks) const { void* __callArgs[] = { g, &maxChunks }; return CallStaticValue<bool>("Step", __callArgs, 2); }
        void CedeTile(void* n, void* all, void* grid, void* cfg, int i, void* war) const { void* __callArgs[] = { n, all, grid, cfg, &i, war }; CallStatic("CedeTile", __callArgs, 6); }
    };
}
