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
        void Publish(int tick, int year) const { void* args[] = { &tick, &year }; CallStatic("Publish", args, 2); }
        void* Of(void* it) const { void* args[] = { it }; return CallStatic("Of", args, 1); }
        void* AddToLibrary(void* it, void* design) const { void* args[] = { it, design }; return CallStatic("AddToLibrary", args, 2); }
        void* SaveToLibrary(void* it, void* design, bool& updated) const { void* args[] = { it, design, &updated }; return CallStatic("SaveToLibrary", args, 3); }
        bool RemoveDesign(void* it, int designId, const char*& refusal) const { void* args[] = { it, &designId, &refusal }; return CallStaticValue<bool>("RemoveDesign", args, 3); }
        float RetoolFee(void* it, void* design) const { void* args[] = { it, design }; return CallStaticValue<float>("RetoolFee", args, 2); }
        float TypicalComplexity(int domain, int year) const { void* args[] = { &domain, &year }; return CallStaticValue<float>("TypicalComplexity", args, 2); }
        bool Delegated(void* it) const { void* args[] = { it }; return CallStaticValue<bool>("Delegated", args, 1); }
        void TakeOver(void* it) const { void* args[] = { it }; CallStatic("TakeOver", args, 1); }
        void Delegate(void* it) const { void* args[] = { it }; CallStatic("Delegate", args, 1); }
        bool Retooling(void* it) const { void* args[] = { it }; return CallStaticValue<bool>("Retooling", args, 1); }
        int RetoolTicksLeft(void* it) const { void* args[] = { it }; return CallStaticValue<int>("RetoolTicksLeft", args, 1); }
        void PruneSpent(void* it) const { void* args[] = { it }; CallStatic("PruneSpent", args, 1); }
        void* ImportDesign(void* into, void* src, int giverId) const { void* args[] = { into, src, &giverId }; return CallStatic("ImportDesign", args, 3); }
        void InheritFrom(void* child, void* parent) const { void* args[] = { child, parent }; CallStatic("InheritFrom", args, 2); }
        int AdoptDrawings(void* into, void* from, const char* fromName, void* map) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(fromName ? fromName : "") : nullptr; void* args[] = { into, from, managed_2, map }; return CallStaticValue<int>("AdoptDrawings", args, 4); }
    };
}
