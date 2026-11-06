#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Strategic
{
    class ResourceUse : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ResourceUse(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Strategic", "ResourceUse") {}
    public:
        int ProductionWorks(void* it, int kind, int exceptDesignId = 0) const { void* __callArgs[] = { it, &kind, &exceptDesignId }; return CallStaticValue<int>("ProductionWorks", __callArgs, 3); }
        int ForgedWorks(void* it, int exceptDesignId = 0) const { void* __callArgs[] = { it, &exceptDesignId }; return CallStaticValue<int>("ForgedWorks", __callArgs, 2); }
        float FieldHeads(int nationId, int kind) const { void* __callArgs[] = { &nationId, &kind }; return CallStaticValue<float>("FieldHeads", __callArgs, 2); }
        float PendingHeads(void* it, int kind) const { void* __callArgs[] = { it, &kind }; return CallStaticValue<float>("PendingHeads", __callArgs, 2); }
        float HeadsOf(void* d, int kind) const { void* __callArgs[] = { d, &kind }; return CallStaticValue<float>("HeadsOf", __callArgs, 2); }
        float HeadsOfOverload5(void* t, int kind) const { void* __callArgs[] = { t, &kind }; return CallStaticValue<float>("HeadsOf", __callArgs, 2); }
        void RefreshAll(void* nations, void* internals) const { void* __callArgs[] = { nations, internals }; CallStatic("RefreshAll", __callArgs, 2); }
        bool NoSceneLookup() const { return ReadStaticField<bool>("NoSceneLookup"); }
        void NoSceneLookup(bool value) const { WriteStaticField<bool>("NoSceneLookup", value); }
    };
}
