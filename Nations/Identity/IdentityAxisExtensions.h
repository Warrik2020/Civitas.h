#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class IdentityAxisExtensions : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IdentityAxisExtensions(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "IdentityAxisExtensions") {}
    public:
        int Bit(int axis) const { void* args[] = { &axis }; return CallStaticValue<int>("Bit", args, 1); }
        bool Has(int mask, int axis) const { void* args[] = { &mask, &axis }; return CallStaticValue<bool>("Has", args, 2); }
        int CountOf(int mask) const { void* args[] = { &mask }; return CallStaticValue<int>("CountOf", args, 1); }
        int Sanitize(int mask) const { void* args[] = { &mask }; return CallStaticValue<int>("Sanitize", args, 1); }
        float BillShare(int mask) const { void* args[] = { &mask }; return CallStaticValue<float>("BillShare", args, 1); }
        void* NameOf(int axis) const { void* args[] = { &axis }; return CallStatic("NameOf", args, 1); }
        void* PluralOf(int axis) const { void* args[] = { &axis }; return CallStatic("PluralOf", args, 1); }
        bool CanRenounce(int axis) const { void* args[] = { &axis }; return CallStaticValue<bool>("CanRenounce", args, 1); }
        bool CanBranch(int axis) const { void* args[] = { &axis }; return CallStaticValue<bool>("CanBranch", args, 1); }
        void* RenounceLabel(int axis) const { void* args[] = { &axis }; return CallStatic("RenounceLabel", args, 1); }
        void* RenouncedName(int axis) const { void* args[] = { &axis }; return CallStatic("RenouncedName", args, 1); }
        int Count() const { return ReadStaticField<int>("Count"); }
        int AllMask() const { return ReadStaticField<int>("AllMask"); }
        void* Names() const { return ReadStaticField<void*>("Names"); }
    };
}
