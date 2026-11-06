#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class AffairsRules : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsRules(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "AffairsRules") {}
    public:
        void Set(bool on) const { void* __callArgs[] = { &on }; Call("Set", __callArgs, 1); }
        bool FromMode(int mode, bool fallback) const { void* __callArgs[] = { &mode, &fallback }; return CallStaticValue<bool>("FromMode", __callArgs, 2); }
        void Publish() const { Call("Publish", nullptr, 0); }
        int ModeUnrecorded() const { return ReadStaticField<int>("ModeUnrecorded"); }
        int ModeOff() const { return ReadStaticField<int>("ModeOff"); }
        int ModeOn() const { return ReadStaticField<int>("ModeOn"); }
        bool enabled() const { return ReadField<bool>("enabled"); }
        void enabled(bool value) const { WriteField<bool>("enabled", value); }
    };
}
