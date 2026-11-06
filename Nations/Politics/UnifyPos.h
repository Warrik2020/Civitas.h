#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class UnifyPos : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnifyPos(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "UnifyPos") {}
    public:
        void* options() const { return ReadField<void*>("options"); }
        void SetOptions(void* value) const { WriteField<void*>("options", value); }
        bool pair() const { return ReadField<bool>("pair"); }
        void SetPair(bool value) const { WriteField<bool>("pair", value); }
    };
}
