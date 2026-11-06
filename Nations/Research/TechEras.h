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
        void* DisplayName(int era) const { void* __callArgs[] = { &era }; return CallStatic("DisplayName", __callArgs, 1); }
        float MaxTier(int era) const { void* __callArgs[] = { &era }; return CallStaticValue<float>("MaxTier", __callArgs, 1); }
        int Classify(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<int>("Classify", __callArgs, 1); }
        int Apply(void* it, int era, bool includeLockedCategories = false, bool replace = true) const { void* __callArgs[] = { it, &era, &includeLockedCategories, &replace }; return CallStaticValue<int>("Apply", __callArgs, 4); }
        int Unlock(void* it, int techIndex) const { void* __callArgs[] = { it, &techIndex }; return CallStaticValue<int>("Unlock", __callArgs, 2); }
        void SyncLegacyTechScore(void* it, void* cfg, int era) const { void* __callArgs[] = { it, cfg, &era }; CallStatic("SyncLegacyTechScore", __callArgs, 3); }
        float TopTier() const { return ReadStaticField<float>("TopTier"); }
        void* All() const { return ReadStaticField<void*>("All"); }
    };
}
