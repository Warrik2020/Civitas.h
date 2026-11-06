#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class PeoplesLadder : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeoplesLadder(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "PeoplesLadder") {}
    public:
        void Write(void* views, int armedRung) const { void* args[] = { views, &armedRung }; Call("Write", args, 2); }
        void SetShown(bool on) const { void* args[] = { &on }; Call("SetShown", args, 1); }
        int Slots() const { return ReadStaticField<int>("Slots"); }
        void* SlotRung() const { return ReadStaticField<void*>("SlotRung"); }
        void* Root() const { return ReadField<void*>("Root"); }
    };
}
