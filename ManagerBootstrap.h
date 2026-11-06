#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "CivitasCore.h"

namespace CivitasPoly
{
    class ManagerBootstrap : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ManagerBootstrap(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly", "ManagerBootstrap") {}
    public:
        void EnsureAll() const { CallStatic("EnsureAll", nullptr, 0); }
    };
}
