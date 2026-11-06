#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Research
{
    class TechEras : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TechEras(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Research", "TechEras") {}
    public:
        void* DisplayName(int era) const { void* args[] = { &era }; return CallStatic("DisplayName", args, 1); }
        float MaxTier(int era) const { void* args[] = { &era }; return CallStaticValue<float>("MaxTier", args, 1); }
        int Classify(void* it) const { void* args[] = { it }; return CallStaticValue<int>("Classify", args, 1); }
        int Apply(void* it, int era, bool includeLockedCategories = false, bool replace = true) const { void* args[] = { it, &era, &includeLockedCategories, &replace }; return CallStaticValue<int>("Apply", args, 4); }
        int Unlock(void* it, int techIndex) const { void* args[] = { it, &techIndex }; return CallStaticValue<int>("Unlock", args, 2); }
        void SyncLegacyTechScore(void* it, void* cfg, int era) const { void* args[] = { it, cfg, &era }; CallStatic("SyncLegacyTechScore", args, 3); }
        float TopTier() const { return ReadStaticField<float>("TopTier"); }
        void* All() const { return ReadStaticField<void*>("All"); }
    };
}
