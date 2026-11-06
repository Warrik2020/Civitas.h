#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class SimAwait : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SimAwait(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "SimAwait") {}
    public:
        void Force() const { Call("Force", nullptr, 0); }
        bool IsReady() const { return CallValue<bool>("get_IsReady"); }
    };
}
