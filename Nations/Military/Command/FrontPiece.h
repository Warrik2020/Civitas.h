#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class FrontPiece : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FrontPiece(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "FrontPiece") {}
    public:
        void* line() const { return ReadField<void*>("line"); }
        void* foeAt() const { return ReadField<void*>("foeAt"); }
        void* edges() const { return ReadField<void*>("edges"); }
        void* foes() const { return ReadField<void*>("foes"); }
    };
}
