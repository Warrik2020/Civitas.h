#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class LogisticsRules : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LogisticsRules(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "LogisticsRules") {}
    public:
        void Set(bool on) const { void* args[] = { &on }; Call("Set", args, 1); }
        void Publish() const { Call("Publish", nullptr, 0); }
        int ModeUnrecorded() const { return ReadStaticField<int>("ModeUnrecorded"); }
        int ModeOff() const { return ReadStaticField<int>("ModeOff"); }
        int ModeOn() const { return ReadStaticField<int>("ModeOn"); }
        bool InGame() const { return ReadStaticField<bool>("InGame"); }
        bool enabled() const { return ReadField<bool>("enabled"); }
        void SetEnabled(bool value) const { WriteField<bool>("enabled", value); }
    };
}
