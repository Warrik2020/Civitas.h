#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AffairsPhrases : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsPhrases(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AffairsPhrases") {}
    public:
        void RenderStep(void* c, void* step, const char*& headline, const char*& text) const { void* args[] = { c, step, &headline, &text }; CallStatic("RenderStep", args, 4); }
        void* Cause(void* c, void* seed, const char*& fact) const { void* args[] = { c, seed, &fact }; return CallStatic("Cause", args, 3); }
    };
}
