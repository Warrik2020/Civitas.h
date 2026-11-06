#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class DesignBureau : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DesignBureau(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "DesignBureau") {}
    public:
        void* Best(void* it, int slot) const { void* __callArgs[] = { it, &slot }; return CallStatic("Best", __callArgs, 2); }
        bool IsBureau(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<bool>("IsBureau", __callArgs, 1); }
        float Value(void* d, int slot, int year) const { void* __callArgs[] = { d, &slot, &year }; return CallStaticValue<float>("Value", __callArgs, 3); }
        void Work(void* it, void* diff, void* seeds) const { void* __callArgs[] = { it, diff, seeds }; CallStatic("Work", __callArgs, 3); }
        int SlotCount() const { return ReadStaticField<int>("SlotCount"); }
        int SlotRanged() const { return ReadStaticField<int>("SlotRanged"); }
        int SlotMelee() const { return ReadStaticField<int>("SlotMelee"); }
        int SlotArmour() const { return ReadStaticField<int>("SlotArmour"); }
        int SlotTank() const { return ReadStaticField<int>("SlotTank"); }
        int SlotArtillery() const { return ReadStaticField<int>("SlotArtillery"); }
        void* KeyPrefix() const { return ReadStaticField<void*>("KeyPrefix"); }
    };
}
