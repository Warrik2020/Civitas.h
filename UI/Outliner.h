#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class Outliner : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Outliner(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "Outliner") {}
    public:
        float Width() const { return ReadStaticField<float>("Width"); }
    };
}
