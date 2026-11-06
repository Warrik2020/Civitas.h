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
        void Begin(void* w) const { void* args[] = { w }; Call("Begin", args, 1); }
        void Step(void* w, int span) const { void* args[] = { w, &span }; Call("Step", args, 2); }
        void Finish(void* w, int elapsed) const { void* args[] = { w, &elapsed }; Call("Finish", args, 2); }
    };
}
