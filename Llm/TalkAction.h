#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Llm
{
    class TalkAction : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TalkAction(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Llm", "TalkAction") {}
    public:
        void Build(void* row) const { void* args[] = { row }; CallStatic("Build", args, 1); }
    };
}
