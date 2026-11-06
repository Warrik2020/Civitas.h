#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class JobAwait : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit JobAwait(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "JobAwait") {}
    public:
        void Force() const { Call("Force", nullptr, 0); }
        void* Handle() const { return ReadField<void*>("Handle"); }
        void Handle(void* value) const { WriteField<void*>("Handle", value); }
    };
}
