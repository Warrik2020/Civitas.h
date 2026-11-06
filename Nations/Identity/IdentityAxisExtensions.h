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
        int Bit(int axis) const { void* __callArgs[] = { &axis }; return CallStaticValue<int>("Bit", __callArgs, 1); }
        bool Has(int mask, int axis) const { void* __callArgs[] = { &mask, &axis }; return CallStaticValue<bool>("Has", __callArgs, 2); }
        int CountOf(int mask) const { void* __callArgs[] = { &mask }; return CallStaticValue<int>("CountOf", __callArgs, 1); }
        int Sanitize(int mask) const { void* __callArgs[] = { &mask }; return CallStaticValue<int>("Sanitize", __callArgs, 1); }
        float BillShare(int mask) const { void* __callArgs[] = { &mask }; return CallStaticValue<float>("BillShare", __callArgs, 1); }
        void* NameOf(int axis) const { void* __callArgs[] = { &axis }; return CallStatic("NameOf", __callArgs, 1); }
        void* PluralOf(int axis) const { void* __callArgs[] = { &axis }; return CallStatic("PluralOf", __callArgs, 1); }
        bool CanRenounce(int axis) const { void* __callArgs[] = { &axis }; return CallStaticValue<bool>("CanRenounce", __callArgs, 1); }
        bool CanBranch(int axis) const { void* __callArgs[] = { &axis }; return CallStaticValue<bool>("CanBranch", __callArgs, 1); }
        void* RenounceLabel(int axis) const { void* __callArgs[] = { &axis }; return CallStatic("RenounceLabel", __callArgs, 1); }
        void* RenouncedName(int axis) const { void* __callArgs[] = { &axis }; return CallStatic("RenouncedName", __callArgs, 1); }
        int Count() const { return ReadStaticField<int>("Count"); }
        int AllMask() const { return ReadStaticField<int>("AllMask"); }
        void* Names() const { return ReadStaticField<void*>("Names"); }
    };
}
