#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiFonts : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiFonts(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiFonts") {}
    public:
        void Prewarm() const { CallStatic("Prewarm", nullptr, 0); }
    };
}
