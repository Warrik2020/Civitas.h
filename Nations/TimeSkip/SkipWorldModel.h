#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::TimeSkip
{
    class SkipWorldModel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SkipWorldModel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.TimeSkip", "SkipWorldModel") {}
    public:
        void Begin(void* w) const { void* __callArgs[] = { w }; Call("Begin", __callArgs, 1); }
        void Step(void* w, int span) const { void* __callArgs[] = { w, &span }; Call("Step", __callArgs, 2); }
        void Finish(void* w, int elapsed) const { void* __callArgs[] = { w, &elapsed }; Call("Finish", __callArgs, 2); }
    };
}
