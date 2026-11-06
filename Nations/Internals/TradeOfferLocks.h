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
        bool IsLocked(void* l) const { void* args[] = { l }; return CallStaticValue<bool>("IsLocked", args, 1); }
        void SetLocked(void* l, bool on) const { void* args[] = { l, &on }; CallStatic("SetLocked", args, 2); }
        void* LockFor(int kind) const { void* args[] = { &kind }; return CallStatic("LockFor", args, 1); }
        void* Name(void* l) const { void* args[] = { l }; return CallStatic("Name", args, 1); }
        void* Short_(void* l) const { void* args[] = { l }; return CallStatic("Short", args, 1); }
        void* Asking(void* l) const { void* args[] = { l }; return CallStatic("Asking", args, 1); }
        bool Refuses(int playerGives) const { void* args[] = { &playerGives }; return CallStaticValue<bool>("Refuses", args, 1); }
        bool Blocks(void* deal) const { void* args[] = { deal }; return CallStaticValue<bool>("Blocks", args, 1); }
        int LockCount() const { return ReadStaticField<int>("LockCount"); }
    };
}
