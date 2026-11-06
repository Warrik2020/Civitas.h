#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class StateRecruitPrompt : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit StateRecruitPrompt(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "StateRecruitPrompt") {}
    public:
        void OpenFor(int stateId) const { void* __callArgs[] = { &stateId }; CallStatic("OpenFor", __callArgs, 1); }
    };
}
