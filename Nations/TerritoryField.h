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
        float WarStepCap(void* cfg) const { void* args[] = { cfg }; return CallStaticValue<float>("WarStepCap", args, 1); }
        void Grow(void* n, void* all, void* grid, void* cfg, void* war = nullptr, bool conquestOnly = false, void* byId = nullptr) const { void* args[] = { n, all, grid, cfg, war, &conquestOnly, byId }; CallStatic("Grow", args, 7); }
        void Begin(void* g, void* n, void* all, void* grid, void* cfg, void* war = nullptr, bool conquestOnly = false, void* byId = nullptr) const { void* args[] = { g, n, all, grid, cfg, war, &conquestOnly, byId }; CallStatic("Begin", args, 8); }
        bool Step(void* g, int maxChunks) const { void* args[] = { g, &maxChunks }; return CallStaticValue<bool>("Step", args, 2); }
        void CedeTile(void* n, void* all, void* grid, void* cfg, int i, void* war) const { void* args[] = { n, all, grid, cfg, &i, war }; CallStatic("CedeTile", args, 6); }
        void Clear() const { Call("Clear", nullptr, 0); }
        float hx() const { return ReadField<float>("hx"); }
        void SetHx(float value) const { WriteField<float>("hx", value); }
        float hy() const { return ReadField<float>("hy"); }
        void SetHy(float value) const { WriteField<float>("hy", value); }
        float cosHalf() const { return ReadField<float>("cosHalf"); }
        void SetCosHalf(float value) const { WriteField<float>("cosHalf", value); }
        float invRange() const { return ReadField<float>("invRange"); }
        void SetInvRange(float value) const { WriteField<float>("invRange", value); }
    };
}
