#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Llm
{
    class TalkPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TalkPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Llm", "TalkPanel") {}
    public:
        bool CanTalkTo(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<bool>("CanTalkTo", __callArgs, 1); }
        void Open(int nationId) const { void* __callArgs[] = { &nationId }; Call("Open", __callArgs, 1); }
        void Close() const { Call("Close", nullptr, 0); }
    };
}
