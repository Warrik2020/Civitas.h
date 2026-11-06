#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class UnifyReaction : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnifyReaction(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "UnifyReaction") {}
    public:
        void* key() const { return ReadField<void*>("key"); }
        void key(void* value) const { WriteField<void*>("key", value); }
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        int untilTick() const { return ReadField<int>("untilTick"); }
        void untilTick(int value) const { WriteField<int>("untilTick", value); }
        void* effects() const { return ReadField<void*>("effects"); }
        void effects(void* value) const { WriteField<void*>("effects", value); }
        bool demand() const { return ReadField<bool>("demand"); }
        void demand(bool value) const { WriteField<bool>("demand", value); }
    };
}
