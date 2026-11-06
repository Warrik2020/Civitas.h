#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class PeoplesIconTint : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeoplesIconTint(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "PeoplesIconTint") {}
    public:
        void Tick() const { CallStatic("Tick", nullptr, 0); }
        void* ArtPath() const { return ReadStaticField<void*>("ArtPath"); }
    };
}
