#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class BorderChain : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BorderChain(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "BorderChain") {}
    public:
        void* edges() const { return ReadField<void*>("edges"); }
        void* foes() const { return ReadField<void*>("foes"); }
        bool closed() const { return ReadField<bool>("closed"); }
        void SetClosed(bool value) const { WriteField<bool>("closed", value); }
    };
}
