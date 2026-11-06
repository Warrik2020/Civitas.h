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
        int ProductionWorks(void* it, int kind, int exceptDesignId = 0) const { void* args[] = { it, &kind, &exceptDesignId }; return CallStaticValue<int>("ProductionWorks", args, 3); }
        int ForgedWorks(void* it, int exceptDesignId = 0) const { void* args[] = { it, &exceptDesignId }; return CallStaticValue<int>("ForgedWorks", args, 2); }
        float FieldHeads(int nationId, int kind) const { void* args[] = { &nationId, &kind }; return CallStaticValue<float>("FieldHeads", args, 2); }
        float PendingHeads(void* it, int kind) const { void* args[] = { it, &kind }; return CallStaticValue<float>("PendingHeads", args, 2); }
        float HeadsOf(void* d, int kind) const { void* args[] = { d, &kind }; return CallStaticValue<float>("HeadsOf", args, 2); }
        float HeadsOf(void* t, int kind) const { void* args[] = { t, &kind }; return CallStaticValue<float>("HeadsOf", args, 2); }
        void RefreshAll(void* nations, void* internals) const { void* args[] = { nations, internals }; CallStatic("RefreshAll", args, 2); }
        bool NoSceneLookup() const { return ReadStaticField<bool>("NoSceneLookup"); }
        void SetNoSceneLookup(bool value) const { WriteStaticField<bool>("NoSceneLookup", value); }
    };
}
