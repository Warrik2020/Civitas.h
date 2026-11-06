#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerUnifyReaction : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerUnifyReaction(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerUnifyReaction") {}
    public:
        void* key() const { return ReadField<void*>("key"); }
        void SetKey(void* value) const { WriteField<void*>("key", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        int untilTick() const { return ReadField<int>("untilTick"); }
        void SetUntilTick(int value) const { WriteField<int>("untilTick", value); }
        bool demand() const { return ReadField<bool>("demand"); }
        void SetDemand(bool value) const { WriteField<bool>("demand", value); }
        void* effectKeys() const { return ReadField<void*>("effectKeys"); }
        void SetEffectKeys(void* value) const { WriteField<void*>("effectKeys", value); }
        void* effectScopes() const { return ReadField<void*>("effectScopes"); }
        void SetEffectScopes(void* value) const { WriteField<void*>("effectScopes", value); }
        void* effectValues() const { return ReadField<void*>("effectValues"); }
        void SetEffectValues(void* value) const { WriteField<void*>("effectValues", value); }
    };
}
