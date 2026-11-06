#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class CommandRules : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CommandRules(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "CommandRules") {}
    public:
        void Set(bool on) const { void* args[] = { &on }; Call("Set", args, 1); }
        void Publish() const { Call("Publish", nullptr, 0); }
        bool StartValueFor(bool editor, bool editorToggle) const { void* args[] = { &editor, &editorToggle }; return CallStaticValue<bool>("StartValueFor", args, 2); }
        int ModeUnrecorded() const { return ReadStaticField<int>("ModeUnrecorded"); }
        int ModeOff() const { return ReadStaticField<int>("ModeOff"); }
        int ModeOn() const { return ReadStaticField<int>("ModeOn"); }
        bool InGame() const { return ReadStaticField<bool>("InGame"); }
        void* EditorPrefKey() const { return ReadStaticField<void*>("EditorPrefKey"); }
        bool enabled() const { return ReadField<bool>("enabled"); }
        void SetEnabled(bool value) const { WriteField<bool>("enabled", value); }
    };
}
