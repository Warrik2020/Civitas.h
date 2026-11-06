#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::TimeSkip
{
    class SkipSettlement : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SkipSettlement(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.TimeSkip", "SkipSettlement") {}
    public:
        void Begin(void* nm) const { void* args[] = { nm }; Call("Begin", args, 1); }
        int Step(void* nm, int span) const { void* args[] = { nm, &span }; return CallValue<int>("Step", args, 2); }
    };
}
