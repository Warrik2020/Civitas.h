#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class TradeOfferLocks : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TradeOfferLocks(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "TradeOfferLocks") {}
    public:
        bool IsLocked(void* l) const { void* __callArgs[] = { l }; return CallStaticValue<bool>("IsLocked", __callArgs, 1); }
        void SetLocked(void* l, bool on) const { void* __callArgs[] = { l, &on }; CallStatic("SetLocked", __callArgs, 2); }
        void* LockFor(int kind) const { void* __callArgs[] = { &kind }; return CallStatic("LockFor", __callArgs, 1); }
        void* Name(void* l) const { void* __callArgs[] = { l }; return CallStatic("Name", __callArgs, 1); }
        void* Short_(void* l) const { void* __callArgs[] = { l }; return CallStatic("Short", __callArgs, 1); }
        void* Asking(void* l) const { void* __callArgs[] = { l }; return CallStatic("Asking", __callArgs, 1); }
        bool Refuses(int playerGives) const { void* __callArgs[] = { &playerGives }; return CallStaticValue<bool>("Refuses", __callArgs, 1); }
        bool Blocks(void* deal) const { void* __callArgs[] = { deal }; return CallStaticValue<bool>("Blocks", __callArgs, 1); }
        int LockCount() const { return ReadStaticField<int>("LockCount"); }
    };
}
