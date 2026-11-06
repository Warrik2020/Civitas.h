#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class WeaponSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WeaponSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "WeaponSystem") {}
    public:
        void Publish(int tick, int year) const { void* __callArgs[] = { &tick, &year }; CallStatic("Publish", __callArgs, 2); }
        void* Of(void* it) const { void* __callArgs[] = { it }; return CallStatic("Of", __callArgs, 1); }
        void* AddToLibrary(void* it, void* design) const { void* __callArgs[] = { it, design }; return CallStatic("AddToLibrary", __callArgs, 2); }
        void* SaveToLibrary(void* it, void* design, bool& updated) const { void* __callArgs[] = { it, design, &updated }; return CallStatic("SaveToLibrary", __callArgs, 3); }
        bool RemoveDesign(void* it, int designId, const char*& refusal) const { void* __callArgs[] = { it, &designId, &refusal }; return CallStaticValue<bool>("RemoveDesign", __callArgs, 3); }
        float RetoolFee(void* it, void* design) const { void* __callArgs[] = { it, design }; return CallStaticValue<float>("RetoolFee", __callArgs, 2); }
        float TypicalComplexity(int domain, int year) const { void* __callArgs[] = { &domain, &year }; return CallStaticValue<float>("TypicalComplexity", __callArgs, 2); }
        bool Delegated(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<bool>("Delegated", __callArgs, 1); }
        void TakeOver(void* it) const { void* __callArgs[] = { it }; CallStatic("TakeOver", __callArgs, 1); }
        void Delegate(void* it) const { void* __callArgs[] = { it }; CallStatic("Delegate", __callArgs, 1); }
        bool Retooling(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<bool>("Retooling", __callArgs, 1); }
        int RetoolTicksLeft(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<int>("RetoolTicksLeft", __callArgs, 1); }
        void PruneSpent(void* it) const { void* __callArgs[] = { it }; CallStatic("PruneSpent", __callArgs, 1); }
        void* ImportDesign(void* into, void* src, int giverId) const { void* __callArgs[] = { into, src, &giverId }; return CallStatic("ImportDesign", __callArgs, 3); }
        void InheritFrom(void* child, void* parent) const { void* __callArgs[] = { child, parent }; CallStatic("InheritFrom", __callArgs, 2); }
        int AdoptDrawings(void* into, void* from, const char* fromName, void* map) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(fromName ? fromName : "") : nullptr; void* __callArgs[] = { into, from, managed_2, map }; return CallStaticValue<int>("AdoptDrawings", __callArgs, 4); }
    };
}
