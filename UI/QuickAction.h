#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class QuickAction : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit QuickAction(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "QuickAction") {}
    public:
        int kind() const { return ReadField<int>("kind"); }
        int category() const { return ReadField<int>("category"); }
        int arg() const { return ReadField<int>("arg"); }
        void* label() const { return ReadField<void*>("label"); }
        void* note() const { return ReadField<void*>("note"); }
        bool enabled() const { return ReadField<bool>("enabled"); }
        bool danger() const { return ReadField<bool>("danger"); }
        bool confirm() const { return ReadField<bool>("confirm"); }
        int menu() const { return ReadField<int>("menu"); }
    };
}
