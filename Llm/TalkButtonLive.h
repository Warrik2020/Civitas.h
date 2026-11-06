#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Llm
{
    class TalkButtonLive : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TalkButtonLive(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Llm", "TalkButtonLive") {}
    public:
        void Bind(void* b) const { void* __callArgs[] = { b }; Call("Bind", __callArgs, 1); }
    };
}
